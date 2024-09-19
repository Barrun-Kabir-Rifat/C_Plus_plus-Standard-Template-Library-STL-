#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
ull fact(ull n)
{
    ull fact=1;
  for(ll i=0;i<n;i++)
  {
    fact=fact*i;
  }
  return fact;
}
  
int main()
{
  ull m,n;
  cin>>n>>m;
  ull temp=n;
  n=(n-m)+1;
  ull mx=(n*(n-1))/2;
 ull rem=(temp%m);
temp=temp/m;
ull mn=0;
if(rem!=0)
{
temp++;
  mn=(temp*(temp-1))/2;
  mn=mn*rem;
  temp--;
}
  
 ull mn1=((temp*(temp-1))/2);
 mn1=mn1*(m-rem);
 mn=mn+mn1;
 cout<<mn<<" "<<mx<<endl;

   return 0;
}