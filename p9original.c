#include<stdio.h>
int input(int a);
int main()
{
  int a,b;
  a=input(a);
  b=input(b);
  printf("the values of a and b are % d and %d",a,b);
  return 0;
} 
int input(int a)
{
  int z;
  printf("enter the number");
  scanf("%d",&z);
  return z;
}
