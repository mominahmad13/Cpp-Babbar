#include <iostream>
using namespace std;

int main()
{
     int n ;
     cout << "Enter n: \n";
     cin >> n ;

     int row = 1;

     while ( row <= n)
     {
        int space = n - row ;
        while (space)
        {
          cout<<" ";
          space-- ; // preventing loop to become infinite
        }
     
     int col = 1;
     while ( col<= row )
     {
        cout<< "*";
        col++;
     }
      cout<< endl;
      row++;

     }
         
     return 0 ;
}