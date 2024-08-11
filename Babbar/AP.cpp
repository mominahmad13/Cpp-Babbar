#include <iostream>
using namespace std ;

void AP( int n)
{
    int ap = 3 * n + 7 ;
    cout << n <<"th term " << "is: "<< ap << endl ;
}
int main()
{
    int n ;
    cout<< "Enter nth term:\n";
    cin >> n ;
    AP(n);
    return 0 ;
}