#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;

    vector<int> arr;
    for(int i=0;i<d;i++)
    {
        arr.push_back(i+1);
    }

    ll damaged=0;
    for(auto num : arr)
    {
        if(num%k == 0 || num%l==0 || 
        num%m==0 || num%n==0)
        {
            damaged++;
        }
    }
    cout<<damaged<<endl;
    
}