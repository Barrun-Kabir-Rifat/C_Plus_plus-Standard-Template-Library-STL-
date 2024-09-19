#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
void solve()
{
}
int main()
{
   //set usually store elements in ascending order
    set<int>s;
    /*if we want to arrange element in decending order,
    then,we need to declare set like: set<int,greater<int>>s;*/
    s.insert(10);
    s.insert(15);
    s.insert(13);
    s.insert(10);
    s.insert(16);
    s.insert(17);
    cout<<s.size()<<endl;
   //  for(auto it:s)
   //  {
   //    cout<<it<<" ";
   //  }
   set<int>::iterator it;
   for(it=s.begin();it!=s.end();it++)
   {
      cout<<*it<<" ";
   }
    cout<<endl;
    s.erase(15);
     it=s.begin();
    advance(it,2);
    s.erase(it);
     for( auto it:s)
     {
       cout<<it<<" ";
     }
     cout<<endl;
   //  s.erase(s.begin());//erase the smallest element
   //  cout<<s.count(10)<<endl;
   cout<<s.count(20)<<endl;
   //   cout<<*s.begin()<<endl;
//if element stays in the set,count gives 1,otherwise 
auto itt=s.find(16);
if(itt!=s.end())
{
   cout<<"Found "<<endl;
}
else
{
   cout<<"NOt found "<<endl;
}
   return 0;
}