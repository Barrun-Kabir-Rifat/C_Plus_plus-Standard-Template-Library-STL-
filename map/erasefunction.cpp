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
   map<int,int>mp;
  mp.insert({1,30});
  mp.insert({2,10});
  mp.insert({3,20});
  mp.insert({4,50});
  mp.insert({2,10});

  mp.erase(1);//it will erase key pair.here key 1 will be delete.
 //mp.erase(key)

  int cnt=mp.count(1);//mp.count(key);
   int cnt1=mp.count(2);//it will say ,whether the key is available or not;
  for(auto it: mp)
   {
     cout<<it.first<<" "<<it.second<<endl;
   }
   cout<<cnt<< " "<<cnt1<<endl;
   auto it =mp.find(4);//mp.find(key);
   if(it!=mp.end())
   {
    cout<<"find"<<endl;
   }
   else
   {
    cout<<"Not find"<<endl;
   }
   return 0;
}