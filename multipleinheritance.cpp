#include<iostream>
using namespace std;
class father{
    public:
    string carname="audi";
};
class mother{
    public:
    string carname="bmw";
};
class daughter: public father,public mother{

};
int main(){
father f;
mother m;
daughter d;
cout <<d.mother::carname<<endl;
};
