// #include <iostream>
// using namespace std;
// int main () {
//     int x = 5;
//     int y = 9;
//     cout<<x<<" "<<y<<endl;

//     int temp = x;
//     x=y;
//     y = temp;
//     cout<<x<<" "<<y<<endl;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int x = 5;
//     int y = 4;
//     cout<<x<<" "<<y<<endl;

//     int temp = x;
//     x = y;
//     y = temp;
//     cout<<x<<" "<<y<<endl;
// }

//method 2 //swap number

#include <iostream>
using namespace std;

int main () {
    int x = 5;
    int y = 4;
    cout<<x<<" "<<y<<endl;

    x = x+y;
    y = x-y;
    x = x-y;

    cout<<x<<" "<<y<<endl;
}