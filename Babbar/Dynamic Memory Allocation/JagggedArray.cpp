#include <iostream>
using namespace std ;

int main ( )
{
    int rows  ; 
    cout << "Enter row: \n";
    cin >> rows ;

    int ** arr = new int * [rows] ; // double pointer referencing first row first elem
    int * cols = new int[rows] ;    // array to store columns for each row

// jagged array

    for ( int i = 0 ; i < rows ; i ++ )
    {
       cout << "Enter columns for "<<i+1 << "th row:"<< endl ;
       cin >> cols[i];
       // Dynamically allocate memory for columns for each row
       arr[i] = new int [cols[i]] ;
    }
     
     // taking input

    for ( int i = 0 ; i < rows ; i ++ )
    {
       for ( int j = 0 ; j < cols[i] ; j ++ )
       {
            cout << "Enter element for "<< i + 1 << "th row and "<< j+1 << "th col: "<< endl ;
            cin >> arr[i][j];
       }
    }

     // printing

    for ( int i = 0 ; i < rows ; i++ )
    {
        for ( int  j = 0 ; j < cols[i] ; j ++ )
        {
            cout << arr[i][j] << " " ;
        }
            cout << endl ;
    }

   // free memory 
   for ( int i = 0  ; i < rows ; i ++ )
   {
      delete arr [i] ; // deleting pointer to each row 
   }   
     
     delete [ ] arr ; //delete array containing pointers
     delete [ ] cols ; // delete array containing number of columns
     
    return 0 ;
}