#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x,j,k,h,size;
	cout<<"ENTER TE SIZE OF ARRAY(smaller than 9):- ";
	cin>>size;
	int a[10];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"ENTER THE ELEMENT YOU WANT TO ENTER:- ";
	cin>>x;
	cout<<"ENTER TE LOCATION YOU WANT TO ENTER THE ELEMENT:- ";
	cin>>j;
	for(k=size-1;k>=j-1;--k)
	{
		a[k+1]=a[k];
	}
	a[j-1]=x;
	for(h=0;h<size+1;h++)
	{
		cout<<a[h]<<endl;
	}
	getch();
	return 0;
}
