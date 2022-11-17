#include <iostream>

using namespace std;

int main()
{
    //assignment operator


    int a = 10;
    int b = 20;

    ++a;
    --b;


    cout<<"addition"<<endl<<a+b;
    cout<<"subtraction"<<endl<<a-b;
    cout<<"Multiplication"<<endl<<a*b;
    cout<<"division"<<endl<<a/b;
    cout<<"modulus"<<endl<<a%b;
    cout<<"increment"<<endl<<a;
    cout<<"decrement"<<endl<<b;



    //assignment operator

    int x = 100;
    x += 5;
    cout<<endl<<x;

    x -= 2;
    cout<<endl<<x;

    x *= 4;
    cout<<endl<<x;

    x /= 2;
    cout<<endl<<x;

    x %= 3;
    cout<<endl<<x;



    // comparison operator

    int c = 10;
    int d = 15;

    cout<<endl<<(c == d);
    cout<<endl<<(c != d);
    cout<<endl<<(c < d);
    cout<<endl<<(c > d);
    cout<<endl<<(c >= d);
    cout<<endl<<(c <= d);

    //logical operator

    cout<<endl<<(c > 5 && d < 10);
    cout<<endl<<(c > 5 || d > 20);
    cout<<endl<<!(c < 10 && d > 20);


    return 0;
}
