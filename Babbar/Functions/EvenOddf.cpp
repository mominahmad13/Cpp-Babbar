#include <iostream>
using namespace std ;

bool isEven( int a )
{
   
   if ( a&1 )
   {
      return 0 ; // Function return one time even if ther is other return statement afterwards
   }
      return 1 ; // number is Even
}
int main()
{   
    int num ;
    cout<<"Enter number:\n";
    cin >> num ;
    
    if( isEven(num) )
    {
        cout<<"Number is Even" << endl ;
    }
    else
    {
       cout<<"Number is Odd" << endl ;
    }

    return 0 ;
}

