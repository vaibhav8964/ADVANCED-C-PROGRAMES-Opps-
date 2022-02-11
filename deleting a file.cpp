#include<fstream>
#include<iostream>
#include<string.h>
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
	int getrollno()
	{
		return roll_no;
	}
};
int main()
{  int x,pos;
   student std;
   ifstream ifs("Text.txt");
   ofstream ofs("Temp.txt");
  while(ifs.read((char*)&std,sizeof(std)))
  {
  	std.putdata();
  }
   ifs.close();
   ifs.open("Text.txt");
   cout<<"ENTER THE ROLLNO YOU WANT TO DELETE:- ";
   cin>>x;
   while(ifs.read((char*)&std,sizeof(std)))
   {
   	 if(x!=std.getrollno())
   	 {
   	 	cout<<"deleting the FILE ";
   	 	ofs.write((char*)&std,sizeof(std));
     }
     
   }
   
   ifs.close();
   ofs.close();
   remove("Text.txt");
   rename("Temp.txt","Text.txt");
   getch();
   return 0;
	
}















