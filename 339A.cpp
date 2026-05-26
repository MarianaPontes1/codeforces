#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<int> nums;
    for(auto c:s)
    {
        if(c=='+')
        {
            continue;
        }
        else{
            nums.push_back(c);
        }
    }
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); i++)
    {
        if(i!= nums.size()-1)
        {
            cout<<nums[i] -'0'<<'+';
        }
        else
        {
            cout<<nums[i]-'0';
        }
    }
    cout<<endl;
}