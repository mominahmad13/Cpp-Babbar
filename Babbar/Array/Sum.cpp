#include <iostream>
using namespace std ;

int main ( )
{
    int arr [5] ;
    int sum = 0 ;
    for ( int i = 0 ; i < 5 ; i++ )
    { 
        cout << "Enter value for index"<<i << endl; 
        cin >> arr[i]; 
    }
    
    for ( int i = 0 ; i<5 ; i++)
    {
        sum += arr[i];
    }
     cout<<"Sum of Elements of Array "<< sum ;
     return 0 ;
}