#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sum(ll n)
{
    ll s=0;
    for(int i=1; i<=n;i++)
    {
        s+=i;
    }
    return s;
}

int main()
{
    ll k, n, w;
    cin>>k>>n>>w;
    cout<<(n<k*sum(w) ? k*sum(w)-n : 0)<<endl;

}