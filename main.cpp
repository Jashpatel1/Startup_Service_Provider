#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string>
#include "src/check.cpp"
#include "src/adminfunction.cpp"
using namespace std;

class Company_freelancer
{
    public:
        string firstName;
        string lastName;
        string emailid;
        string contact;
        string established;
        string cityofestablishment;
        string state;
        string interest_tag;
        int votes;
    public:
        string uid;
        string password;
    public:
    void set_uid()
    {
        int n,i;
        while(1)
        {
        cout<<"Enter the UID you want to set:"<<endl;
        cin>>uid;
        FILE* fp;
        fp = fopen("src/database/companydatabase.txt","r+");
        char c_uid[25],c_pass[25];
        fscanf(fp,"%d",&n);
        for(i=0;i<n;i++)
        {
            fscanf(fp,"%s%s",c_uid,c_pass);
            std::string c_uidm(c_uid);
            if(uid == c_uidm)
            {
                cout<<"this uid is already in use,try again"<<endl;
                break;
            }
        }
        if(i==n)
            break;
        fclose(fp);
        }
        cout<<"enter the password you want to set"<<endl;
        for(int i=0;i<1000;i++)
        {
          char c=getch();
          if(c=='\r')
            break;
          cout<<"*";
          password[i]=c;
         }
         cout<<endl;
    }

    void getInfo()
    {
      do{
        cout<<"Enter First Name:";
        cin>>firstName;
      }
      while(checkname(firstName));
      do{
        cout<<"Enter Last Name:";
        cin>>lastName;
      }
      while(checkname(lastName));
      do{
        cout<<"Enter your Contact No:";
        cin>>contact;
      }
      while(checkcontact(contact));
      do{
        cout<<"Enter your email ID:";
        cin>>emailid;
      }
      while(checkemailid(emailid));
      do{
        cout<<"Enter the year of establishment:";
        cin>>established;
      }
      while(checkyear(established));
      do{
        cout<<"Enter City:";
        cin>>cityofestablishment;
      }
      while(checkcity(cityofestablishment));
      do{
        cout<<"Enter State:";
        cin>>state;
      }
      while(checkstate(state));
      do{
        cout<<"Enter Interest:";
        cin>>interest_tag;
      }
      while(checkname(interest_tag));
    }

    void printfInfo()
    {
        cout<<endl<<"information regarding the company are as follows"<<endl;
        cout<<firstName<<" ";
        cout<<lastName<<endl;
        cout<<emailid<<endl;
        cout<<contact<<endl;
        cout<<established<<endl;
        cout<<cityofestablishment<<endl;
        cout<<state<<endl;
        cout<<interest_tag<<endl<<endl;
    }
};

class startupUser{
    public:
        string firstName;
        string lastName;
        string emailid;
        string contact;
        string age;
        string city;
        string state;
        string interest_tag;

    public:
        string uid;
        string password;
    public:
    void set_uid()
    {
        int n,i;
        while(1)
        {
        cout<<"enter the UID you want to set"<<endl;
        cin>>uid;
        FILE* fp;
        fp = fopen("/src/databse/startupdatabase.txt","r+");
        char c_uid[25],c_pass[25];
        fscanf(fp,"%d",&n);
        for(i=0;i<n;i++)
        {
            fscanf(fp,"%s%s",c_uid,c_pass);
            std::string c_uidm(c_uid);
            if(uid == c_uidm)
            {
                cout<<"this uid is already in use,try again"<<endl;
                break;
            }
        }
        if(i==n)
            break;

        fclose(fp);
        }
        cout<<"enter the password you want to set"<<endl;
        for(int i=0;i<1000;i++)
        {
          char c=getch();
          if(c=='\r')
            break;
          cout<<"*";
          password[i]=c;
         }
         cout<<endl;
    }
    void getInfo()
    {
        do{
          cout<<"Enter First Name:";
          cin>>firstName;
        }
        while(checkname(firstName));
        do{
          cout<<"Enter Last Name:";
          cin>>lastName;
        }
        while(checkname(lastName));
        do{
          cout<<"Enter your Contact No:";
          cin>>contact;
        }
        while(checkcontact_startup(contact));
        do{
          cout<<"Enter your email ID:";
          cin>>emailid;
        }
        while(checkemailid_startup(emailid));
        do{
          cout<<"Enter your age:";
          cin>>age;
        }
        while(checkage(age));
        do{
          cout<<"Enter City:";
          cin>>city;
        }
        while(checkcity(city));
        do{
          cout<<"Enter State:";
          cin>>state;
        }
        while(checkstate(state));
        do{
          cout<<"Enter Interest:";
          cin>>interest_tag;
        }
        while(checkname(interest_tag));
    }

    void printfInfo()
    {
        cout<<endl<<"information regarding the startup-user are as follows"<<endl;
        cout<<firstName<<" ";
        cout<<lastName<<endl;
        cout<<emailid<<endl;
        cout<<contact<<endl;
        cout<<age<<endl;
        cout<<city<<endl;
        cout<<state<<endl;
        cout<<interest_tag<<endl<<endl;
    }
};

class admin:public Company_freelancer,public startupUser
{
    public:
    string attempt_uid;
    string attempt_password;

        void getUid()
        {
            cout<<"enter the UID of your account"<<endl;
            cin>>attempt_uid;
        }
        void check_pass_company()
        {
            FILE *fp;
            string Check_uid;
            char cuid[25];
            char cpass[25];
            fp = fopen("src/databse/companydatabase.txt","r");
            int n;
            fscanf(fp,"%d",&n);
            int i;
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s",cuid,cpass);
                std::string Check_uid(cuid);
                std::string Check_pass(cpass);
                if(attempt_uid == Check_uid)
                {
                  cout<<"enter password"<<endl;
                  char asd[100];
                  int nn;
                  repeat1:
                  for(int j=0;j<1000;j++)
                  {
                    char c=getch();
                    if(c=='\r')
                    {
                      nn=j;
                      break;
                    }
                    if(c=='\b')
                    {
                      cout<<endl;
                      goto repeat1;
                    }
                    cout<<"*";
                    asd[j]=c;
                   }
                   cout<<endl;
                   char all[nn];
                   for(int k=0;k<nn;k++)
                      all[k]=asd[k];
                   std::string attempt_password(all);

                    if(attempt_password == Check_pass)
                    {
                     cout<<"password and uid verified"<<endl;
                     break;
                    }
                    else
                    {
                      get_email_company(attempt_uid);
                      break;
                    }
                }
            }

            if(i == n)
                cout<<"Error: Uid "<<Check_uid<<" invalid"<<endl;
}
	void check_pass_startup()
        {
            FILE *fp;
            string Check_uid;
            FILE *fpl;
            char cuid[25];
            char cpass[25];
            fp = fopen("src/databse/startupdatabase.txt","r");
            fpl = fopen("src/databse/startupregdetails.txt","r");
            int n;
            fscanf(fp,"%d",&n);
            int i;
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s",cuid,cpass);
                std::string Check_uid(cuid);
                std::string Check_pass(cpass);
                if(attempt_uid == Check_uid)
                {
                  cout<<"enter password"<<endl;
                  char asd[100];
                  int nn;
                  repeat2:
                  for(int j=0;j<1000;j++)
                  {
                    char c=getch();
                    if(c=='\r')
                    {
                      nn=j;
                      break;
                    }
                    if(c=='\b')
                    {
                      cout<<endl;
                      goto repeat2;
                    }
                    cout<<"*";
                    asd[j]=c;
                   }
                   cout<<endl;
                   char all[nn];
                   for(int k=0;k<nn;k++)
                      all[k]=asd[k];
                   std::string attempt_password(all);

                    if(attempt_password == Check_pass)
                    {
                     cout<<"password and uid verified"<<endl;
                     system("pause");
                     cout<<"Press any key to go to the dashboard"<<endl;

                     system("cls");
                     char interest1[25],iter1[25];
                     fscanf(fpl,"%s",iter1);
                     for(int j=0;j<i;j++)
                         for(int k=0;k<8;k++)
                            fscanf(fpl,"%s",iter1);
                     for(int j=0;j<8;j++)
                        fscanf(fpl,"%s",interest1);
                        std::string interest(interest1);
                        cout<<"Your interest lies in: "<<interest<<endl;
                     fclose(fp);
                     fclose(fpl);
                     cout<<"The details of company interested in "<<interest<<" are as follows:"<<endl;
                     cout<<endl;
                     voting(interest);
                     break;
                    }
                    else
                    {
                      get_email_startup(attempt_uid);
                      break;
                    }
                }
            }
            if(i == n)
                cout<<"Error: Uid "<<Check_uid<<" invalid"<<endl;
              }
};

int main()
{
    string c;
    Company_freelancer B;
    startupUser A;
    admin S;
    string answer;
while(1)
{
    system ( "color 70" );
    cout<<"Have you registered yet?(Y/N)"<<endl;
    cin>>c;

    while(1)
    {
    if(c  == "N" || c == "n")
    {

        cout<<"Do you want to register as company or startup-user"<<endl;
	while(1)
	{
        	string s;
        	cin>>s;
       	 	if(s == "company")
        	{
                system ("cls");
            		B.set_uid();
            		B.getInfo();
            		B.printfInfo();
                char s[]="python registermail.py ";
                strcat(s,B.emailid.c_str());
                system(s);
            		cout<<"Congratulations, you have successfully registered here on our website"<<endl;
            		FILE *fp;
            		FILE *fpl;
            		fp = fopen("src/databse/companydatabase.txt","r+");
                    fpl = fopen("src/databse/companyregdetails.txt","r+");
                    int qw;
            		fscanf(fp,"%d",&qw);
            		fseek(fp,0,SEEK_SET);
            		fseek(fpl,0,SEEK_SET);
            		fprintf(fpl,"%d\n",qw+1);
            		fprintf(fp,"%d\n",qw+1);
            		fclose(fp);
            		fclose(fpl);
            		fp = fopen("src/databse/companydatabase.txt","a");
            		fprintf(fp,"%s %s\n",B.uid.c_str(),B.password.c_str());
            		fclose(fp);
                    fp = fopen("src/databse/companyregdetails.txt","a");
                    fprintf(fp,"%s %s %s %s %s %s %s %s\n",B.firstName.c_str(),B.lastName.c_str(),B.emailid.c_str(),B.contact.c_str(),B.established.c_str(),B.cityofestablishment.c_str(),B.state.c_str(),B.interest_tag.c_str());
                    fclose(fp);
                    break;
                    system("cls");
        	}
        	else if(s == "startup-user")
        	{
                system("cls");
       		      A.set_uid();
            		A.getInfo();
            		A.printfInfo();
                char s[]="python registermail.py ";
                strcat(s,A.emailid.c_str());
                system(s);
            		cout<<"congratulations, you have successfully registered here on our website"<<endl;
            		FILE *fp,*fpl;
            		fp = fopen("src/databse/startupdatabase.txt","r+");
            		fpl = fopen("src/databse/startupregdetails.txt","r+");
            		int n;
            		fscanf(fp,"%d",&n);
            		fseek(fp,0,SEEK_SET);
            		fseek(fpl,0,SEEK_SET);
            		fprintf(fp,"%d\n",n+1);
            		fprintf(fpl,"%d\n",n+1);
            		fclose(fp);
            		fp = fopen("src/databse/startupdatabase.txt","a");
           	 	    fprintf(fp,"%s %s\n",A.uid.c_str(),A.password.c_str());
            		fclose(fp);
                    fp = fopen("src/databse/startupregdetails.txt","a");
                    fprintf(fp,"%s %s %s %s %s %s %s %s\n",A.firstName.c_str(),A.lastName.c_str(),A.emailid.c_str(),A.contact.c_str(),A.age.c_str(),A.city.c_str(),A.state.c_str(),A.interest_tag.c_str());
                    fclose(fp);
                    break;
                    system("cls");
        	}
          else
          {
            cout<<"Choose company or startup-user"<<endl;
          }
	}
	break;
    	}
    if(c == "Y" || c == "y")
    {
	while(1)
	{
		string s;
		cout<<"Are you a company/freelancer or startup-user"<<endl;
		cin>>s;
		if(s == "company")
		{
      system("cls");
        		S.getUid();
                S.check_pass_company();

			break;
		}
		if(s == "startup-user")
		{
      system("cls");
			S.getUid();
			S.check_pass_startup();
			break;
		}
	}
	break;
    }
}
    cout<<"Do you want to start again?(Y/N)"<<endl;
    cin>>answer;
    if(answer == "N" || answer == "n")
        break;
        system("cls");
}
    return 0;
}
