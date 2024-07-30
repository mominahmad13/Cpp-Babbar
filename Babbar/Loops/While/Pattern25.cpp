#include <iostream>
using namespace std;

int main()
{   
    int n ; 
    cout<< "Enter n: \n";
    cin >> n ;
    
    int row = 1 ; 
    int num = 1 ;

    while ( row<= n )
    {
       int space =  n - row ;
       int print = row ;

       while (space)
       {
         cout << " ";
         space -- ;
       }
       
        int col = 1 ;
        
        while (print)
        {
          cout << num ;
          print -- ; 
          num ++ ;
          col ++;
        }
        
        cout<< endl;
        row ++ ;
    }
    
    return 0 ;
}