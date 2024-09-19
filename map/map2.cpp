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
  map<int,string>mp;
  mp.insert({1,"Rifat"});
  mp.insert({2,"Rit"});
  mp.insert({3,"Riat"});
 mp.insert({4,"Rifat"});
  mp.insert({5,"Rifat"});
   mp[6]="abid";
   mp[6]="aa";
cout<<mp.size()<<endl;
for(auto it:mp)
{
    cout<<it.first<<" "<<it.second<<endl;
}
   return 0;
}