#include<stdio.h>
int main()
{
FILE*fp;
char ch;
fp=fopen("data.txt","w");
if(fp==NULL)
 {
  printf("error");
  }
  fprintf(fp,"c is easy to learn and understand can be divide into function and it execute quickly it supports both low level and high level programming features:");
  fclose(fp);
  fp=NULL;
  fp=fopen("data.txt","r");
  while((ch=fgetc(fp))!=EOF)
  {
  printf("%c",ch);
  }
  fclose(fp);
  fp=NULL;
  fp=fopen("data.txt","a");
  if(fp==NULL)
  {
  printf("error");
  }
  fprintf(fp,"program trainers charcter was good sir explains the concept clearly his teachng method is easy to undrestand he teaches step by step he explains program with example");
  fclose(fp);
  fp=NULL;
  return 0;
}


