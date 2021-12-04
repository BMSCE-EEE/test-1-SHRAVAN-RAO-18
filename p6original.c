#include<stdio.h>
int main(){
  int n,sum;
  printf("enter the number");
  scanf("%d",&n);
  sum=0;
  for(int i=0;i<=n;i++){
    sum=sum+i;
  }
  printf("%d",sum);
  return 0;
}