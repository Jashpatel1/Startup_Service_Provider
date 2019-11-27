#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;

void Display(string interest)
{
    int n1,votes1;
    char s10[25],s11[25],s12[25],s13[25],s14[25],s15[25],s16[25],s17[25],s18[25];
    FILE *fp;
    fp = fopen("databse/companyregdetails.txt","r+");
    fscanf(fp,"%d",&n1);
    for(int i=0;i<n1;i++)
    {
        fscanf(fp,"%s%s%s%s%s%s%s%s%d",s11,s12,s13,s14,s15,s16,s17,s18,&votes1);
        std::string ver_interest(s18);
        if(ver_interest == interest)
        {
            std::string comp_name1(s11);
            std::string comp_name2(s12);
            std::string comp_name3(s13);
            std::string comp_name4(s14);
            std::string comp_name5(s15);
            std::string comp_name6(s16);
            std::string comp_name7(s17);
            cout<<"Name of the company: "<<comp_name1<<" "<<comp_name2<<endl<<"Email-id of the company is: "<<comp_name3<<endl<<"Contact no. of company is: "<<comp_name4<<endl<<"Established in: "<<comp_name5<<", "<<"State: "<<comp_name6<<", "<<comp_name7<<endl;
        }
    }
    fclose(fp);
}

void get_email_company(string uid)
{
        FILE *fp;
        FILE *fpl;
        string Check_uid;
        char cuid[25];
        char cpass[25];
        fp = fopen("databse/companydatabase.txt","r");
        fpl = fopen("databse/companyregdetails.txt","r");
        int n;
        fscanf(fp,"%d",&n);
        int i;
        for(i=0;i<n;i++)
        {
            fscanf(fp,"%s%s",cuid,cpass);
            std::string Check_uid(cuid);
            std::string Check_pass(cpass);
            if(uid == Check_uid)
            {
                 int n1;
                 char interest1[25],iter1[25];
                 fscanf(fpl,"%s",iter1);
                 for(int j=0;j<i;j++)
                     for(int k=0;k<9;k++)
                        fscanf(fpl,"%s",iter1);
                 for(int j=0;j<3;j++)
                 {
                     fscanf(fpl,"%s",interest1);
                 }
                 fscanf(fpl,"%d",&n1);
                    std::string interest(interest1);
                    cout<<"Forgot password "<<endl;

                    char s[]="python forgotpassword.py ";
                    strcat(s,interest.c_str());
                    string s1=" ";
                    strcat(s,s1.c_str());
                    strcat(s,cpass);
                    system(s);
                 fclose(fp);
                 fclose(fpl);
                break;
            }
        }
}

void get_email_startup(string uid)
{
    FILE *fp;
    FILE *fpl;
    string Check_uid;
    char cuid[25];
    char cpass[25];
    fp = fopen("databse/startupatabase.txt","r");
    fpl = fopen("databse/startupregdetails.txt","r");
    int n;
    fscanf(fp,"%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%s%s",cuid,cpass);
        std::string Check_uid(cuid);
        std::string Check_pass(cpass);
        if(uid == Check_uid)
        {
             int n1;
             char interest1[25],iter1[25];
             fscanf(fpl,"%s",iter1);
             for(int j=0;j<i;j++)
                 for(int k=0;k<8;k++)
                    fscanf(fpl,"%s",iter1);
             for(int j=0;j<3;j++)
             {
                 fscanf(fpl,"%s",interest1);
             }
             fscanf(fpl,"%d",&n1);
                std::string interest(interest1);
                cout<<"Forgot password "<<endl;

                char s[]="python forgotpassword.py ";
                strcat(s,interest.c_str());
                string s1=" ";
                strcat(s,s1.c_str());
                strcat(s,cpass);
                system(s);
             fclose(fp);
             fclose(fpl);
            break;
        }
    }
}

void voting(string interest)
{
    int n1,votes1;
    char s10[25],s11[25],s12[25],s13[25],s14[25],s15[25],s16[25],s17[25],s18[25];
    FILE *fp;
    fp = fopen("databse/companyregdetails.txt","r+");
    fscanf(fp,"%d",&n1);
    for(int i=0;i<n1;i++)
    {
        fscanf(fp,"%s%s%s%s%s%s%s%s%d",s11,s12,s13,s14,s15,s16,s17,s18,&votes1);
        std::string ver_interest(s18);
        char reply;
        if(ver_interest == interest)
        {
            std::string comp_name1(s11);
            std::string comp_name2(s12);
            std::string comp_name3(s13);
            std::string comp_name4(s14);
            std::string comp_name5(s15);
            std::string comp_name6(s16);
            std::string comp_name7(s17);
            cout<<"Name of the company: "<<comp_name1<<" "<<comp_name2<<endl<<"Email-id of the company is: "<<comp_name3<<endl<<"Contact no. of company is: "<<comp_name4<<endl<<"Established in: "<<comp_name5<<", "<<"State: "<<comp_name6<<", "<<comp_name7<<endl;

            cout<<"Do you want to vote for this company?(Y/N)"<<endl;
            cin>>reply;
             if(reply == 'Y' || reply == 'y')
             {
                  votes1++;
                  char s[]="python votemail.py ";
                  strcat(s,comp_name3.c_str());
                  system(s);
             }
             fseek(fp,-1,SEEK_CUR);
             fprintf(fp,"%d",votes1);
        }
    }
    fclose(fp);
}
    void Display_startup(string interest)
    {
    int n1,votes1;
    char s10[25],s11[25],s12[25],s13[25],s14[25],s15[25],s16[25],s17[25],s18[25];
    FILE *fp;
    fp = fopen("databse/startupregdetails.txt","r+");
    fscanf(fp,"%d",&n1);
    for(int i=0;i<n1;i++)
    {
        fscanf(fp,"%s%s%s%s%s%s%s%s",s11,s12,s13,s14,s15,s16,s17,s18);
        std::string ver_interest(s18);
        if(ver_interest == interest)
        {
            std::string comp_name1(s11);
            std::string comp_name2(s12);
            std::string comp_name3(s13);
            std::string comp_name4(s14);
            std::string comp_name5(s15);
            std::string comp_name6(s16);
            std::string comp_name7(s17);
            cout<<"Name of the startup-user : "<<comp_name1<<" "<<comp_name2<<endl<<"Email-id of the startup-user is: "<<comp_name3<<endl<<"Contact no. of startup-user is: "<<comp_name4<<endl<<"date of birth :"<<comp_name5<<endl<<"city: "<<comp_name6<<"state: "<<comp_name7<<endl;
        }
    }
    fclose(fp);
}
