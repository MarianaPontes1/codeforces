#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin>>n;

    int total=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0] == 'I')
        {
            total+=20;
        }
        else if(s[0] == 'D')
        {
            total+=12;
        }
        else if(s[0] == 'O')
        {
            total+=8;
        }
        else if(s[0] == 'C')
        {
            total+=6;
        }
        else if(s[0] == 'T')
        {
            total+=4;
        }
    }
    cout<<total<<endl;
}