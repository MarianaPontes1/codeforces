#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int p;
    cin>>p;
    string s;
    cin>>s;
    int n=0;
    for(int i=0; i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            n++;
        }
    }
    cout<<n<<endl;

}