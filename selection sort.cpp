#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    char x;int i,j,h,k,small,pos,temp,size;
	int a[15];
	cout<<"ENTER THE size OF THE ARRAY:- ";
	cin>>size;
	for(k=0;k<size;k++)
	{
		cin>>a[k];
	}
	cout<<"WANT TO SORT TE ARRAY:- ";
	cin>>x;
	if(x=='y')
	{
	    for(i=0;i<size;i++)
        {
        	
		    small=a[i];
	    	pos=i;
		    for(j=i+1;j<size;j++)
		    {
		    	if(a[j]<small)
			    {
		    		small=a[j];
	    			pos=j;
		    	}
	    	}
	    	temp=a[i];
	    	a[i]=a[pos];
	    	a[pos]=temp;
    	}
    	for(h=0;h<size;h++)
	    {
	    	cout<<a[h]<<endl;
	    }
    }
    else
    {
    	cout<<"THANKS FOR USING";
	}
getch();
return 0;
}
