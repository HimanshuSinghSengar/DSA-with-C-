#include <iostream>
using namespace std;

int main () {
    int n;

    cout<<"Enter the first element :- ";
    cin>>n;
    cout<<"Enter the second element :-";
    cin>>n;
    cout<<"Enter the third element :-";
    cin>>n;

    if ((n%5==0 || n%3==0) & (n%15!=0)) {

        cout<<"Divisible by 5 and 3";
    }
    else {
        cout<<"Not divisible by 15";
    }

}
  