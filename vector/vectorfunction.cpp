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
  vector<int>v;
  v.pb(3);
  v.pb(4);
  v.pb(3);
  v.pb(4);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;
v.clear();
cout<<v.size()<<endl;
if(v.empty())
{
    cout<<"empty"<<endl;
}
 v.pb(3);
  v.pb(4);
  v.pb(3);
  v.pb(4);
v.erase(v.begin()+1);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
v.pb(3);
  v.pb(4);
  v.pb(3);
  v.pb(4);
  v.pb(4);
  v.pb(3);
  v.pb(4);
v.erase(v.begin()+1,v.end()-1);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
   return 0;
}