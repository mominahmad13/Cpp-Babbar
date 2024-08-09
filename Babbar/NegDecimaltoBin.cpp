#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter a number: \n";
    cin >> n ;
    int bits = sizeof(int) * 8 ;
    int i = bits - 1 ;
    // if number is negative
    if( n < 0 )
    { 
      while( i>=0 )
       { 
          int bit = (n >> i) & 1 ; // to get bit at ith index
          i--;
          cout<< bit ;
       }
    


    }
         return 0 ;

}
    