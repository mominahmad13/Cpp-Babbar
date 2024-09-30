#include <iostream>
using namespace std;

int main()
{
    int n ; 
    cout << "Enter n: \n";
    cin >> n;
    int row = 1 ; 

     while ( row <= n )
     {
        int space = row - 1 ;
        int star = n - row + 1 ;
        while ( space )
        {
           cout << " " ;
           space -- ;
        }

        int col = 1 ;

        while ( star )
        {
           
           cout<< "*" ;
           col ++ ;
           star -- ;
        }
           cout<< endl;
           row ++ ;
        

     }
         

    return 0;
}