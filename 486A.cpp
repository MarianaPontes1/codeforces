#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n%2==1)
    {
        cout<<-1*(n+1)/2<<endl;
    }
    else
    {
        cout<<n/2<<endl;
    }
}