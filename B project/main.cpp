#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x,y,x2,y2, c=0;
    string str1,str2;

    cin>>x,y;
    cin>>str1>>x2;
    cin>>str1>>y2;

    if (str1==str2 && x==x2 && y=y2)
    {
        c+=1;
    }
    cout << "C=" << c << endl;
    return 0;
}
