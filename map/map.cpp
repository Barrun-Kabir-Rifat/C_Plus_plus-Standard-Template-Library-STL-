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
//   map<char,int>mp;
//   mp.insert({'a',3});
//   mp.insert({'b',1});
//   mp.insert({'c',2});
//   mp.insert({'d',5});
//   cout<<mp.at('a');
   map<int,int>mp;
  mp.insert({1,30});
  mp.insert({2,10});
  mp.insert({3,20});
  mp.insert({4,50});
  mp[2]=100;//mp.insert({2,100});
  cout<<mp.at(2)<<endl;
  //cout<<mp[2]<<endl;
  map<int,int>::iterator it;
  for( it=mp.begin();it!=mp.end();it++)
  {
    cout<<it->first<<" "<<it->second<<endl;
  }
//   for(auto it: mp)
//   {
//     cout<<it.first<<" "<<it.second<<endl;
//   }
cout<<mp.size()<<endl;
   return 0;
}