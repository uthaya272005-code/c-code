#include<iostream>
using namespace std;

class grandfather{
    public:
     string bike="hero";
};
class grandmother{
    public:
    string bike="yamaha";
};
class father:public grandfather,grandmother{

};
class son :public father{

};

class grandson :public father{

};
class granddaughter:public father{

};
int main(){
    granddaughter gd;
    cout<<gd.grandfather::bike<<endl;
}
