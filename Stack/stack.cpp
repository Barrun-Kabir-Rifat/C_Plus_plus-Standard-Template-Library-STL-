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
  stack<int>st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
 cout<<st.top()<<endl;  //last entered element
 st.pop();  //delete last entered element
 cout<<st.top()<<endl; //previous element will be printed
   while(!st.empty())
   {
    cout<<st.top()<<"\n";
    st.pop();
   }
   return 0;
}