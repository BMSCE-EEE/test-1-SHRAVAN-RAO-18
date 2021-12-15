#include<stdio.h>
char charinput();
char comp(char s1,char s2);
int main()
{
  char s1[10],s2[10],larger;
  s1[10]=charinput();
  s2[10]=charinput();
  larger=comp(s1[10],s2[10]);
  return 0;
}
char charinput()
{
  char w[10];
  printf("enter a string");
  scanf("%s",w);
  printf("%s\n",w);
}
char comp(char s1,char s2)
{
  char large;
  int i;
  while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
  {
    i++;
    if(s1[i]>s2[i]){
      large=s1[i];
    }
    else if(s2[i]>s1[i]){
      large=s2[i];
    }
    else{
      printf("the entered strings are same");
    }
    break;
  }
  return large;
}
