
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter n : \n";
    cin >> n;

    int prev = n ; int next = (2*n) +(n-2) ; int hShift = 1 ;
    
    for ( int row  = 1 ; row<= n; row ++)
    {
        if( row == 1 )
        {
            for ( int col = 1 ; col <= next ; col++)
            {
                if( col == prev || col == next)
                {
                    cout<< "*";
                }
                else cout<<" ";
            }
        }

        else
            {
                for( int col = 1 ; col<= 2 * n * n ; col++)
                {
                   if ( col == prev - hShift || col == prev + hShift || col == next + hShift || col == next - hShift)
                   {
                        cout<<"*" ;
                   }
                   else  cout<<" ";
                }
                    hShift ++;
            }
                  cout<<endl;
    }
                
       
    return 0;
}
