#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    set<char> st;
    for(int i=1; i<s.size(); i+=3)
    {
        st.insert(s[i]);
    }
    if(s.size()<=2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<st.size()<<endl;
}