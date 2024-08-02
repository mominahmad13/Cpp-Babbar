#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter unsigned Number: \n";
    cin >> n ;
    int count = 0 ;
  
    while( n != 0)
    {
        // checking last bit
      if ( n & 1 )  //  ( 0101 & 1 = 0001 --> (Decimal:1) )
       {
          count ++ ;
       }
        n = n >> 1 ;
       

    }

    cout<< count ;

    return 0 ;
}