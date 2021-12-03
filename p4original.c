#include<stdio.h>
int input();
int compare(int a,int b,int c);
int main()
{
  int a,b,c,larger;
  a=input();
  b=input();
  c=input();
  larger=compare(a,b,c);
  printf("%d is largest of all number",larger);
  return 0;
}
int input()
{
  int x;
  printf("enter a number");
  scanf("%d",&x);
  return x;
}
int compare(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return  b;
  }
  else if(c>a && c>b)
  {
    return c;
  }
  else 
  printf("the numbers are same");
}