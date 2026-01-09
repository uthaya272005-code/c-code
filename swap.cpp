#include<iostream>
#include<string>
using namespace std;

int main() {
    int age;
    string citizen;

    cout << "enter age:";
    cin >> age;

    cout << "enter citizen (indian/other):";
    cin >> citizen;

    if (age >= 18 && citizen == "indian") {
        cout << "eligible to vote";
    } else {
        cout << "not eligible to vote";
    }
    
    return 0;
}
