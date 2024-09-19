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
  for(int i=0;i<10;i++)
  {
    v.pb(i);
  }
  sort(v.rbegin(),v.rend());//sort in decending order
  for(auto it:v)
  {
   cout<<it<<" ";
  }
  cout<<endl;
  v.erase(v.begin()+1);//remove an element from index 1
  for(auto it:v)
  {
   cout<<it<<" ";
  }
  cout<<endl;
  cout<<v.size()<<endl;
   v.insert(v.begin()+2,5,0);//inser five 0 in the index 2;

  for(auto it:v)
  {
   cout<<it<<" ";
  }
  cout<<endl;
  cout<<v.size()<<endl;
  v.assign(3,5);//the length of the vector is 3 and all the elements are 5;
  v.emplace_back(2);//it will assign 2 in the back;
  for(auto it:v)
  {
   cout<<it<<" ";
  }
  cout<<endl;
  cout<<v.front()<<endl;//first value in the vector;
  cout<<v.back()<<endl;//last value in the vector;
   return 0;
}