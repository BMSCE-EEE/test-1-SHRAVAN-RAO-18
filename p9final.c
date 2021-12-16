#include<stdio.h>
char charinput();
char comp(char s1[n],char s2[n]);
int main()
{
  int n=10;
  char s1[n],s2[n],larger;
  s1[n]=charinput();
  s2[n]=charinput();
  larger=comp(s1[n],s2[n]);
  return 0;
}
char charinput()
{
  int n=10;
  char w[n];
  printf("enter a string");
  scanf("%s",w);
  printf("%s\n",w);
  return w;
}
char comp(char s1[10],char s2[10])
{
  int n=10;
  char large;
  int i;
  while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
  {
    i++;
    if(s1[i]>=s2[i]){
      large=s1[i];
    }
    else if(s2[i]>=s1[i]){
      large=s2[i];
    }
    else{
      printf("the entered strings are same");
    }
    break;
  }
  return large;
}
