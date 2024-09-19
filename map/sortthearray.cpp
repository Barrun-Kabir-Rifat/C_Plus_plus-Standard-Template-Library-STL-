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
  ll arr[n];
  int start=0,end=0;
  int flag=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int ct=0;
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1]&&flag==0)
    {
      start=i;
      flag=1;
    }
    if(i==(n-2))
    {
     if(flag==1&&arr[i]>arr[i+1])
     {
        end=n-1;
        break;
     }
    }
    if(flag==1&&arr[i]<arr[i+1])
    {
        end=i;
        break;
    }
  }
  end++;
    reverse(arr+start,arr+end);
   for(int i=0;i<n-1;i++) 
   {
    if(arr[i]>arr[i+1])
    {
       ct=1; 
    }
   }
   if(ct==0)
   {
    cout<<"yes\n";
    cout<<start+1<<" "<<end<<"\n";
   }
   else
   {
    cout<<"no\n";
   }
   return 0;
}