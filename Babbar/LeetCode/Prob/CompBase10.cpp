#include <iostream>
using namespace std;

int main ()
{
    int  n ; 
    cout<<"Enter n : \n";
    cin >> n ;
    int m = n ;
    int mask = 0 ;

    // edge case
    if( n == 0)
    {
        cout<< "1" << endl ;
    }
    else{
      while ( m!=0 ) 
       {
          mask = (mask << 1) | 1 ;
          m = m >> 1 ;   // right shift is done x-times and this x-times is done at position where required last one of a number in binary form is present like in 5 ( 101 : last one at third position from left )
       }
          int ans = ( ~n ) & mask ; 
          cout << ans << endl  ;
    }
    return 0 ;
}