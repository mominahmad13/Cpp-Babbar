#include <iostream>
using namespace std;


int main()
{   
    int n ;
    cout << "Enter n : \n";
    cin >> n ;
    
    int  row = 1 ;
    while ( row <= n )
    {
      int space = row - 1;
      int  print = n - row + 1 ;

      while (space)
      {
         cout<<" ";
         space--;
      }
         int col = 1;
         int num = row ;

      while ( print )
      {
        cout << num ;
        col++;
        num ++ ;
        print -- ;
      }
        cout<<endl;
        row++;
      
         
    }
    
    return  0 ;
}