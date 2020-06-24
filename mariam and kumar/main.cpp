#include <iostream>

using namespace std;

int main()
{
    int m,n,c=0;
    cin>>m;
    int a[m];
    cin>>n;
    int moves=-1;
    for (int i=0; i<m; i++) //enter array a
    {
        cin>>a[i];
    }
    for (int i=0; i<m; i++) //loop on m
    {
        if (a[i]>0)
        {
            for(int j=i+1; j<n; j++)
            {
                moves+=1;
                if (a[j]==0)
                {
                    c+=1;
                }

            }
            for(int i=n-2; i>(n-moves); i--) //the returning back loop //e7tmal = tkon 8lt
            {
                if (a[i]==0)
                {
                    c+=1;
                }
            }
        break;
        }
    }
    cout << c << endl;
    return 0;
}
