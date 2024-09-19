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
    //swap funnction swap two vector
  vector<int>v;
  v.pb(1);
  v.pb(2);
  v.pb(3);
  v.pb(4);
  v.pb(5);
  v.insert(v.begin()+2,3,33);
  cout<<v.at(2)<<endl;
  vector<int>v1;
  v1.pb(10);
  v1.pb(20);
  v1.pb(30);
  v1.pb(40);
  v1.pb(50);
  swap(v,v1);
  cout<<v1.at(3)<<endl;
   return 0;

}