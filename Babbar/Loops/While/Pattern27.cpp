#include <iostream>
using namespace std ;

int main()
{
    int  n ;
    cout << "Enter n : \n";
    cin >> n ;

    int row = 1 ;

  while ( row <= n )
    {
       int col = 1 ;
       int print = n - row + 1 ;
       
       // first triangle print 

       while ( print )
         { 
            cout << col ;
            col ++ ;
            print -- ;
         }
        
       int Start = row - 1 ;
       
       // second triangle print 

       while ( Start )
         {
             cout<< "*" ;
             Start-- ;
         }
         
           int star = row - 1 ;

       while ( star )
         {
             cout <<"*";
             star--;
         }
         
         print = n - row + 1 ;
         
       while(print)
         {
            cout<< print ;
            print--;
         }
        
         cout << endl;
         row++; 

          

    }

    return 0 ;
}