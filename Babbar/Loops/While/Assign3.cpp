#include <iostream>
using namespace std;

int main()
{
     int n ;
     cout << "Enter n :\n ";
     cin >> n ;
     int f = 0;
    int  i = 2;
     while(i<=n/2)
     {
        if( n % i == 0 )
        {
           f++;
           
        }
        i++;
     }
    
    if(f == 0 )
       {
          cout<< "Prime Number"<<endl;
       }

    else
       {
          cout<<" Not Prime Number"<<endl;
       }
    return 0;
}