#include <iostream>
#include <climits>
using namespace std ;

int getMin( int num[ ] , int n )
{
    int Min = INT_MAX ;
    for (int i = 0; i < n ; i++)
    {
       Min = min (Min ,num[i]); // min function to find min value
      //  if ( num[i]< min )
      //  {
      //     min = num[i];
      //  }
    }
          return Min ;
}


int getMax( int num[ ] , int n )
{
    int Max = INT_MIN ;
    for (int i = 0; i < n ; i++)
    {
       Max = max( Max , num[i] ) ; // max function  to find max value
      //  if ( num[i] > max )
      //  {
      //     max = num[i];
      //  }
    }
          return Max ;   
    
}

int main ( )
{
   int size ;
   cout<<"Enter size: ";
   cin >> size ;
   int num [100];
   
   for ( int i = 0; i < size ; i++)
   {
      cout<<"Enter value for index"<< i <<endl;
      cin >> num[i] ;
   }
   
   cout<<"Max value is " << getMax(num , size )<<endl;
   cout<< "Min value is " << getMin(num,size)<<endl;
   return 0 ;
}