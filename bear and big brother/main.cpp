#include <iostream>
#include <cmath>
using namespace std;

//14 Bear and Big Brother
int main()
{

    int a,b;
    int counter=0;
    cin>>a>>b;
    while (a<=b)
    {
        a=3*a;
        b=2*b;
        counter++;
    }
    cout << counter  << endl;
}
