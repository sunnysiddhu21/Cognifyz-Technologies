#include<iostream>
#include<string>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
char *rev(char *str)
{
  int i,len=0,n;
  char temp;
  len=strlen(str);
  n=len-1;
  for(i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}
int main()
{ 
    char str[]="My name is Sunny Siddhu";
	cout<<"Reverse string using rev()...\n";
    rev(str);
	cout<<str;
    return 0;
}