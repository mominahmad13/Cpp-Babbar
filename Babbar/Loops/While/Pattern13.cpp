#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter n: \n";
    cin >> n ;
    int row = 1 ;
    char ch  = 'A';
    
    while ( row <= n)
    {
        int col = 1;
        while ( col <= n )
        {
            cout << ch << " ";
            col++;
            ch++;
        }  
        cout<< endl;
        row++;
        
    }
    
    return 0;
}