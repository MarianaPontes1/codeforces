#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll rooms=0;
    while(n--)
    {
        ll a, b;
        cin>>a>>b;
        if(b-a>=2)
        {
            rooms++;
        }
    }
    cout<<rooms<<endl;
}