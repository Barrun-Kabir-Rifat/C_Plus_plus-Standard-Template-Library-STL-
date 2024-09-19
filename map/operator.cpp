#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
   map<int,int>mp,mp1;
    mp[1]=10;
   mp[2]=20;
   mp[3]=30;
   mp[4]=40;
   mp[5]=50;
   mp1=mp;
   for(auto it:mp1)
   {
    cout<<it.first<<" "<<it.second<<endl;
   }
   return 0;
}