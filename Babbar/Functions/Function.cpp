#include <iostream>
using namespace std ;

int power( )
{
     int a ;
     cout<<"Enter a :\n";
     cin >> a ;

     int  b;
     cout<<"Enter b:\n";
     cin >> b ;
     int ans  = 1 ;
     for ( int  i = 1 ; i <= b ; i++ )
     {
       ans = ans * a ;
     }
        return ans ;
}
int main ()
{
     cout<< power() << " is answer " << endl;

     return 0 ;
}