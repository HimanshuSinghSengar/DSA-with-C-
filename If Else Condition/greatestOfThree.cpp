#include <iostream>
using namespace std;

int main () {
    int a,b,c;

    cout<<"Enter First Element : ";
    cin>>a;
    cout<<"Enter Second Element : ";
    cin>>b;
    cout<<"Enter third  Element : ";
    cin>>c;

    if (a>b & a>c) {
        cout<<"a is greatest";
    }

    else if (b>a & b>c) {
        cout<<"B is greatest";
    }

    else {
        cout<<"C is greatest";
    }
    
}