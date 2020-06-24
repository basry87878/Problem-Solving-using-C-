#include <iostream>
#include <cmath>
#include <string>
#include <locale>
using namespace std;

//18 Petya and Strings
//1 string< 2...-1
//2 <1 ... 1
//== ...0


int main ()
{
  string str1,str2;
    cin>>str1;
    cin>>str2;
    int n= str1.length();
    int A,B;
    //int val=A.compareTo(B);
    for(int i=0; i<n ; i++)
    {
        if (str1[i]<str2[i])
        {
            A=-1;
        }
        else if(str1[i]<str2[i])
        {
            B=1;
        }

    }
    if (A<0)
        cout<<"-1";
    else if (B>0)
        cout<<"1";
    else
        cout<<"0";

  return 0;
}
