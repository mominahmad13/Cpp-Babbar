#include <iostream>
using namespace std;

int main ()
{
    int n ;
    cout << "Enter n : \n";
    cin >> n ;
    int row = 1 ;
    while ( row <= n )
    {
         int col = 1;
         char start = 'A'+ row + col - 2 ;
      while ( col <= n )
      {
         cout << start << " ";
         start++;
         col++;
      }
         cout<<endl;
         row++;
    }
    
    return 0;
}