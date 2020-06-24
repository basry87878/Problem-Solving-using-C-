#include <iostream>
#include <cmath>
#include <string>
#include <locale>
using namespace std;

//Boy or Girl
int main()
{
    string str;
    cin>>str;
    int n= str.length();
    cout<<n<<endl;
    if (n%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
