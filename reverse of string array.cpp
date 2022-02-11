#include<iostream>
#include<conio.h>
using namespace std;
void reverse(char a[],int size)
{ int j=size-1,temp=0;
for(int i=0;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int k=0;k<size;k++)
	cout<<a[k];
}
int main()
{
	char A[10];
    int n,x,i;
    cout<<"THE NO. OF ELEMENT YOU WANT TO ENTER"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>A[i];
    }
	reverse(A,n);
	getch();
	return 0;
}

