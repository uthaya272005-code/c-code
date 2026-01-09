#include<stdio.h>

int main(){
    FILE *fp;
    char s[100];
    char c;
    fp=fopen("text.txt","w");
    fputs("hello world!!",fp);
    fputc('f',fp);
    fclose(fp);

  //read
  fp=fopen("text.txt","r");
  fgets(s,6,fp);
  printf("%s",s);
  fclose(fp);

  //append
  fp=fopen("text.txt","a");
  fputs("hii iam m c,c++",fp);

  //update
  fp=fopen("text.txt","r+");
  fseek(fp,0,SEEK_SET);
  fprintf(fp,"new");
  fclose(fp);
}