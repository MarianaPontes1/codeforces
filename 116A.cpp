#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    int total=0;
    int max_val=0;
    while(n--)
    {
        int s, e;
        cin>>s>>e;

        total = total - s + e;

        if(total>max_val)
        {
            max_val = total;
        }
    }
    cout<<max_val<<endl;
}