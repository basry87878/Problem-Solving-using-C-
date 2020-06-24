#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1="LOGVA";
    string evens, odds, str2;
    int n=str1.length();
    for(int i=0; i<n; i++)
    {
        if (i%2==0) //if even .. ymeen
        {
            evens+=str1[i];
        }
        else  //if odd .. insert shemal
        {
            odds+=str1[i];
        }
    }
    int n2=odds.length();
    for(int i=n2-1; i>=0; i--)
    {
        str2+=odds[i];
    }
    str2+=evens;

    cout << str2 << endl;
    return 0;
}
