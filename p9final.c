#include<stdio.h>
char charinput();
int main()
{
  char s1[10],s2[10],larger;
  s1[10]=charinput();
  s2[10]=charinput();
  return 0;
}
char charinput()
{
  char w[10];
  printf("enter a string");
  scanf("%s",w);
  printf("%s\n",w);
}
