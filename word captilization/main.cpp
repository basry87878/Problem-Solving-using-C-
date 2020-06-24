#include <iostream>
#include <cmath>
#include <string>
#include <locale>
using namespace std;

//Word Capitalization
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    if (n < ( pow(10,3) )  )
        {
            if (islower(str[0]))
                {
                    str[0] = str[0] - 32;
                    cout<<str;
                }
            else
                {
                    cout<<str;
                }

        }

}
