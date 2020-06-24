#include <iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int x=1;

	for(int i=0;i<str.size();i++)
    {
	    if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B')
	    {
	        i+=2;
	        if(!x)
            {
	            cout<<" ";
	        }
	        continue;
	    }
        else
            {
                x=0;
                cout<<str[i];
            }
	}
	return 0;
}
