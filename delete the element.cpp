#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x,j,k,h,size,pos;
	cout<<"ENTER TE SIZE OF ARRAY(smaller than 9):- ";
	cin>>size;
	int a[15];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
		cout<<"           POS    "<<i+1<<endl<<endl;
	}
	cout<<"ENTER THE ELEMENT YOU WANT TO DELETE:- ";
	cin>>x;
	cout<<"ENTER THE POSITION YOU WANT TO DELETE:- ";
	cin>>pos;
    //for(j=0;j<size;j++)
    //{
   // 	if(x==a[j])
    //	pos=j;
	//}
	for(h=pos-1;h<size+1;h++)
	{
		a[h]=a[h+1];
	}
	for(k=0;k<size-1;k++)
	{
		cout<<a[k]<<endl;
	}
	getch();
	return 0;
}
