#include <iostream>
#include <cstring>
using namespace std ;

class Hero 
{   
    private:
    int health ;
    
    public :
    char level ;
    char *name;
    static int timeToComplete ;
    Hero ( )
    {
        cout << "Constructor called " << endl ;
        name = new char[100];
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
    
    // Copy Constructor
    // Hero ( Hero &obj) // because it creates the loop of calling constructor again again and again making new object
    // {
    //     cout << "Copy Constructor called" << endl;
    //    this->health = health;
    //    this->level = level ;
    // }

    // Deep Copy
    Hero ( Hero &obj) // because it creates the loop of calling constructor again again and again making new object
    {
       char * ch = new char [strlen( obj.name) + 1 ] ;
       strcpy( ch , obj.name );  // copies C-String  int to array
       this->name = ch ;
       this->health = obj.health;
       this->level = obj.level ;
    }

    // In C++ using pass by value call copy constructor to make copy of object 
    
    void print ( )
    {
        cout<<"Name: "<< this->name << endl;
        cout<< "health" << this->health << endl;
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

    void setName( char name [] )
    {
      strcpy( this->name , name );
    }
    static int random ( ) 
    {
        return timeToComplete ;
    }

    ~Hero( )
    {
        cout << "Destructor called "<< endl;
    }

} ;

     int Hero :: timeToComplete = 5 ;

int main ( )
{  
   cout << Hero::timeToComplete << endl;
   cout <<  Hero::random( ) << endl;
  
    return 0 ;
}