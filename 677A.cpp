#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ll n, h;
    cin>>n>>h;
    ll width=0;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>h)
        {
            width +=2;
        }
        else
        {
            width+=1;
        }
    }
    cout<<width<<endl;

}