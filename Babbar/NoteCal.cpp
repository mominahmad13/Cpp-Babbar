#include <iostream>
using namespace std ;

int main()
{
    int amount ;
    cout<<"Enter a amount:\n";
    cin >> amount ;
    int  nHund, nFifty , nTwenty , nOnes ;

    
    switch (1)
    {
       case 1 : 
               nHund = amount / 100 ;
               amount = amount - ( nHund * 100 ) ;
               cout<< "Number of Hundreds : "<< nHund << endl ;
       case 2 :
               nFifty = amount / 50 ;
               amount = amount - ( nFifty * 50) ;
               cout<< "Number of Fiftys: " << nFifty << endl ;
       case 3 :
               nTwenty = amount / 20 ;
               amount  = amount - ( nTwenty * 20 );
               cout << "Number of Twenty's: " << nTwenty << endl ;
       case 4 :
               nOnes = amount ;
               cout << "Number of Ones: " << nOnes << endl ;
    }

    return 0 ;
}