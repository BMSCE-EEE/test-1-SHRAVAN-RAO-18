#include<stdio.h>
int input();
void arr(int n,int a[n]);
int sumar(int n,int a[n]);
void output(int n,int a[n],int sum);
int main()
{
  int n,sum;
  n=input();
  int a[n];
  arr(n,a);
  sum=sumar(n,a);
  output(n,a,sum);
  return 0;
}
int input()
{
  int a;    
  printf("enter a number");
  scanf("%d",&a);
  return a;
}
void arr(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter the %d array element",i);
    scanf("%d",&a[i]);
  }
}
int sumar(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum)
{
  printf("the sum of");
  for(int i=0;i<n;i++){
    printf("%d+",a[i]);
  } printf("is %d",sum);
 
}
