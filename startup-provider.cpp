#include<bits/stdc++.h>
using namespace std;

class Company_freelancer
{
    public:
        string firstName;
        string lastName;
        string emailid;
        string contact;
        string Dob;
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
        cin>>password;
    }
    void getInfo()
    {
        cout<<"enter your first name"<<endl;
        cin>>firstName;
        cout<<"enter your last name"<<endl;
        cin>>lastName;
        cout<<"enter your email id"<<endl;
        cin>>emailid;
        cout<<"enter your contact details"<<endl;
        cin>>contact;
        cout<<"enter your date of birth"<<endl;
        cin>>Dob;
        cout<<"enter the name of city you are from"<<endl;
        cin>>city;
        cout<<"enter the state you are from"<<endl;
        cin>>state;
        cout<<"share your interests"<<endl;
        cin>>interest_tag;
    }
//https://www.google.com/search?client=ubuntu&channel=fs&q=gma&ie=utf-8&oe=utf-8
    void printfInfo()
    {
        cout<<endl<<"information regarding the company are as follows"<<endl;
        cout<<firstName<<" ";
        cout<<lastName<<endl;
        cout<<emailid<<endl;
        cout<<contact<<endl;
        cout<<Dob<<endl;
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
        string Dob;
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
        cin>>password;
    }
    void getInfo()
    {
        cout<<"enter your first name"<<endl;
        cin>>firstName;
        cout<<"enter your last name"<<endl;
        cin>>lastName;
        cout<<"enter your email id"<<endl;
        cin>>emailid;
        cout<<"enter your contact details"<<endl;
        cin>>contact;
        cout<<"enter your date of birth"<<endl;
        cin>>Dob;
        cout<<"enter the name of city you are from"<<endl;
        cin>>city;
        cout<<"enter the state you are from"<<endl;https://www.google.com/search?client=ubuntu&channel=fs&q=gma&ie=utf-8&oe=utf-8
        cin>>state;
        cout<<"share your interests"<<endl;
        cin>>interest_tag;
    }

    void printfInfo()
    {
        cout<<endl<<"information regarding the startup-user are as follows"<<endl;
        cout<<firstName<<" ";
        cout<<lastName<<endl;
        cout<<emailid<<endl;
        cout<<contact<<endl;
        cout<<Dob<<endl;
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
            char cuid[25];
            char cpass[25];
            fp = fopen("startupdatabase.txt","r");
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
};
int main()
{
    string c;
    Company_freelancer B;
    startupUser A;
    admin S;
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
            		fp = fopen("companydatabase.txt","w");
            /*//fputs(B.uid,fp);
            //fputs(B.password,fp);
https://www.google.com/search?client=ubuntu&channel=fs&q=gma&ie=utf-8&oe=utf-8
            //cout<<"here is your uid "<<B.uid<<endl;*/
            		fprintf(fp,"%s %s\n",B.uid.c_str(),B.password.c_str());
            		fclose(fp);
			fp = fopen("companyregdetails.txt","a");
			fprintf(fp,"%s %s %s %s %s %s %s %s\n",B.firstName.c_str(),B.lastName.c_str(),B.emailid.c_str(),B.contact.c_str(),B.Dob.c_str(),B.city.c_str(),B.state.c_str(),B.interest_tag.c_str());
			fclose(fp);			
			break;
        	}
        	if(s == "startup-user")
        	{
       		        A.set_uid();
            		A.getInfo();
            		A.printfInfo();
            		cout<<"congratulations, you have successfully registered here on our website"<<endl;
            		FILE *fp;
            		fp = fopen("startupdatabase.txt","w");
           	 	fprintf(fp,"%s %s\n",A.uid.c_str(),A.password.c_str());
            		fclose(fp);
			fp = fopen("startupregdetails.txt","a");
			fprintf(fp,"%s %s %s %s %s %s %s %s\n",A.firstName.c_str(),A.lastName.c_str(),A.emailid.c_str(),A.contact.c_str(),A.Dob.c_str(),A.city.c_str(),A.state.c_str(),A.interest_tag.c_str());
			fclose(fp);
			break;            
		//fprintf(fp,"this is a test text");
            //f11=fopen("startupdatabase.txt","r");
            //string a,b;
            //fscanf(f11,"%s %s",a,b);
            //cout<<"meralund "<<a<<b<<endl;
            //fclose(f11 );
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
	/*string Uid;
        cout<<"your userid"<<endl;
        cin>>Uid;
        */
        /*S.getUid();
        string Password;
        cout<<"enter password"<<endl;
        cin>>Password;
        FILE *fp;
        string Check_uid;
        char cuid[25];
        char cpass[25];
        int n;
        fp=fopen("companydatabase.txt","r");
        fscanf(fp,"%d\n",n);
        int i;
        for(i=0;i<n;i++)
        {
            fscanf(fp,"%s %s\n",cuid,cpass);
            std::string Check_uid(cuid);
            std::string P
            if(Check_uid == Uid)
            {
                if()
                cout<<"Uid and password verified."<<endl;
                break;
            }
        }
        */    
	}
	break;
    }
}
    return 0;
}
