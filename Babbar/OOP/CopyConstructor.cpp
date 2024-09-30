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
    Hero ( Hero &obj) // because it creates the loop of calling constructor again again and again making new object
    {
        cout << "Copy Constructor called" << endl;
       this->health = health;
       this->level = level ;
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

} ;

int main ( )
{  
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel ('D');
    char name [7] = "John";
    hero1.setName(name);
    hero1.print();

   // use default copy constructor
    Hero hero2(hero1);
  //  Hero hero2 = hero1; // another way of writing
    
    hero2.print( );
    hero1.name[0]='G';
    hero1.print( ) ;

    //Hero JohnWick(70,'C') ;
    //JohnWick.print( );

    // Copy Constructor
    //Hero DonneyYen(JohnWick);
     //DonneyYen.print();


    return 0 ;
}