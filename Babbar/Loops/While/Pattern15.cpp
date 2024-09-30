#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter n: \n";
    cin >> n ;
    int row = 1 ;
    char ch = 'A';
    while ( row <= n)
    {
       int col = 1 ;
       while ( col <= row )
       {
          cout << ch << " ";
          col ++ ;
       }
          cout<< endl;
          row++;
          ch++;
    }
    
    return 0;
}