#include <iostream>
#include <string>
using namespace std;

int main()
{
    //input a string
    string str1;
    string str2="";
    cin>>str1;
    int len;
    len=str1.length(); //n of str1


    //process
    for (int i=3; i<len; i++)
    {
        if ( (str1[i]=='W') && (str1[i+1]=='U') && (str1[i+2]=='B') )
            {
                if ( (str1[i-3]=='W') && (str1[i+1-3]=='U') && (str1[i+2-3]=='B') )
                    i=i+2;
                else
                {
                    str2+=" " ;
                    i=i+2;
                }
            }
        else
            str2+=str1[i] ;   //WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUBWUBTEST
    }

    //printing
    for(int i=0; i<str2.length(); i++)
    {
        cout << str2[i] ;
    }


}
