#include <iostream>
using namespace std;

int main () {
    int x,y,z;

    cout<<"Enter the first element :- ";
    cin>>x;
    cout<<"Enter the second element :-";
    cin>>y;
    cout<<"Enter the third element :-";
    cin>>z;

    if(x<y & x<z) {
        cout<<"C is the smallest element";
    }
    else if (y<x & y<z) {
        cout<<"Y is the smallest element";
    }
    else {
        cout<<"Z is the smallest element";
    }

}