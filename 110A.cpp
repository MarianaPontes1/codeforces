#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string a;
    cin>>a;
    int lucky = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] =='4' || a[i]=='7')
        {
            lucky++;
        }
    }
    if(lucky == 4 || lucky == 7)
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}