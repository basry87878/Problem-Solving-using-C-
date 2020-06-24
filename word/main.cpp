#include <iostream>
#include <cmath>
#include <string>
#include <locale>
using namespace std;

//Word
int main()
{
    string str;
    cin>>str;
    int n= str.length();
    int upper=0;
    int lower=0;
    for (int i=0 ; i<n ; i++)
    {
        if( islower(str[i]) )
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(upper>lower)
    {
        for (int i=0 ; i<n ; i++)
        {
            if (islower(str[i]))
            //  Converting lowercase characters to uppercase
            str[i] = str[i] - 32;
        }
    }
    else
    {
        for (int i=0 ; i<n ; i++)
        {
            if (isupper(str[i]))
            //  Converting lowercase characters to uppercase
            str[i] = str[i] + 32;
        }
    }

    cout << str;
}
