#include<bits/stdc++.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

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

int checkyear(string c)
{
for(int i=0;i<c.size();i++)
{
  if((!((c[i]-0>=48 && c[i]-0<=57)))&&(c.size()==4))
{
  cout<<"Year can contain only numbers."<<endl;
  cout<<"Please enter correct year"<<endl;
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
