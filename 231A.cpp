#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll sure=0;
    for(int i=0; i<n;i++)
    {
        int count = 0;
        for(int j=0; j<3;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                count++;
            }
            if(count==2)
            {
                count = 0;
                sure++;
            }
        }
    }
    cout<<sure<<endl;
}