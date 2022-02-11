#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{  
   char x[10];int count=0;
   cout<<"ENTER THE WORD YOU WANT TO COUNT:- ";
   cin>>x;
   ifstream ifs("file.txt");
   char a[10];
   while(!ifs.eof())
  {
   	ifs>>a;
   	if(strcmpi(a,x)==0)
   	{
   		count++;
	}
   }
   cout<<"THE "<<x<<" COMES "<<count<<" TIMES IN A GIVEN FILE";
   ifs.close();
   getch();
   return 0;
}















