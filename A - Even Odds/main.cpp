#include <iostream>

using namespace std;

int main()
{
    int n,p,middle;

    cin>>n;
    cin>>p;
    char arr[n],arr2[n];
    middle=((0.5*n)-1);
    for (int i=n-1; i>=0; i--) //arranging the array
    {
        arr[i]=n;
        n--;
    }
    for (int j=1; j<=n; j++) //odds then evens
    {
        if (j%2==0) //if even?
        {
            arr2[middle]==arr[j-1];
            middle++;
        }
        else
        {
            arr2[j]==arr[j-1];
        }
    }



    cout <<arr<< endl;
    cout <<arr2<< endl;
    cout << arr2[p-1]<< endl;
    return 0;
}
