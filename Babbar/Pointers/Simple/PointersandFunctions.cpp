#include <iostream>
using namespace std ;


// void print ( int*p )
// {
//    cout << *p << endl;
// }

void update ( int *p)
{
    // p = p + 1 ;
    // cout << "inside " << p << endl ;
    *p = *p + 1 ;

} 

int getSum ( int arr[ ] , int n)
{
    // cout<< endl << "Size" << sizeof(arr) << endl ; // actually pointer to first 
    int Sum  = 0 ;
    for ( int i = 0 ; i < n ; i++)
    {
        Sum += arr[i];
    }
       return Sum ;
}

int main ( )
{
//    int value = 8 ;
//    int *p = &value ;

//    // print(p);
//    cout << "Before " << *p  <<endl;
//    update(p);
//    cout << "After " << *p <<  endl ;

   int arr [6] = {1,2,3,4,5,8};
   cout << "Sum is "<< getSum(arr + 3 , 3 ) << endl ;

   return 0 ;
}
