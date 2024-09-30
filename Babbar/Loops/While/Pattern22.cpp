#include <iostream>
using namespace std;

int main()
{
    int  n ; 
    cout<< "Enter n : \n";
    cin >> n;

    int row = 1 ;
    
    while ( row <= n)
    {
        int space  =  row - 1 ;
        int print = n - row + 1 ;

        while (space)
        {
           cout<< " ";
           space -- ;

        }
        
        int col = 1 ;
         while ( print )
         {
            cout<< row ;
            col++;
            print -- ;
         }
         
         cout<< endl;
         row++;
    }
    

    return 0;
}