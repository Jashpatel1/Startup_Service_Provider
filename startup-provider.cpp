#include<bits/stdc++.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

  int checknumber(string c)
  {
    for(int i=0;i<c.size();i++)
    {
      if(!((c[i]-0>=48 && c[i]-0<=57)))
          return 1;
    }
  }

  int checkage(string c)
  {
    for(int i=0;i<c.size();i++)
    {
      if(!((c[i]-0>=48 && c[i]-0<=57)))
    {
      cout<<"Age can contain only numbers."<<endl;
      cout<<"Please enter correct age"<<endl;
      cout<<endl;
      return 1;
    }
  }
}

  int checkcontact_startup(string c)
  {
    int flag=0;
    if((c.size()==10))
    {
    for(int i=0;i<c.size();i++)
    {
      if(!((c[i]-0>=48 && c[i]-0<=57)))
      {
        cout<<"Contact can contain only numbers."<<endl;
        cout<<"Please enter correct contact number(size 10)"<<endl;
        cout<<endl;
        return 1;
      }
    }
            int n,i;
            FILE* fp;
            fp = fopen("startupregdetails.txt","r+");
        //string c_uidl;
            char c_uid[25],c_pass[25],c_email[50],c_contact[20],c_established[20],c_cityofestablished[20],c_state[20],c_interest_tag[20];
            fscanf(fp,"%d",&n);
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s%s%s%s%s%s%s",c_uid,c_pass,c_email,c_contact,c_established,c_cityofestablished,c_state,c_interest_tag);
                std::string c_uide(c_contact);
                if(c == c_uide)
                {
                    cout<<"this contact number is already in use,try again"<<endl;
                    return 1;
                }
            }
            return 0;
  }
      else
      {
        cout<<"Contact can contain only numbers."<<endl;
        cout<<"Please enter correct contact number(size 10)"<<endl;
        cout<<endl;
        return 1;
      }


  }

    int checkcontact(string c)
  {
    int flag=0;
    if((c.size()==10))
    {
    for(int i=0;i<c.size();i++)
    {
      if(!((c[i]-0>=48 && c[i]-0<=57)))
      {
        cout<<"Contact can contain only numbers."<<endl;
        cout<<"Please enter correct contact number(size 10)"<<endl;
        cout<<endl;
        return 1;
      }
    }
            int n,i;
            FILE* fp;
            fp = fopen("companyregdetails.txt","r+");
            //string c_uidl;
            char c_uid[25],c_pass[25],c_email[50],c_contact[20],c_established[20],c_cityofestablished[20],c_state[20],c_interest_tag[20];
            fscanf(fp,"%d",&n);
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s%s%s%s%s%s%s",c_uid,c_pass,c_email,c_contact,c_established,c_cityofestablished,c_state,c_interest_tag);
                std::string c_uide(c_contact);
                if(c == c_uide)
                {
                    cout<<"this contact number is already in use,try again"<<endl;
                    return 1;
                }
            }
            return 0;

  }
      else
      {
        cout<<"Contact can contain only numbers."<<endl;
        cout<<"Please enter correct contact number(size 10)"<<endl;
        cout<<endl;
        return 1;
      }

  }

  int checkname(string c)
  {
    for(int i=0;i<c.size();i++)
    {
      if(!((c[i]-0>=65 && c[i]-0<=90) ||(c[i]-0>=97 && c[i]-0<=122)))
    {
      cout<<"Name can contain only alphabets."<<endl;
      cout<<"Please enter correct name"<<endl;
      cout<<endl;
      return 1;
    }
  }
}

  int checkcity(string c)
  {
    for(int i=0;i<c.size();i++)
    {
      if(!((c[i]-0>=65 && c[i]-0<=90) ||(c[i]-0>=97 && c[i]-0<=122)))
    {
      cout<<"City can contain only alphabets."<<endl;
      cout<<"Please enter correct city"<<endl;
      cout<<endl;
      return 1;
    }
  }
}

  int checkstate(string c)
  {
    for(int i=0;i<c.size();i++)
    {
      if(!((c[i]-0>=65 && c[i]-0<=90) ||(c[i]-0>=97 && c[i]-0<=122)))
    {
      cout<<"State can contain only alphabets."<<endl;
      cout<<"Please enter correct state"<<endl;
      cout<<endl;
      return 1;
    }
  }
}

  int checkemailid(string c)
  {
    int flag=0;
    for(int i=0;i<c.size();i++)
    {
        if(((c[i]-0>=64 && c[i]-0<=90) ||(c[i]-0>=97 && c[i]-0<=122)))
        {
          if(c[i]=='@')
           {
            flag=1;
            int n,i;
            FILE* fp;
            fp = fopen("companyregdetails.txt","r+");
        //string c_uidl;
            char c_uid[25],c_pass[25],c_email[50],c_contact[20],c_established[20],c_cityofestablished[20],c_state[20],c_interest_tag[20];
            fscanf(fp,"%d",&n);
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s%s%s%s%s%s%s",c_uid,c_pass,c_email,c_contact,c_established,c_cityofestablished,c_state,c_interest_tag);
                std::string c_uide(c_email);
                if(c == c_uide)
                {
                    cout<<"this email-id is already in use,try again"<<endl;
                    return 1;
                }
            }
            }
        }
           }
        if(flag!=1)
        {
          cout<<"Invalid Email-ID."<<endl;
          cout<<"Please enter correct Email-ID"<<endl;
          cout<<endl;
          return 1;
        }
    return 0;
    }

int checkemailid_startup(string c)
  {
    int flag=0;
    for(int i=0;i<c.size();i++)
    {
        if(((c[i]-0>=64 && c[i]-0<=90) ||(c[i]-0>=97 && c[i]-0<=122)))
        {
          if(c[i]=='@')
           {
            flag=1;
            int n,i;
            FILE* fp;
            fp = fopen("startupregdetails.txt","r+");
        //string c_uidl;
            char c_uid[25],c_pass[25],c_email[50],c_contact[20],c_established[20],c_cityofestablished[20],c_state[20],c_interest_tag[20];
            fscanf(fp,"%d",&n);
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s%s%s%s%s%s%s",c_uid,c_pass,c_email,c_contact,c_established,c_cityofestablished,c_state,c_interest_tag);
                std::string c_uide(c_email);
                if(c == c_uide)
                {
                    cout<<"this email-id is already in use,try again"<<endl;
                    return 1;
                }
            }
            }
        }
           }
        if(flag!=1)
        {
          cout<<"Invalid Email-ID."<<endl;
          cout<<"Please enter correct Email-ID"<<endl;
          cout<<endl;
          return 1;
        }
    return 0;
    }


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
        fp = fopen("companydatabase.txt","r+");
        //string c_uidl;
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
      while(checkage(established));
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
        fp = fopen("startupdatabase.txt","r+");
        //string c_uidl;
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
    void Display(string interest)
    {
        int n1;
        char s10[25],s11[25],s12[25],s13[25],s14[25],s15[25],s16[25],s17[25],s18[25];
        FILE *fp;
        fp = fopen("companyregdetails.txt","r+");
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
                cout<<"Name of the company: "<<comp_name1<<" "<<comp_name2<<endl<<"Email-id of the company is: "<<comp_name3<<endl<<"Contact no. of company is: "<<comp_name4<<endl<<"Established in: "<<comp_name5<<", "<<"State: "<<comp_name6<<", "<<comp_name7<<endl;
            }
        }
        fclose(fp);
    }
    struct Company1
    {
      string firstName;
      string lastName;
      string emailid;
      string contact;
      string age;
      string city;
      string state;
      string interest_tag;

    };
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
            fp = fopen("companydatabase.txt","r");
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
                  for(int j=0;j<1000;j++)
                  {
                    char c=getch();
                    if(c=='\r')
                    {
                      nn=j;
                      break;
                    }
                    cout<<"*";
                    asd[j]=c;
                   }
                   cout<<endl;
                   char all[nn];
                   for(int k=0;k<nn;k++)
                      all[k]=asd[k];
                   std::string attempt_password(all);
                    cout<<attempt_password<<endl;
                    if(attempt_password == Check_pass)
                    {
                     cout<<"password and uid verified"<<endl;
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
            fp = fopen("startupdatabase.txt","r");
            fpl = fopen("startupregdetails.txt","r");
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
                  for(int j=0;j<1000;j++)
                  {
                    char c=getch();
                    if(c=='\r')
                    {
                      nn=j;
                      break;
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
                     char interest1[25],iter1[25];
                     fscanf(fpl,"%s",iter1);
                     for(int j=0;j<i;j++)
                         for(int k=0;k<8;k++)
                            fscanf(fpl,"%s",iter1);
                     for(int j=0;j<8;j++)
                        fscanf(fpl,"%s",interest1);
                        std::string interest(interest1);
                        cout<<interest<<endl;
                     fclose(fp);
                     fclose(fpl);
                     cout<<"the details of company interested in "<<interest<<"are as follows"<<endl;
                     Display(interest);
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
    cout<<"have you registered yet?(Y/N)"<<endl;
    cin>>c;
    while(1)
    {
    if(c  == "N" || c == "n")
    {
        cout<<"do you want to register as company or startup-user"<<endl;
	while(1)
	{
        	string s;
        	cin>>s;
       	 	if(s == "company")
        	{
            		B.set_uid();
            		B.getInfo();
            		B.printfInfo();
                char s[]="python registermail.py ";
                strcat(s,B.emailid.c_str());
                system(s);
            		cout<<"congratulations, you have successfully registered here on our website"<<endl;
            		FILE *fp;
            		FILE *fpl;
            		fp = fopen("companydatabase.txt","r+");
                    fpl = fopen("companyregdetails.txt","r+");
                    int qw;
            		fscanf(fp,"%d",&qw);
            		fseek(fp,0,SEEK_SET);
            		fseek(fpl,0,SEEK_SET);
            		fprintf(fpl,"%d\n",qw+1);
            		fprintf(fp,"%d\n",qw+1);
            		fclose(fp);
            		fclose(fpl);
            		fp = fopen("companydatabase.txt","a");
            		fprintf(fp,"%s %s\n",B.uid.c_str(),B.password.c_str());
            		fclose(fp);
                    fp = fopen("companyregdetails.txt","a");
                    fprintf(fp,"%s %s %s %s %s %s %s %s\n",B.firstName.c_str(),B.lastName.c_str(),B.emailid.c_str(),B.contact.c_str(),B.established.c_str(),B.cityofestablishment.c_str(),B.state.c_str(),B.interest_tag.c_str());
                    fclose(fp);
                    break;
        	}
        	if(s == "startup-user")
        	{
       		        A.set_uid();
            		A.getInfo();
            		A.printfInfo();
                char s[]="python registermail.py ";
                strcat(s,A.emailid.c_str());
                system(s);
            		cout<<"congratulations, you have successfully registered here on our website"<<endl;
            		FILE *fp,*fpl;
            		fp = fopen("startupdatabase.txt","r+");
            		fpl = fopen("startupregdetails.txt","r+");
            		int n;
            		fscanf(fp,"%d",&n);
            		fseek(fp,0,SEEK_SET);
            		fseek(fpl,0,SEEK_SET);
            		fprintf(fp,"%d\n",n+1);
            		fprintf(fpl,"%d\n",n+1);
            		fclose(fp);
            		fp = fopen("startupdatabase.txt","a");
           	 	    fprintf(fp,"%s %s\n",A.uid.c_str(),A.password.c_str());
            		fclose(fp);
                    fp = fopen("startupregdetails.txt","a");
                    fprintf(fp,"%s %s %s %s %s %s %s %s\n",A.firstName.c_str(),A.lastName.c_str(),A.emailid.c_str(),A.contact.c_str(),A.age.c_str(),A.city.c_str(),A.state.c_str(),A.interest_tag.c_str());
                    fclose(fp);
                    break;
        	}
	}
	break;
    	}
    if(c == "Y" || c == "y")
    {
	while(1)
	{
		string s;
		cout<<"are you a company/freelancer or startup-user"<<endl;
		cin>>s;
		if(s == "company")
		{
        		S.getUid();
                S.check_pass_company();

			break;
		}
		if(s == "startup-user")
		{
			S.getUid();
			S.check_pass_startup();
			break;
		}
	}
	break;
    }
}
    cout<<"do you want to register again?(Y/N)"<<endl;
    cin>>answer;
    if(answer == "N" || answer == "n")
        break;
}
    return 0;
}
