#include <iostream>
#include <climits>
using namespace std ;

int main()
{
    int n ;
    cout<< "Enter n:\n";
    cin >> n ;
    int ans = 1 ;

    for ( int  i = 0; i <= 30; i++)
    {
       if( n == ans )
       {
            cout<< "true" << endl ;
            break ;
       }  
       if( ans < INT_MAX / 2 )   // INT-MIN is not required because 2's power starts from '1'
        {   
            ans = ans * 2 ;
        }
    }
       if( n != ans )
       {
           cout<<"false" << endl;
       }

         return 0 ;
}