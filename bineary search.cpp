#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x,size,beg=0,mid=0;
	cout<<"ENTER TE SIZE OF ARRAY(smaller than 15):- ";
	cin>>size;
	int end=size-1;
	int a[15];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH:- ";
	cin>>x;
	while(beg<=end)
	{
		
		mid=(beg+end)/2;
		if(x==a[mid])
		{
			cout<<"THE ELEMENT FOUND AT THE POSITION "<<mid+1;
			break;			
		}
		else if(x>a[mid])
		{
			beg=mid+1;
		}
        else
        {
        	end=mid-1;
		}
    }
	getch();
	return 1;
}
