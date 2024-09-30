#include <iostream>
using namespace std ;

void dummy ( int n )
{
    n ++ ; // this variable n has separate memory location then the 'n' in main
    cout<<"  Value of n: "<< n << endl; 
}

int main ()
{
   int n ;
   cin >> n ;
   dummy(n);
   cout<<"  Value of n: "<< n << endl;
}