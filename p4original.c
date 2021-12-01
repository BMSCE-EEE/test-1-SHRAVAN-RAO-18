#include<stdio.h>
int main()
{
  int a,b,c,larger;
  a=input();
  b=input();
  c=input();
  larger=compare(a,b,c);
  return 0;
}
int input()
{
  int x;
  printf("enter a number");
  scanf("%d",&x);
}
int compare(int p,int q,int r)
{
  if(a>b)
  {
    if(a>c)
    {
      printf("%d is greatest of all",a);
    }
    else
    printf("%d is greatest of all",c);
    printf("%d is smallest of all",b);
  }
  else if(b>c)
  {
    printf("%d is greatest of all",b);
    if(a>c)
    {
      printf("%d is smallest of all",c)
    }
  }
  else
  printf("%d is greatest of all",c);
  }
}