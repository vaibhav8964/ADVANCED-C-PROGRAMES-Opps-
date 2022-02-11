#include<iostream>
#include<conio.h>
using namespace std;
void lsearch(int a[],int item,int size)
{ int pos=0,flag=0;
	for(int i=0;i<=size;i++)
	{
		if(a[i]==item)
		{
		  pos=i+1;
		  flag=1;
		  break;
		}
	
	}
	if(flag==1)
	{
		cout<<"NUMBER FOUND !!!!!"<<endl;
		cout<<"AT POSITION "<<pos;
	}
	else
	{
		cout<<"NUMBER NOT FOUND";
	}
}
int main()
{
	int A[10];
    int n,x,i;
    cout<<"THE NO. OF ELEMENT YOU WANT TO ENTER"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>A[i];
	}
	cout<<"ENter your no to search"<<endl;
	cin>>x;
	lsearch(A,x,n);
	getch();
	return 0;
}

