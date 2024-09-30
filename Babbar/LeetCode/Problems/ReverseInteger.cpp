#include <iostream>
#include <climits> // fot INT_MAX & INT_MIN
using namespace std ;

int main()
{
    int x ;
    cout<<"Enter n : \n";
    cin >> x ;
    int ans = 0;

    while ( x != 0 )
    { 
        int digit = x % 10 ;
        /*
           1- if we take ans * 10 exceeds the maximum value an int can hold, it will result in an overflow before the comparison takes place
           2-// ans * 10 will make number bigger so we check along this condition
        */ 
        if ( ans  > INT_MAX/10 || ans < INT_MIN /10)
        {
            return 0;
        }
           ans = (ans * 10 ) + digit ; 
           x = x / 10 ;

    }
          cout<< ans << endl;
}