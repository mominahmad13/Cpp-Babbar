#include <iostream>
using namespace std ;

void fibonacci ( int n )
{  
   int nextNum = 0 ;
   int a = 0 ;
   int b = 1 ;

   if ( n == a || n == b )
   {
       cout<< n << endl;
   }  

   if( n > 1 )
   {
      for( int i = 2 ; i <= n ; i++)
      {
         nextNum = a + b ;
         a = b ;
         b = nextNum ;

      }  
         cout<<nextNum<< endl;
   } 
}
   
int main ()
{   
    int n ;
    cout<<"Enter nth term: ";
    cin >> n ;
    fibonacci(n);
    return 0 ;
}