#include <iostream>
using namespace std;

int main()
{   
    int n ;
    cout <<"Enter n:\n";
    cin >> n;
    int i = 1 ;
    int sum = 0 ;
    while( i<=n)
    {   
        if( i % 2 == 0 ) 
        sum += i ;
        i++ ;

    }
    cout << "sum up to" << n << " even integers: " << sum;
    return 0;
}