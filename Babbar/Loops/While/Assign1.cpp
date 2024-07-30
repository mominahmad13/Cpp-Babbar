#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character:";
    cin >> ch;
    if(ch>'a' && ch<'z')
    {
        cout<<"Character is Lowercase";
    }
    if(ch >'A' && ch < 'Z')
    {
       cout<<"Character is Uppercase"<<endl;
    }
    else if(ch <'0' && ch >'9')
    {
      cout<<"Character is numeric"<<endl;
    }
    else
    {
      cout<<"invalid input";
    }




    return 0;
}