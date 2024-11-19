#include <bits/stdc++.h>
#define ll long long

using namespace std;



void solve()
{
    ll n;
    cin>>n;

    while(n!=1)
    {
        cout<<n<<" ";
        if(n&1)n=n*3+1;
        else
        n=n>>1;
    }

    cout<<1;
}

int main()
{
    solve();
    return 0;
}