#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;

   vector<int> v(n);

   for(auto &i:v)
     cin>>i;

   long long cnt=0;
   for(int i=1;i<n;i++)
   {
      cnt+=max(0,v[i-1]-v[i]);
      v[i]=max(v[i],v[i-1]);

   }

   cout<<cnt;
}
int main()
{ 

    solve();
    return 0;

}

