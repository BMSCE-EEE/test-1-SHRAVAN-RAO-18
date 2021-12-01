#include<stdio.h>
void int_input(int *a,int *b);
void sum(int a,int b,int *c);
void output(int a,int b,int c);
int main()
{
  int x,y,z;
  int_input(&x,&y);
  sum(x,y,&z);
  output(x,y,z);
  return 0;
}
void int_input(int *a,int *b)
{
  printf("enter two number\n");
  scanf("%d %d",a,b);
}
void sum(int a,int b,int *c)
{
  *c=a+b;
}
void output(int a,int b,int c)
{
  printf("the sum of %d and %d is %d",a,b,c);
}