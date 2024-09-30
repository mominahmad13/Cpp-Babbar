#include <iostream>
using namespace std; 

int & func(int a) // function with return value as reference
{
    int num = a ; // it is a local variable
    int& ans = num ; 
    return ans ;  // logically it is not correct
}

int* fun( int n )
{
    int *ptr = &n ; 
    return ptr;      // same issue
}

void update2( int & n )
{
     n++ ; // pass by reference
}

void update1 ( int n )
{
    n++ ; // pass by value
}

int main ( )
{
    int n = 13 ;

    cout << "Before" << n << endl ;
    update2(n);
    cout << "After" << n  << endl ;
    func(n)  ;
    fun(n);
    
    return 0 ;
}