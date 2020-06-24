
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int C=0;
    string arr;
    cin>>arr;
    int len=arr.length();
    cout<<len;
    if(len==0)
        {
            cout<<"";
        }
    else
    {
        for (int i=0; i<len ;i++)
        {
            C+=1;
        }
    }
    cout<<C;
    //cout<<C;
    return 0;
}
