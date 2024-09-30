#include <iostream>
using namespace std ;

class MyClass 
{
    public:
    int a; 
    double b ;

    MyClass ( int x ,double y ) 
    {
        a = x ;
        b = y ;
    };
};    
   
int main ( )
{
    MyClass obj (10,20.5);
    MyClass *ptr ;
    cout << "Address of object: "<<ptr <<endl;
    cout <<"Address of first attribute x: "<<&(obj.a)<<endl;
    cout <<"Address of second attribute x: "<<&(obj.b)<<endl;
    return 0 ;
}