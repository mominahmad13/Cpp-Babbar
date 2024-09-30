#include <iostream>
using namespace std ;

int main()
{  
   int arr[4] = {0} ; // same: int arr[4] =  { };  
   cout << arr[0] << endl ;
   cout << arr[1] << endl ;
   cout << arr[2] << endl ;
   cout << arr[3] << endl ;  // if any array is initialized to 'zero'  element at every index of array is set equal to '0' by default in Cpp
   // This thing int array_name = { 0 } only work for zero exclusively
   // in order to do this type of thing with other numbers we have to following thing
   //  using for loop
   int array [5]; 
   int value = 42 ;
   int length = sizeof(array) / sizeof( int ) ; // sizeof(array) gives value in bits ' 4bits of int * 5 elements = 20 bits'
   cout << sizeof( array ) << endl;
   for ( int i = 0 ; i<length ; i++)
   {
      array[i] = value ;
   }

   cout << array[0] << endl ;
   cout << array[1] << endl ;
   cout << array[2] << endl ;
   cout << array[3] << endl ;
   cout << array[4] << endl ;

   int arr_1[5] = {1}; // for partial initialization other element are set equal to zero

   cout << arr_1[0] << endl ;
   cout << arr_1[1] << endl ;
   cout << arr_1[2] << endl ;
   cout << arr_1[3] << endl ;
   cout << arr_1[4] << endl ;
   


   return 0 ;
}