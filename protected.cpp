#include<iostream>
using namespace std;

class father{
    protected:
    string mobile="oppo";
};
class mother:public father{
    public:
    void display(){
        cout<<mobile<<endl;
    }

};
int main(){
    mother m;
    
    m.display();
}

