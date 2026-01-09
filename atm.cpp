#include<iostream>
using namespace std;

class atm{
    private:
    int pin_number;
    int amount;
    public:
    atm (int pin_number,int amount){
        this->pin_number=pin_number;
        this->amount=amount;
        cout<<pin_number<<endl;
        cout<<amount<<endl;
    }
};
int main(){
    atm(2705,2000);
}