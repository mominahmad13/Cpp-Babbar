#include <iostream>
using namespace std;

void update ( int **p2 )
{
    // p2 = p2 + 1 ;
    // No change 
    // *p2= *p2 + 1 ;
    // change - Yes
     **p2 = **p2 + 1 ;

    
}
int main ( ) 
{
    int i = 10 ;
    int *p = &i ;
    int ** p2 = &p ;
   
    // cout << " All Set "<< endl;
    // cout<< "printing p " << p << endl ;
    // cout << "address of p "<< &p << endl ;

    // cout << *p2 << endl ;
    // // printing value 
    // cout << i << endl ;
    // cout << *p << endl ;
    // cout << **p2 << endl ;
    // // printing address of i
    // cout << &i << endl ;
    // cout << p << endl ;
    // cout << *p2 << endl ;
    // // printing value of p2 
    // cout << &p << endl ;
    // cout << *p2 << endl;
    cout << endl ;
    
    cout << "Before " << i << endl ;
    cout << "Before" << p << endl ;
    cout << "Before" << p2 << endl ;
    
    update(p2) ;

    cout << "After"<< i << endl ;
    cout << "After" << p << endl ;
    cout << "After" << p2 << endl ;
    
    return  0 ;
}