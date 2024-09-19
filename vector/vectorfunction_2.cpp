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

v.insert(v.begin()+1,7);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

v.insert(v.begin()+1,3,6);//insert three 6 in the index 1;
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

}