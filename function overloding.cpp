#include<iostream>
#include<conio.h>
using namespace std;
float Simple;
void Si(float p,float r,int t)
{
	Simple=(p*r*t)/100;
	cout<<"THE CALCULATED SIMPLE INTREST IS =  "<<Simple<<endl;
}
void Si(float r,float t)
{
	int p=2000;
	Simple=(p*r*t)/100;
	cout<<"THE CALCULATED SIMPLE INTREST IS =  "<<Simple<<endl;
}
void Si(float p,int t)
{
    int r=10;
	Simple=(p*r*t)/100;
	cout<<"THE CALCULATED SIMPLE INTREST IS =  "<<Simple<<endl;
}
void Si(int t)
{
	int p=2000;
	float r=5;
	Simple=(p*r*t)/100;
	cout<<"THE CALCULATED SIMPLE INTREST IS =  "<<Simple<<endl;
}
void Si(float p)
{
	int t=2;
	float r=5;
	Simple=(p*r*t)/100;
	cout<<"THE CALCULATED SIMPLE INTREST IS =  "<<Simple<<endl;
}
int main()
{    float princ,rate,time;int a;char y; int p;
     p:
     	cout<<endl;
	cout<<"CHOOSE YOUR INTPUT TYPE"<<endl;
	cout<<"1.ALL(PRINCIPLE,RATE,TIME)"<<endl;
	cout<<"2.ONLY RATE,TIME"<<endl;
	cout<<"3.ONLY PRINCIPLE, TIME"<<endl;
	cout<<"4.ONLY TIME"<<endl;
	cout<<"5.ONLY PRINCIPLE"<<endl;
	cin>>a;
	switch(a)
	{
		case 1: cout<<"ENTER YOUR PRINCIPLE = ";
	            cin>>princ;
	            cout<<"ENTER YOUR RATE = ";
	            cin>>rate;
	            cout<<"ENTER YOUR TIME = ";
	            cin>>time;
				Si(princ,rate,time);
				cout<<"WANT TO DO DIFFERENT OPERATION(y/n)"<<endl;
				cin>>y;
				if(y=='y') 
				{
					goto p;
				} 
				else
				{
					cout<<"BYE BRO";
					break;
				} 
		        
		
		case 2: cout<<"ENTER YOUR RATE = ";
	            cin>>rate;
	            cout<<"ENTER YOUR TIME = ";
	            cin>>time;
	            Si(rate,time);
		        cout<<"WANT TO DO DIFFERENT OPERATION(y/n)"<<endl;
				cin>>y;
				if(y=='y') 
				{
					goto p;
				} 
				else
				{
					cout<<"BYE BRO";
					break;
				} 
		        
		case 3: cout<<"ENTER YOUR PRINCIPLE = ";
	            cin>>princ;
  	            cout<<"ENTER YOUR TIME = ";
	            cin>>time;
	            Si(princ,time);
				cout<<"WANT TO DO DIFFERENT OPERATION(y/n)"<<endl;
				cin>>y;
				if(y=='y') 
				{
					goto p;
				} 
				else
				{
					cout<<"BYE BRO";
					break;
				} 
		        
		case 4: cout<<"ENTER YOUR TIME = ";
            	cin>>time;
            	Si(time);
		        cout<<"WANT TO DO DIFFERENT OPERATION(y/n)"<<endl;
				cin>>y;
				if(y=='y') 
				{
					goto p;
				} 
				else
				{
					cout<<"BYE BRO";
					break;
				} 
		        
		case 5: cout<<"ENTER YOUR PRINCIPLE = ";
            	cin>>princ;
            	Si(princ);
		        cout<<"WANT TO DO DIFFERENT OPERATION(y/n)"<<endl;
				cin>>y;
				if(y=='y') 
				{
					goto p;                                                                                                                  
				} 
				else
				{
					cout<<"BYE BRO";
					break;
				}        
		        
		default : cout<<"GALAT INPUT DETA HAI ";	
		          break;
	}
	getch();
	return 0;
  
}
