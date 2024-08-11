#include <iostream>
using namespace std ;

int main()
{
    int a , b ;
    cout<<"Enter the value of a:\n";
    cin >> a ;
    cout<<"Enter the value of b:\n";
    cin >> b ;
    char op ;
    cout<<"Enter operation you want to perform:\n";
    cin >> op ;

    switch ( op )
    {
    case '+':
             cout<< ( a + b ) << endl ;
             break;
    case '-':
             cout<< ( a - b ) ;
             break;
    case '*':
             cout<< ( a * b ) << endl ;
             break;
    case '/':
             cout<< ( a / b ) << endl ;
             break;
    default:
            cout<<"Please enter a valid operation symbol";
             break;
    }



    return 0 ;
}