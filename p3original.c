#include<stdio.h>
int input(int a);
int input_2(int b);
int add(int a,int b);
int main()
{
  int a,b,sum;
  a=input(a);
  b=input_2(b);
  sum=add(a,b);
  printf("sum of %d+%d=%d\n",a,b,sum);
}
int input(int a)
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}
int input_2(int b)
{
  int y;
  printf("enter a number\n");
  scanf("%d",&y);
  return y;
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}