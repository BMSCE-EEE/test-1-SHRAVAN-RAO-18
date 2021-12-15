#include<stdio.h>
int f()
{
  static int a=10;
  a=a;
  return a;
}
int main()
{
  int z,k;
  z=f();
  printf("%d\n",z);
  k=f();
  printf("%d\n",k);
  return 0;
}
