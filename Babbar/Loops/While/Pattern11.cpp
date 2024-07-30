#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter n: \n";
    cin >> n;
    
    char row = 1 ;
 
    while ( row <= n )
    {
      int col = 1 ;
        while ( col<= n )
        {
           cout<< static_cast <char> ( 'A' + row - 1)<< " ";
           col++ ;
        }
           cout<< endl;
           row++;
    }
    
    return 0;
}