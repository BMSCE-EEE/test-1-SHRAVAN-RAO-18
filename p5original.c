#include<stdio.h>
void int_input(int *a,int *b,int *c);
void int_compare(int a,int b,int c,int *large);
void int_output(int a,int b,int c,int large);
int main()
{
  int a,b,c,largest;
  int_input(&a,&b,&c);
  int_compare(a,b,c,&largest);
  int_output(a,b,c,largest);
}
void int_input(int *a,int *b,int *c)
{
  printf("enter three numbers");
  scanf("%d %d %d",a,b,c);
}
void int_compare(int a,int b,int c,int *large)
{
 *large=0;
  if(a>b && a>c)
  {
    *large=a;
  }
  else if(b>a && b>c)
  {
    *large=b;
  }
  else if(c>a && c>b)
  {
    *large=c;
  }
  else{
    printf("all numbers are equal\n");
    *large = a;
  }
}
void int_output(int a,int b,int c,int large){
  printf("the largest number among %d %d %d is %d\n",a,b,c,large);
}