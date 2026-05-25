#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    ll a=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(a<d)
    {
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}