#include <iostream>
using namespace std ;

int setBits ( int num )
{
   int count = 0 ;

   while ( num != 0)
   {
      if ( num & 1 )
      {
         count ++ ;
      }
        num = num >> 1 ;
   }
      return count ;
}


int main()
{   
    
    int a , b ;
    cout<< "Enter a :\n";
    cin >> a ;
    cout<< "Enter b :\n";
    cin >> b ;
    int totalSetBits = setBits(a) + setBits(b) ;
    cout<< "Total Set-Bits in a and b: " << totalSetBits << endl;


    return 0 ;
}