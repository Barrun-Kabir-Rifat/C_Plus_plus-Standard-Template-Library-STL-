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
   multimap<int,int>mp;
    //multimap can store same key;
    mp.insert({1,10});
    mp.insert({1,10});
    mp.insert({3,10});
    mp.insert({4,20});
    mp.insert({1,10});
    mp.insert({1,20});
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
   auto it=mp.begin();
    cout<<mp.count(1)<<endl;
    //mp.count(key) will show ,how many times the given key is available
    auto it= mp.find(10);
    if(it!=mp.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
   return 0;
}