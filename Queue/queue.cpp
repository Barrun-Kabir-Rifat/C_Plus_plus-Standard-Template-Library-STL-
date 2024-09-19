#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
 // FIFO>First in first out 
void solve()
{
  queue<int>q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  cout<<"Is deque empty?"<<endl;
if(q.empty())
{
    cout<<"Empty"<<endl;
}
else
{
    cout<<"NOT Empty"<<endl;
}
cout<<"Front value:\n";
cout<<q.front()<<endl;//first value;
cout<<"back value:\n";
cout<<q.back()<<endl;//last element;
cout<<"Pop operation\n";
q.pop();// first value will be removed
cout<<q.front()<<endl;
cout<<"Deque element print:\n";
while(!q.empty())
{
cout<<q.front()<<endl;
q.pop();
}
}
  // functions
  // push(),empty(),size(),front(),back(),pop(),top();
  //swap(),emplace();
int main()
{
  solve();
   return 0;
}