#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    vector<vector<int>> matriz(5, vector<int>(5));
    int l, c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                l = i;
                c = j;
            }
        }
    }
    int count = 0;
    if(l > 2)
    {
        count+= l-2;
    }
    else if(l<2)
    {
        count+=2-l;
    }
    if(c > 2)
    {
        count+= c-2;
    }
    else if(c<2)
    {
        count+=2-c;
    }
    cout<<count<<endl;
}