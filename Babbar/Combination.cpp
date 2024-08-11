#include <iostream>
using namespace std ;

 int factorial ( int n )
 {
   
   int f = 1 ;

   for ( int i = 1; i <=n; i++)
   {
       f = f * i ;
   }
       return f ;

 }
 int nCr ( int n , int r )
  {
    int ans = factorial(n) / ( factorial(r) *( factorial(n-r) ) ) ;
    return ans ;
  }
 int main()
  {   
    int n , r ;
    cout<<"Enter n:\n";
    cin >> n ;
    cout<<"Enter r:\n";
    cin >> r ;

    cout<< "Answer is " << nCr(n,r) << endl;
    return 0 ;
  }