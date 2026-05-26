#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll c;
    cin>>c;
    ll menor_c=1e18;
    ll maior_c=0;
    while(c--)
    {
        ll a, b;
        cin>>a>>b;
        if(b<menor_c)
        {
            menor_c=b;
        }
        if(a>maior_c)
        {
            maior_c=a;
        } 
    }
    ll p;
    cin>>p;
    ll menor_p=1e18;
    ll maior_p=0;
    while(p--)
    {
       ll a, b;
        cin>>a>>b;
       if(b<menor_p)
        {
            menor_p=b;
        }
        if(a>maior_p)
        {
            maior_p=a;
        } 
    }
    ll max=0;
    if(menor_c<maior_p)
    {
        if(maior_p-menor_c>max)
        {
            max = maior_p-menor_c;
        }
    }
    if(menor_p<maior_c)
    {
        if(maior_c-menor_p>max)
        {
            max = maior_c-menor_p;
        }
    }
    cout<<max<<endl;
}