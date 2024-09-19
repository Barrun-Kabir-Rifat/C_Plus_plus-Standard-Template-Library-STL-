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
  set<int>s={1,2,3,4,5,6};
  for(auto it: s)
  {
    cout<<it<<" ";
  }
  cout<<endl;
  set<int>:: iterator it;
  it=s.lower_bound(3);
  if(it==s.end())
  {
    cout<<"The element is larger to the greater element"<<endl;
  }
  else
  {
    cout<<"the lower bound of 3 is:"<<*it<<endl;
  }
  auto itt=s.upper_bound(3);
  if(itt==s.end())
  {
    cout<<"The element is larger to the greater element"<<endl;
  }
  else
  {
    cout<<"the upper bound of 3 is:"<<*itt<<endl;
  }
  //upperbound always point next greater element;
  cout<<*(s.begin());
   return 0;
}