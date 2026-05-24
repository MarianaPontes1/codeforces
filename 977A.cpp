#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll subtractone(ll n)
{
    if(n%10==0)
    {
        n=n/10;
    }
    else
    {
        n--;
    }
    return n;
}

int main()
{
    ll n, times;
    cin>>n>>times;

    
    for(int i = 0; i<times; i++)
    {
        n = subtractone(n);
    }
    cout<<n<<endl;
}