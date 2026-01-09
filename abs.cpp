#include<iostream>
using namespace std;

class ac{
    public:
    virtual void ac_control()=0;
};
class samsung:public ac{
    public:
    void ac_control(){
        cout<<"automatic ac_control"<<endl;
    }
};
class lg:public ac{
    public:
    void ac_control(){
        cout<<"manual ac_control"<<endl;
    }
};
int main(){
    samsung sam;
    sam.ac_control();

    lg l;
    l.ac_control();
}