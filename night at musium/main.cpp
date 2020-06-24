#include <iostream>
#include <cmath>
using namespace std;


//Night at the Museum
int main()
{

    string input;
    int strt=0;
    int moves=0;
    cin>>input;
    int n=input.length();
    for(int i=0 ; i<n ; i++)
    {
        int index= (input[i]-97);
        int walk= abs(strt-index);
        if (walk<13)
            moves+=walk;
        else
            moves+=26-walk;
        strt=index;
    }

    cout << moves << endl;
    return 0;
}

