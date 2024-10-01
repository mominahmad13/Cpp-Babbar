#include <iostream>
using namespace std ;

class Hero 
{   
    private:
    int health ;
    
    public :
    char level ;

    void print ( )
    {
        cout << level  << endl ;
    
    }

    // Getter and Setter to access to private values

    int getHealth( )
    {
        return health ;
    }

    char getLevel ( )
    {
        return level ;
    }

    void setHealth ( int h )
    {
        health = h ;
    }
    
    void setLevel( char l )
    {
        level = l ;
    }

} ;

int main ( )
{   
     //Hero h1 ;
   // h1.health=70;
     // h1.level='A';
  //   cout << "health is: "<<h1.health<<endl ;
    // cout << "h1 health is "<< h1.getHealth( ) << endl ;
    // h1.setHealth(70);
    // cout << "h1 health is "<< h1.getHealth( ) << endl ;
    // cout << "level is " << h1.level << endl ;

    // cout << "Size of h1 " << sizeof(h1) << endl ;

    // Static Allocation
       Hero a ;
       a.setHealth(80);
       a.setLevel('B');
       cout <<"level is " <<a.level<< endl ;
       cout << " health is " << a.getHealth() << endl; 
    // Dynamic Allocation
    Hero *b = new Hero ;    
    b->setHealth(78);
    b->setLevel('A');
    cout << "Level is"<< b->getHealth( ) << endl ; 
    cout << "Health is"<< b->getLevel() << endl;

    return 0 ;
}