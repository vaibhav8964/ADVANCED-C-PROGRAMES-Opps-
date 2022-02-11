#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int rear=-1,front=-1;
int q[10];
int n;
insert(int item)
{
	if(rear==n-1)
	{
		cout<<"Q IS FULL";
	}
    else if(rear==-1)
	{
		front=0;
		rear=0;
		q[rear]=item;
	}
	else
	{
		rear++;
		q[rear]=item;
	}
}
Delete()
{
	if(front==-1)
	{
		cout<<"Q IS EMPTY";
	}
	else if(rear==front)
	{
		front=rear=-1;
	}
	else
	{
		++front;
	}
}
display()
{
	if(rear==-1)
	{
		cout<<"Q IS EMPTY";
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
}
int main()
{    
    int i;int item; char x;
     cout<<"ENTER THE SIZE OF THE ARRAY:- ";
     cin>>n;
    while(1)
    {
    	system("cls");	   	
	    cout<<"CHOOSE WHAT YOU WANT TO DO "<<endl;
	    cout<<"1. INSERTION"<<endl;
	    cout<<"2. DELETION"<<endl;
	    cout<<"3. DISPLAY"<<endl;
	    cout<<"PRESS ANY KEY TO EXIT(OTHER THAN 1,2,3)"<<endl;
	    cin>>i;
	    switch(i)
    	{
	    	case 1:   cout<<"ENTER YOUR ITEM TO INSERT:- ";
		              cin>>item;
		              insert(item);
		              getch();
		              break;
		    case 2:   cout<<"PRESS 'D' TO DELETE AN ELEMENT:- ";
		              cin>>x;
				      if(x=='d'||x=='D')
			    	  {
				         Delete();
					     getch();
				         break;
				      }
			          else
				      { 
					     break;
			          }
		    case 3:   cout<<"PRESS 'S' TO DISLAY:- ";
		              cin>>x;
				      if(x=='s'||x=='S')
				      { 
					     display();
					     getch();
					     break;
				      }
			          else
				      {   
					     break;
			          }
		    default : cout<<"TERMINATING THE PROGRAM";
		              exit(0);
				      break;				        
	    }
    }
	getch();
	return 0;
}

