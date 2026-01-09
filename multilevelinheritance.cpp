#include<iostream>
using namespace std;
class father{
    public:
    string mobile="vivo";
};
class son:public father{

};
class grandson:public son{

};
int main(){
    grandson g;
    cout<<"mobile"<<g.mobile<<endl;
}
