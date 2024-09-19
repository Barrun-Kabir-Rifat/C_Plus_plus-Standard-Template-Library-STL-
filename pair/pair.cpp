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
  pair<int,int>p(10,15);
 // p=make_pair(2,3);
  pair<int,int>p2(p);//pair copy
  pair<int,int>p3(10,55);
  p.swap(p3);//swap value of two pair
  cout<<p.first<<" "<<p.second<<endl;
  cout<<p2.first<<" "<<p2.second<<endl;
  cout<<p3.first<<" "<<p3.second<<endl;
  if(p==p2)
  {
    cout<<"YES equal"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  if(p>=p2)
  {
    cout<<"Getter than"<<endl;
  }
  else
  {
    cout<<"Less than"<<endl;
  }
   return 0;
}