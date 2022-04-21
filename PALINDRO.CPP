#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,rev=1;
  cout<<"enter the no;-";
  cin>>a;
  temp=a;
  while(a>=0)
  {
      b=a%10;
      rev=rev*10+b;
      a=a/10;
  }
  if(rev==temp)
  {
   cout<<"paliindrome";

  }
getch();
}