#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;

void solve()
{
}

int main()
{
  // multiset can hold same value
    multiset<int> ms;
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(1);
 for(auto it:ms)
 {
  cout<<it<<" ";
 }
 cout<<endl;
 // we can erase element by using key;
 auto it=ms.begin(); 
 advance(it,3);
 ms.erase(it);
 for(auto it:ms)
 {
  cout<<it<<" ";
 }
 cout<<endl;
 cout<<ms.count(3)<<endl;// how many times key is available
 auto itt=ms.lower_bound(3);
 for(auto value=itt;value!=ms.end();value++)
 {
    cout<<*it<<" ";
 }
 cout<<endl;
 cout<<*it<<endl;
    return 0;
}