#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char b[20];
    printf("enter a age");
    scanf("%d",&age);
    printf("enter citizens");
    scanf("%s",&b);
    if (age>=18 && strcmp(b,"indian")==0){
        printf("eligible");}
    else{
        printf("not eligible");
    

    }
}