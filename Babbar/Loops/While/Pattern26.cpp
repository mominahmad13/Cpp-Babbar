#include <iostream>
using namespace std;

int main()
{   
   int n ; 
   cout << "Enter n : \n";
   cin >> n ;
   
   int row = 1 ; 
   
   while ( row <= n)
   {
      int space = n - row ;
      
      // Print first triangle

      while ( space )
      {
        cout<< " ";
        space -- ;
      }
      
      int col = 1 ;
      
     // print 2nd triangle 

      while ( col <= row )
      {
         cout<< col ;
         col ++;
      }
      
      // print 3rd triangle
      
      int start = row - 1 ; 

      while (start)
      {
        cout<< start ;
        start -- ;
      }
      

         cout<< endl ;
         row ++ ; 

   }
   
        return 0 ;
}