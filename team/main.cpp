#include <iostream>
#include <cmath>
using namespace std;

//Team
int main()
{
int C=0,n;
cin>>n;
for (int i=0;i<n;i++) // loop n times
{
    int a,b,d;
    cin>>a>>b>>d; //the 3 members
    //if (a+b+d>=2)
    //{
    //    C++;
    //}
    C+=(a+b+d>=2);
}
cout<<C;
}
