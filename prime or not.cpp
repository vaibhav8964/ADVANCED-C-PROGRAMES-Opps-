#include<iostream>
#include<conio.h>
using namespace std;
void prime(int n)
{ int flag=0;
	for(int i=1;i<=n;i++)
	{
		if((n%i)==0)
		{
			flag++;
		}
	
	}
	if(flag==2)
	{
		cout<<"ITS PRIME NO.";
	}
	else
	{
		cout<<"ITS NOT PRIME NO.";
	}
}
int main()
{
	int A;
	cout<<"ENter your no to be checked for prime"<<endl;
	cin>>A;
	prime(A);
	getch();
	return 0;
}

