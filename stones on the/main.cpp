#include <iostream>
#include <string>
using namespace std;

//Stones on the Table
int main()
{
    int C=0;
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0; i<n-1 ;i++)// i<n-1 because we can't count last stone
                            //    with any neighboring one after it.
    {
        if (str[i]==str[i+1])
            C+=1;
    }
    cout<<C;
   return 0;
}
