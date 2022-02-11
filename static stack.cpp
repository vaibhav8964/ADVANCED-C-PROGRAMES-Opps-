#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int size;int a[10];
int top=-1;
push(int element)
{
	if(top==size-1)
	{
		cout<<"STACK IS FULL "<<endl;
	}
	else
	{
		a[++top]=element;
	}	
}
pop()
{
	if(top==-1)
	{
		cout<<"STACK IS EMPTY";
	}
	else
	{
		top--;
		cout<<"ELEMENT DELETED";
	}
}
display()
{
	if(top==-1)
	{
		cout<<"STACK EMPTY";
	}
	else
	{
		for(int i=top;i>=0;i--)
		{
			cout<<a[i]<<endl;
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
			         push(item);
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
