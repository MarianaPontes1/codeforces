#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string a;
    string b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        if(tolower(a[i]) == tolower(b[i]))
        {
            continue;
        }
        if(tolower(a[i]) < tolower(b[i]))
        {
            ans =-1;
            break;
        }
        else if(tolower(a[i]) > tolower(b[i]))
        {
            ans =1;
            break;
        }
    }
    cout<<ans<<endl;
}