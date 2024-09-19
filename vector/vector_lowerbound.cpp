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
  int n;
  cin>>n;
  vector<long long>v;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.pb(x);
  }
  int q;
  cin>>q;
  int a;
  int it={0};
  while(q--)
  {
    cin>>a;
  it=lower_bound(v.begin(), v.end(), a)-v.begin();
  //lower bound point the element index,if it is available in the vector
  //if it is not available,it points next element of the vector
     if(v[it]==a)
     {
        cout<<"Yes "<<it+1<<endl;
     }
     else
     {
        cout<<"No "<<it+1<<endl;
     }

  }
   return 0;
}