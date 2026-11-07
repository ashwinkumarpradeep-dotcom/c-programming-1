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
  fprintf(fp,"thalapathy is one of the dancer");
  fclose(fp);
  fp=NULL;
  return 0;
}


