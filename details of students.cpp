#include<iostream>
#include<conio.h>
using namespace std;
class student
{ private:	
    char name[10];
    int roll_no;
    int clas;
    char sec;
    char gender;
    char ph_no[11];
  public:
  	void getdata()
    {
    	cout<<"ENTER THE NAME OF STUDENT: ";
        cin>>name;
		cout<<"ENTER THE ROLL NO.: ";
		cin>>roll_no;
    	cout<<"ENTER THE CLASS: ";
    	cin>>clas;
		cout<<"ENTER THE SEC: ";
		cin>>sec;		
    	cout<<"ENTER THE GENDER: ";
    	cin>>gender;
    	cin.ignore();
    	cout<<"ENETR THE PHONE NO.: ";
    	cin.getline(ph_no,11) ;   	
	}
	void putdata()
	{
		cout<<"THE NAME OF STUDENT: ";
    	cout<<name;
        cout<<endl;
		cout<<"THE ROLL NO. is: ";
		cout<<roll_no;
		cout<<endl;
    	cout<<"THE CLASS is: ";
    	cout<<clas;
    	cout<<endl;
		cout<<"THE SEC is: ";
		cout<<sec;
		cout<<endl;
    	cout<<"THE GENDER is: ";
    	cout<<gender;    	
    	cout<<endl;
    	cout<<"THE PHONE NO. is: ";
    	puts(ph_no);
		cout<<endl;    	
	}
};
int main()
{ int i,j,n; char a;
  cout<<"ENTER THE NO STUDENT's DATA YOU WANT TO ENTER: ";
  cin>>n;
  cout<<endl;
  student std[n];
	for(i=0;i<n;i++)
	{
		cout<<"ENTER THE DETAILS OF STUDENT "<<i+1<<endl;
		std[i].getdata();
		cout<<endl;
		cout<<endl;
	}
	cout<<"WANT TO SHOW THE DATA:- ";
	cin>>a;
	cout<<endl;
	if(a=='y')
	{
	    for(j=0;j<n;j++)
	      {
		     cout<<"THE DETAILS OF STUDENT "<<j+1<<endl;
		     std[j].putdata();
		     cout<<endl;
		      cout<<endl;
	      }
	   getch();
	   return 0;
    }
    else
    {
    	cout<<"bye terminating"<<endl;
	   getch();
	   return 0;
    }
}
