#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;

    vector<char> bc;
    for (auto c : b)
    {
        bc.push_back(c);
    }
    reverse(bc.begin(), bc.end());
    b = "";
    for(auto c : bc)
    {
        b += (char)c;
    }
    if(a == b )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}