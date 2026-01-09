#include<stdio.h>
#include<string.h>

struct book{
    int no;
    char author [50];
    float price;
};

int main(){
    
    int a;
    a=5;
    struct book avangers;
    avangers.no=7;
    strcpy(avangers.author, "marvelstudio");
    avangers.price=345.78;
    printf("%d\n",avangers.no);
    printf("%s\n",avangers.author);
    printf("%f\n",avangers.price);
    struct book harrypotter;
    harrypotter.no=10;
    strcpy(harrypotter.author,"j.k.rowlin");
    harrypotter.price=500.00;
    printf("%d\n",harrypotter.no);
    printf("%s\n",harrypotter.author);
    printf("%f\n",harrypotter.price);
}
    
    
