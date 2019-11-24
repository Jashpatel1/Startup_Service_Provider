#include<bits/stdc++.h>
#include<stdlib.h>
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
            flag=1;
        }
      }
        if(flag!=1)
        {
          cout<<"Invalid Email-ID."<<endl;
          cout<<"Please enter correct Email-ID"<<endl;
          cout<<endl;
          return 1;
        }
    }



class Company_freelancer
{
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
        cout<<"enter the UID you want to set"<<endl;
        cin>>uid;
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
        cout<<endl<<"information regarding the company are as follows"<<endl;
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
        cout<<"enter the UID you want to set"<<endl;
        cin>>uid;
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
{//https://www.google.com/search?client=ubuntu&channel=fs&q=gma&ie=utf-8&oe=utf-8
    public:
    string attempt_uid;
    string attempt_password;
    //void Display(string interest);
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
            //cout<<n<<endl;
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s",cuid,cpass);
                //cout<<cuid<<" "<<cpass<<endl;
                std::string Check_uid(cuid);
                std::string Check_pass(cpass);
                if(attempt_uid == Check_uid)
                {
                    cout<<"enter password"<<endl;
                    cin>>attempt_password;
                    if(attempt_password == Check_pass)
                    {
                     cout<<"password and uid verified"<<endl;
                     break;
                    }
                }//https://www.google.com/search?client=ubuntu&channel=fs&q=gma&ie=utf-8&oe=utf-8
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
            //cout<<n<<endl;
            for(i=0;i<n;i++)
            {
                fscanf(fp,"%s%s",cuid,cpass);
                //cout<<cuid<<" "<<cpass<<endl;
                std::string Check_uid(cuid);
                std::string Check_pass(cpass);
                if(attempt_uid == Check_uid)
                {
                    cout<<"enter password"<<endl;
                    cin>>attempt_password;
                    if(attempt_password == Check_pass)
                    {
                     cout<<"password and uid verified"<<endl;
                     //string interest,iter;
                     char interest1[25],iter1[25];
                     fscanf(fpl,"%s",iter1);
                     for(int j=0;j<i;j++)
                         for(int k=0;k<8;k++)
                            fscanf(fpl,"%s",iter1);

                     //std::string iter(iter1);
                     //cout<<iter<<endl;

                     for(int j=0;j<8;j++)
                        fscanf(fpl,"%s",interest1);

                        //fscanf(fpl,"%s",interest1);
                        std::string interest(interest1);
                        cout<<interest<<endl;
                     fclose(fp);
                     fclose(fpl);
                     //Display(interest);
                     break;
                    }
                }//https://www.google.com/search?client=ubuntu&channel=fs&q=gma&ie=utf-8&oe=utf-8
            }
            if(i == n)
                cout<<"Error: Uid "<<Check_uid<<" invalid"<<endl;
        }
};
/*
void admin::Display(string interest)
{
            FILE *fp;
            fp = fopen("companyregdetails.txt","r+");


            /*ofstream fout;
            string eashan;
            fout.open("textfile.txt");
            std::map<string,std::vector<pair<string,int> > >m;
            while(fout)
            {
                getline(cin,eashan);
                if(eashan=="-1")
                {
                    break;
                }
                string temp="";
                std::vector<string> v;
                for(int i=0;i<eashan.length();i++)
                {

                    if(eashan[i]==' ')
                    {
                        if(temp!=" ")
                        v.push_back(temp);
                        temp="";
                    }
                    else
                        temp+=eashan[i];
                }
                for(int i=0;i<v.size();i++)
                {
                    if(v[i]=="marketing")
                    {
                        m[v[i]].push_back(make_pair(v[0],0));
                        break;
                    }
                    else if(v[i]=="accounting")
                    {
                        m[v[i]].push_back(make_pair(v[0],0));
                        break;
                    }
                    else if(v[i]=="technical")
                    {
                        m[v[i]].push_back(make_pair(v[0],0));
                        break;
                    }
                    else if(v[i]=="advertisement")
                    {
                        m[v[i]].push_back(make_pair(v[0],0));
                        break;
                    }
                }
            }
            fout.close();
            fclose(fp);*/

int main()
{

  system("python test1.py");
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

            		cout<<"congratulations, you have successfully registered here on our website"<<endl;
            		FILE *fp;
            		FILE *fpl;
            		fp = fopen("companydatabase.txt","r+");
                    fpl = fopen("companyregdetails.txt","r+");
                    int qw;
            		fscanf(fp,"%d",&qw);
            		//cout<<qw<<endl;
            		fseek(fp,0,SEEK_SET);
            		fseek(fpl,0,SEEK_SET);
            		//cout<<qw<<endl;
            		fprintf(fpl,"%d\n",qw+1);
            		fprintf(fp,"%d\n",qw+1);
            		fclose(fp);
            		fclose(fpl);
            		fp = fopen("companydatabase.txt","a");
            		fprintf(fp,"%s %s\n",B.uid.c_str(),B.password.c_str());
            		fclose(fp);
                    fp = fopen("companyregdetails.txt","a");
                    fprintf(fp,"%s %s %s %s %s %s %s %s\n",B.firstName.c_str(),B.lastName.c_str(),B.emailid.c_str(),B.contact.c_str(),B.age.c_str(),B.city.c_str(),B.state.c_str(),B.interest_tag.c_str());
                    fclose(fp);
                    break;
        	}
        	if(s == "startup-user")
        	{
       		        A.set_uid();
            		A.getInfo();
            		A.printfInfo();
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
