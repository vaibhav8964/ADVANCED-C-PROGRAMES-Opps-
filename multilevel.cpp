#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class profile
{ private:	
    char name[10];
    int roll_no;
  public:
  	profile()
  	{
  		cout<<"Constructor profile is runnng"<<endl;
  		strcpy(name,"nothing");
  		roll_no=0;
	}
  	void getdata()
    {
    	cout<<"ENTER THE NAME OF STUDENT: ";
        cin>>name;
		cout<<"ENTER THE ROLL NO.: ";
		cin>>roll_no;
   	}
	void putdata()
	{
		cout<<"THE NAME OF STUDENT: ";
    	cout<<name;
        cout<<endl;
		cout<<"THE ROLL NO. is: ";
		cout<<roll_no;
		cout<<endl;
    }
    ~profile()
    {
    	cout<<"DESTROYING profile "<<endl;
	}
};
class address:public profile
{
	private:	
    char city[10];
    int house_no;
  public:
  	address()
  	{ cout<<"CONSTRUCTOR address  IS RUNNING"<<endl;
  		strcpy(city,"nothing");
  		house_no=0;
	}
  	void getdata()
    {
    	cout<<"ENTER THE HOUSE no: ";
		cin>>house_no;
		cout<<"ENTER THE CITY WHERE STUDENT LIVE: ";
        cin>>city;
   	}
	void putdata()
	{
		cout<<"THE house NO. is: ";
		cout<<house_no;
		cout<<endl;
		cout<<"THE CITY WHERE STUDENT LIVE: ";
    	cout<<city;	
    	cout<<endl<<endl;
    }
    ~address()
    {
    	cout<<"DESTROYING address"<<endl;
	}
	
};
class student: protected address
{
	private:	
    char gender;
    int adm_no;
  public:
  	student()
  	{
  		cout<<"THE CONSTRUCTR student IS RUNNING"<<endl<<endl;
  		cout<<"********************************"<<endl;
		gender='A';
  		adm_no=0;
	}
  	void getdata()
    {
    	cout<<"ENTER THE admission no: ";
		cin>>adm_no;
		profile::getdata();
		cout<<"ENTER THE gender of STUDENT: ";
        cin>>gender;        
        address::getdata();
   	}
	void putdata()
	{
		cout<<"THE adm no is: ";
		cout<<adm_no;
		cout<<endl;
		profile::putdata();
		cout<<"THE gender is: ";
    	cout<<gender;
		cout<<endl;	    	
    	address::putdata();
    }
    ~student()
    {
    	cout<<"DESTROYING student"<<endl;
	}
	
};
int main()
{
	student std;
	std.getdata();
	cout<<endl;
	cout<<"###############################"<<endl<<endl;
	std.putdata();
	getch();
	return 0;
}



