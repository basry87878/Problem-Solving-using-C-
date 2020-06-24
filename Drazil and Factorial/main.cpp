#include <iostream>
#include <string>
#include <sstream>
using namespace std;



int main()
{


    string str="";
    int n;
    cin>>n;
    int arrx[n];


    for(int i=0; i<n; i++)
    {
        cin>>arrx[i];
    }



    for (int i=0; i<n; i++)// processing
    {


        if(arrx[i] ==2)
        {
            str+="2";

        }
        else if(arrx[i]==3)
        {
            str+="3";
        }
        else if(arrx[i]==4)
        {
            str+="322";
        }
        else if(arrx[i]==5)
        {
            str+="5";
        }
        else if(arrx[i]==6)
        {
            str+="53";
        }
        else if(arrx[i]==7)
        {
            str+="7";
        }
        else if(arrx[i]==8)
        {
            str+="7222";
        }
        else if(arrx[i]==9)
        {
            str+="7332";
        }

    }


    int len=str.length();
    string tmp;
    for (int i=1; i<=len; i++)
    {
        if (str[i-1]<str[i])
            {
                tmp[0]=str[i];
                str[i]=str[i+1];
                str[i+1]=tmp[0];
            }

    }
    //hna momken a arrange 1st
    cout << str << endl;    //output



    return 0;
}
