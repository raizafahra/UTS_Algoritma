#include<iostream>
using namespace std;

int main(){

    int a,b,x,y;

    cout << "masukan bilangan x: ";
    cin >> a;
    cout << "masukan bilangan y: ";
    cin >> b;

    x=a;
    y=b;
    if ( x != y) {
        if ( x < y )
            { x = x + a; }
        else
            { y = y + b; }


        }

        cout << x;
    }


