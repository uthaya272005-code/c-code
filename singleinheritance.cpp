#include<iostream>
using namespace std;
class father{
    public:
    string carname="bmw";
};
class son:public father{

};
int main(){
father f;
cout << f.carname<<endl;
}





