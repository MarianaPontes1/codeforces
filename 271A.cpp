#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a;
    cin>>a;
    string as;
    while(true)
    {
        a++;
        as = to_string(a);

        if(as[0]!= as[1] && as[0] != as[2]
        && as[0] != as[3] && as[1] != as[2]
        && as[1] != as[3] && as[2] != as[3])
        {
            break;
        }
    }
    cout<<as<<endl;
}
