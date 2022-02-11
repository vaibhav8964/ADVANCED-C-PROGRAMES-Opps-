#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{ 
 char Str[50],word[10],Temp[10];
 int count=0,k=0,i=-1;
 cout<<" Enter a string\n ";
 gets(Str);
 cout<<"\n Enter the word you want to count \n ";
 cin>>word;
 do{
    if(isalpha(Str[++i]))
    Temp[k++]=Str[i];

    else if((int)Str[i]==39&&isalpha(Str[i-1])&&isalpha(Str[i+1]))
    Temp[k++]=Str[i];

    else
     {  Temp[k]='\0';
	k=0;
	if(strcmpi(Temp,word)==0)
	count++;
     }
  }while(Str[i]!='\0');
  cout<<"\n No. of occurence of word '"<<word<<"' in entered string is "<<count;
  getch();
  return 0;
}

