// #include <iostream>
// using namespace std;

// int main () {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     // (condition) ? if true : if false ;
//     (n%2==0) ? cout<<"even number" : cout<<"odd";
// }

#include <iostream>
using namespace std;
int main () {
    int n1;
    cout<<"Enter element n1 : ";
    cin>>n1;
    char op; //This is an operator
    cin>>op;
    cout<<"Enetr element n2 : ";
    int n2;
    cin>>n2;

    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        case '-':
        cout<<n1-n2<<endl;
        case '*':
        cout<<n1/n2<<endl;
        case '/':
        default:
        cout<<"Invalid operator";
        
        

    

    }
}
