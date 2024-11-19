#include <bits/stdc++.h>
using namespace std;

void solve()
{
   string s;
   cin>>s;

   int maxi=0;
   int cnt=1;

   for(int i=1;i<s.length();i++)
   {
      if(s[i]==s[i-1])cnt++;
      else{
        maxi=max(maxi,cnt);
        cnt=1;
      }
   }
    maxi=max(maxi,cnt);

   cout<<maxi;
}

int main()
{
    solve();
    return 0;
}