#include <iostream>
using namespace std ;

class Hero 
{   
    private:
    int health ;
    
    public :
    char level ;

    Hero ( )
    {
        cout << "Constructor called " << endl ;
    }

    //parameterized constructor 
    Hero ( int health )
    {
      cout << " this ->" << this << endl ;
      this -> health = health ;
    }

    Hero ( int health , char level )
    {
      this -> health = health ;
      this -> level = level ;
    }

    
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
    
    // statically  
    cout << "Hi" << endl;
    Hero Goku (10) ;
    cout << "Address of Goku" << &Goku << endl ;
    //dynamically 
    Hero *h = new Hero(11);
    
    h-> print( ) ;

    Hero temp (22,'B');
   
    temp.print( );
    return 0 ;
}