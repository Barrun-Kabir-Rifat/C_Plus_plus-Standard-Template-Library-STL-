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
  v.pb(1);
  v.pb(2);
  v.pb(3);
  v.pb(4);
  v.pb(5);
 vector<int>::iterator it;
 it=v.begin()+1;
 cout<<*it<<endl;
 for(it=v.begin();it!=v.end();it++)
 {
    cout<<*it<<endl;
 }
   return 0;

}