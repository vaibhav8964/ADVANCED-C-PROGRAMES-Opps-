#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
class student
{ private:	
    char name[10];
    int roll_no;
  public:
  	student *next;
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
};
int size; 
student *top=NULL,*temp=NULL;

push()
{
   student *newptr=new student;
	newptr->getdata();
	newptr->next=NULL;
	
	if(top==NULL)
	{
		top=newptr;
	}
	else
	{
		newptr->next=top;
		top=newptr;
	}	
}
pop()
{
	if(top==NULL)
	{
		cout<<"STACK IS EMPTY";
	}
	else
	{
		temp=top;
		top=top->next;
		delete temp;
		cout<<"ELEMENT DELETED";
	}
}
display()
{
	if(top==NULL)
	{
		cout<<"STACK EMPTY";
	}
	else
	{
		temp=top;
		while(temp!=NULL)
		{
			temp->putdata();
			temp=temp->next;   
		}
    }
}

int main()
{ student std;

	int a;char x;int item;
	while(1)
	{
		system("cls");
		cout<<"CHOOSE THE OPERATION YOU WANT TO DO"<<endl;
		cout<<"1. INSERTION(push) "<<endl;
		cout<<"2. DELETION(pop) "<<endl;
		cout<<"3. DISPLAY "<<endl;
		cout<<"PRESS ANY KEY TO EXIT(OTHER THAN 1,2,3)"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:  push();
					 getch();
			         break;
			case 2:  cout<<"PRESS 'D' TO DELETE AN ITEM:- ";
			         cin>>x;
					 if(x=='d')
					 {
						pop();
					 }
					 getch();
				     break;
			case 3:  cout<<"PRESS 'S' to display the array:- ";
			         cin>>x;
					 if(x=='s')
					 {
			             display();	       	   	
				     } 
					 getch();  
					 break;
			default: cout<<"WRONG INPUT :" ;
					 exit(0);		
		}
	}
	getch();
	return 0;
}
