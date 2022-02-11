#include<iostream>
#include<conio.h>
using namespace std;
void merge(int a[],int m, int b[],int n,int c[])
{
	int i=0,j=0,k=0,r;
	while(i<m&&j<n)
	{
		if(a[i]<=b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
		
	}
	if(i==m)
	{
		for(r=j;r<n;r++)
		{
		c[k]=b[r];
		k++;
		}
	}
	else
	{
		for(r=i;r<m;r++)
		{
		c[k]=a[r];
		k++;
		}
	}
	cout<<"\n your  merged array is :";
	for(int i=0;i<k;i++)
		{
		cout<<c[i]<<" : ";
		}
}
int main()
{
	int B[20],A[20],C[40],size1,size2; 
	cout<<"ENTER THE  SIZE OF YOUR ARRAY 1  :";
	cin>>size1;
	cout<<" ENTER YOUR  1ST ARRAY :\n ";
	for(int i=0;i<size1;i++)
	cin>>A[i];
		cout<<"ENTER THE 2nd  SIZE OF YOUR ARRAY  :";
	cin>>size2;
	cout<<"\n your 2ND  araay is : ";
	for(int i=0;i<size2;i++)
	cin>>B[i];
	merge(A,size1,B,size2,C);
	getch();
	return 0;
}
