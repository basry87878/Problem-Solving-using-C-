#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],arrc1[n];

    for (int i=0; i<n; i++) //intialize the array
    {
        cin>>arr[i];
        arrc1[i]=1;
    }


    for(int c1=0; c1<n-1; c1++)
    {
        for (int i=c1; i<n-1; i++) //right loop
        {
            if(arr[i]>=arr[i+1])
                {
                    arrc1[c1]++;
                }
            else
                {
                    break;
                }
        }
    }

    for(int c2=n; c2>0; c2--)
    {
        for (int j=c2; j>0; j--) //left loop
        {
            if(arr[j]>=arr[j-1])
                {
                    arrc1[c2]++;
                }
            else
                {
                    break;
                }
        }

    }

    int c=arrc1[0];
    for (int i=0; i<n; i++) //printing
    {
        if (c<arrc1[i])
        {
            c=arrc1[i];
        }
    }
    cout << c <<endl;
    return 0;
}
