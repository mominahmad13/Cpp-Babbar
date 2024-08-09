#include <iostream>
using namespace std;

int main()
{
    int num ;
    cout<<"Enter number: \n";
    cin >> num ;

    int sum = 0;
    int prod = 1 ;

    while( num != 0 )
    {
      int digit = num % 10 ;

      prod = prod * digit ;

      sum = sum + digit ;

       num = num / 10 ;
    
    }
    
    int sub = prod - sum ;
    
    cout<< sub ;
    
    return 0 ;
}