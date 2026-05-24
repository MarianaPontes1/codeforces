#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string a;
    cin>>a;
    int lower=0, upper=0;
    for(int i=0; i<a.size(); i++)
    {
        if(islower(a[i]))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if(lower>=upper)
    {
        for(int i=0; i<a.size(); i++)
        {
            cout<<(char)tolower(a[i]);
        }
        cout<<endl;
    }
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            cout<<(char)toupper(a[i]);
        }
        cout<<endl;
    }
}