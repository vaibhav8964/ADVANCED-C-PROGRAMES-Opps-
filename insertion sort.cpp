#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ char x;int j,k,h,size,temp;
	cout<<"ENTER TE SIZE OF ARRAY(smaller than 9):- ";
	cin>>size;
	int a[15];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
    }
	cout<<"WANT TO SORT THE ARRAY(y/n):- ";
	cin>>x;
	if(x=='y')
	{	
       for(h=1;h<size;h++)
       {
       	    temp=a[h];
       	    j=h-1;
       	    while(temp<a[j]&&j>=0)
       	    {
       	    	a[j+1]=a[j];
       	    	j--;
			}
			a[j+1]=temp;
       }
   	}
	for(k=0;k<size;k++)
	{
		cout<<a[k]<<endl;
	}
	getch();
	return 0;
}
