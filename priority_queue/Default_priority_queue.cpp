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
  //it keeps element in descending order.
  //default
  priority_queue<int>pq;
  pq.push(1);
  pq.push(5);
  pq.push(3);
  pq.push(12);
  pq.push(0);
  while(!pq.empty())
  {
    cout<<pq.top()<<endl;
    pq.pop();
  }
  
   return 0;
}