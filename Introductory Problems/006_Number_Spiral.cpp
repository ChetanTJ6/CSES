#include <bits/stdc++.h>
using namespace std;
#define ll long long unsigned

void solve()
{
   ll x,y;
   cin>>x>>y;

   ll g=max(x,y);

   // sum

   ll sum=g*g;

   ll an=g*2-1;
   ll k=min(x,y);
   
   if(g&1)
   {
    
    if(y==k)
    {
      cout<<max(sum-(an-k)-1,1llu);
    }
    else
    {
        cout<<sum-k+1;
    }
   }
   else
   {
      if(y==k)cout<<sum-k+1;
      else
      cout<<sum-(an-k)-1;
   }

   cout<<endl;


}

int main()
{
    int tt;
    cin>>tt;

    while(tt--)solve();

    return 0;
}