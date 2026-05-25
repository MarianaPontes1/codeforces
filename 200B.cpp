#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    double n;
    cin>>n;
    double sum=0;
    for(double i=0;i<n;i++)
    {
        double a;
        cin>>a;
        sum+=a;
    }
    cout<<setprecision(14)<<sum/n<<endl;
}