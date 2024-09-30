#include <iostream>
using namespace std;

int main ( )
{
    int num = 5 ;
    int *ptr = &num ;
    cout << ptr << endl; // print the memory address of '5'
    cout << *ptr << endl; // print value at that address
    double d = 4.3 ;
    double *p2 = &d ;
    cout << p2 << endl; 
    cout << *p2 << endl;
    cout << "size of integer " << sizeof(num) << endl;
    cout << "size of pointer " << sizeof(ptr) << endl;  //  
    return 0 ;
}