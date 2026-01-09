#include<iostream>
using namespace std;

class father{
    public:
    string carname="bmw";
};
class son:public father{
    public:
    string carname="audi";
};
int main(){
    son s;
    cout<<s.carname<<endl;
}