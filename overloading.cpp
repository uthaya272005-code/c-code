#include<iostream>
using namespace std;

void display(){
    cout <<"this method overloading"<<endl;
}
void display (int i){
    cout <<"this is polymorphism"<<endl;
}
int main(){
    display(2);
}