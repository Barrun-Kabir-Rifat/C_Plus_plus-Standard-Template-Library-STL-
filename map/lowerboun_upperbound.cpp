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

   mp[1]=10;
   mp[2]=20;
   mp[3]=30;

   mp[4]=40;
   mp[5]=50;
  auto it=mp.lower_bound(1);//mp.lower_bound(key);

  //it will point the given key .
  //if the given key is not available in the map,the iterator will point next greater key.
  //if given key is most greater and not available in the map ,it will point mp.end() pair

  cout<<(*it).first<<" "<<(*it).second<<endl;
  auto itt=mp.upper_bound(1);
  //it will  always point the next greater key.
  //if it is most greater,then it will point mp.end() key
  cout<<(*itt).first<<" "<<(*itt).second<<endl;
   return 0;
}