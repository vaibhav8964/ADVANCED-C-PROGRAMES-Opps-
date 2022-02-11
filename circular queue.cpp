#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int size;int q[10];
int front=-1,rear=-1;
void enqueue(int element)
{
	if((rear==size-1&&front==size-1)||(rear+1==front))
	{
		cout<<"QUEUE IS FULL "<<endl;
	}
	else if(rear==-1)
	{
		rear=front=0;
		q[rear]=element;
	}	
	else
	{
		rear=(rear+1)%size;
		q[rear]=element;
	}
}
void dequeue()
{
	if(front==-1)
	{
		cout<<"QUEUE IS EMPTY";
	}
	else if(rear==front)
	{
		rear=front=-1;
		cout<<"ELEMENT DELETED";
	}
	else
	{
		front=(front+1)%size;
		cout<<"ELEMENT DELETED";
	}
}
display()
{
	if(front==-1)
	{
		cout<<"QUEUE EMPTY";
	}
	else if(rear>=front)
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
	else
	{
		for(int j=front;j<=size-1;j++)
		{
			cout<<q[j]<<endl;
		}
		for(int k=0;k<=rear;k++)
		{
			cout<<q[k];
		}
	}
}

int main()
{ 
	cout<<"ENTER THE SIZE OF YOUR STACK:- ";
	cin>>size;
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
			case 1:  cout<<"ENETR THE ELEMENT YOU WANT TO ENTER "<<endl;
			         cin>>item;
			         enqueue(item);
					 getch();
			         break;
			case 2:  cout<<"PRESS 'D' TO DELETE AN ITEM:- ";
			         cin>>x;
					 if(x=='d'||x=='D')
					 {
						dequeue();
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
		}
	}
	getch();
	return 0;
}
