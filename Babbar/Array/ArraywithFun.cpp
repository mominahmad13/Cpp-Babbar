#include <iostream>
using namespace std ;

void printArray( int arr[ ] , int length )
{
    cout<< " printing the array" << endl;
    for ( int i = 0 ; i<length ; i++)
    {
       cout<<"arr"<<"["<<i<<"]:" <<arr[i]  ;
       cout<< endl;
    }
       cout<< "printing done" << endl ;
}

int main()
{  
   
   int array [5] ={ 3,8,9,4,1}; 
   int value = 42 ;
   int length = sizeof(array) / sizeof( int ) ; // sizeof(array) gives value in bits ' 4bits of int * 5 elements = 20 bits'
   // printArray( array, length);
   char ch[5] = {} ;
   
   return 0 ;
}