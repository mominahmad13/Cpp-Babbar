#include <iostream>
using namespace std ;

// Function Signature
void printCounting(int num)
{   
    // Function Signature
    for ( int i = 1; i <= num ; i++)
    {
       cout<< i << endl ;        
    }
    
}
int main()
{
    int n ;
    cin >> n ;
    // function call 
    printCounting(n) ;
    return 0 ;
}