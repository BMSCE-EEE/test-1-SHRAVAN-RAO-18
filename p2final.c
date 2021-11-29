#include<stdio.h>
int add(int a,int b);
int main()
{
  int a,b,sum;
  printf("enter two numbers");
  scanf("%d %d"&a,&b);
  sum=add(a,b);
  printf("the sum of the given number is %d",sum);
  return 0;
}

int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}