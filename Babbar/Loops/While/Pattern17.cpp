#include <iostream>
using namespace std;

int main()
{   
    int n ;
    cout << "Enter n: \n";
    cin >> n;
    int row = 1 ;

    while ( row <= n)
    {
       int col = 1 ;
        while( col <= row)
        {
           cout << static_cast <char> ('A'+ row + col - 2) << " ";
           col++;
        }
           cout<< endl;
           row++;
    }
    
    return 0;
}