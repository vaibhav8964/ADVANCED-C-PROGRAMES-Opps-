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
student *rear=NULL,*temp=NULL,*front=NULL;

void insert()
{
   student *newptr=new student;
	newptr->getdata();
	newptr->next=NULL;
	
	if(rear==NULL)
	{
		rear=front=newptr;
	}
	else
	{
		rear->next=newptr;
		rear=newptr;
	}	
}
void Delete()
{
	if(front==NULL)
	{
		cout<<"QUEUE IS EMPTY";
	}
	else if(rear==front)
	{
		delete front;
		cout<<"ELEMENT DELETED";
		front=rear=NULL;
	}
	else
	{
		temp=front;
		front=front->next;
		delete temp;
		cout<<"ELEMENT DELETED";
	}
}
display()
{
	if(front==NULL)
	{
		cout<<"QUEUE EMPTY";
	}
	else
	{
		temp=front;
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
			case 1:  insert();
					 getch();
			         break;
			case 2:  cout<<"PRESS 'D' TO DELETE AN ITEM:- ";
			         cin>>x;
					 if(x=='d'||x=='D')
					 {
						Delete();
					 }
					 getch();
				     break;
			case 3:  cout<<"PRESS 'S' to display the array:- ";
			         cin>>x;
					 if(x=='s'||x=='S')
					 {
			             display();	       	   	
				     } 
					 getch();  
					 break;
			default: cout<<"WRONG INPUT :" ;
					 exit(0);
					 break;		
		}
	}
	getch();
	return 0;
}
