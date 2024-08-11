#include <iostream> 
using namespace std;

// 1 --> Prime.no
// 0 --> Not Prime
bool isPrime( int n )
{
   for ( int i = 2 ; i < n / 2 ; i ++ )
   {
      if ( n % i == 0 )
      {
          return 0 ;
      } 
   }
          return 1 ; // is Prime
}
int main ()
 {
   int n ; 
   cout<<"Enter n; \n";
   cin >> n; 
   if ( isPrime(n) )
   {
       cout<< "Number is Prime" << endl ;
   }
   else
   {
      cout<<"Number is not Prime" << endl;
   }
   
    return 0 ;
 }