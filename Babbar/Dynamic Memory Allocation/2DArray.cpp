#include <iostream>
using namespace std; 

int main ( )
{   
    int row , col ;
    cout << "Enter row: \n";
    cin >> row ;
    cout << "Enter col: \n" ;
    cin >> col ;

    // creating 2D Array

    int ** arr = new int * [row] ; 

    for ( int i = 0 ; i < row ; i++)
    {
         arr[i] = new int [col] ;    
    }

    // taking input

    for ( int i = 0 ; i < row ; i ++ )
    {
        for ( int j = 0 ; j < col ; j ++ )
        {
            cout << "Enter element for " << i <<"th row and "<<j <<"th col: ";
            cin >> arr [i][j] ;
        }
    }

    // printing 2D Array 

    for ( int i = 0 ; i< row  ; i++ )
    {
        for ( int j = 0 ; j < col ; j ++ )
        {
            cout << arr[i] [j] << " " ;
        }
          cout << endl ; 
    }

    // memory free 
    for ( int i = 0 ; i< row  ; i++ )
    {
       delete [ ] arr [i] ;
    }
    
    delete  [ ] arr  ; // deletes the columns


    return 0 ;
}