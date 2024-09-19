#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
  
int main()
{
    int x,y;
  vector<pair<int,int>>v(5,{5,5});
  for(int i=0;i<5;i++)
  {
    cin>>x>>y;
    v.pb({x,y});
  }
  sort(v.begin(),v.end());
   sort(v.begin(),v.end(),sortbysec);
   for(int i=0;i<v.size();i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
   return 0;
}