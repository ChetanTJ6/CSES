#include <bits/stdc++.h>
using namespace std;


// the ans will be in the question itself 
void solve()
{
    int n;
    cin>>n;

    int x=0;
    int t=0;

    for(int i=1;i<=n;i++)x^=i;

    for(int i=0;i<n-1;i++)
    {
        cin>>t;
        x^=t;

    }

    cout<<x;


}

int main()
{
    solve();
    return 0;

}

