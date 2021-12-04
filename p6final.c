#include<stdio.h>
int input();
int sum(int n);
void output(int n,int summ);
int main(){
  int n,summ;
  n=input();
  summ=sum(n);
  output(n,summ);
  return 0; 
}
int input(){
  int x;
  printf("enter a number");
  scanf("%d",&x);
  return x;
}
int sum(int n){
  int k,i;
  k=0;
  for(i=0;i<=n;i++){
    k=k+i;
  }
  return k;
}
void output(int n,int summ){
  printf("the sum of first %d numbers are %d",n,summ);
}