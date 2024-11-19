#include <bits/stdc++.h>
using namespace std;

void solve()
{
   
   int n;
   cin>>n;

   if(n==2 || n==3) cout<<"NO SOLUTION";
   else
   {
      if(n&1)
      cout<<n/2+1<<" ";

      int low=1,high=(n+1)/2 +1;

      while(high<=n)
      {
        if((n&1)==0)
        cout<<high<<" "<<low<<" ";
        else
        cout<<low<<" "<<high<<" ";
        
        low++;
        high++;
      }
   }
  
}

int main()
{
    solve();
    return 0;
}