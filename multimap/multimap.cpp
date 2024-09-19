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
    mp.erase(3); 
    //mp.erase(key)
    //it will delete all the pair with key 1;
    //we can erase element using iterator;
     auto it=mp.begin();
     advance(it,2);//it will advance the iterator
     mp.erase(it);
   // mp.erase(mp.begin());
  if(mp.empty())
  {
    cout<<"empty"<<endl;
  }
  else
  {
    cout<<"Not empty"<<endl;
  }
   for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
   return 0;
}