#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int num =0;
    vector<int> a(n);
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    int score = a[k-1];
    for(int i=0; i<n;i++)
    {
        if(a[i] >= score && a[i]>0)
        {
            num++;
        }
    }
    cout<<num<<endl;
    
}