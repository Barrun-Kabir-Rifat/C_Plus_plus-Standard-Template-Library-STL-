#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
int primecheck(ll n)
{
    if(n==2)
    {
        return 1;
    }
   if(n<2)
   {
    return 0;
   }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
           return 0;
        }
    }
    return 1;
    
}

int main()
{
  int t;
  cin>>t;
  ll first,second,third;
  while(t--)
  {
    ll n;
    cin>>n;
    if(n<24)
    {
        cout<<"NO"<<"\n";
    }
   else if(primecheck(n))
   {
    cout<<"NO"<<"\n";
   }
   else
   {
    if(n%2==0)
    {
      first=2;
      ll rest=n/2;
      ll temp=sqrt(rest);
      if(primecheck(rest))
      {
        cout<<"NO"<<"\n";
      }
      else if(rest==(temp*temp))
      {
        cout<<"NO"<<"\n";
      }
      else
      {
        int ct=0;
      for(int i=3;i<=16;i++)
      {
          if((rest)%i==0)
          {
            second=i;
            third=(rest)/i;
            ct=1;
            break;
          }
      }
      if(ct==1)
      {
        
         cout<<"YES"<<"\n";
        cout<<first<<" "<<second<<" "<<third<<"\n";
      }
      else
      {
        cout<<"NO"<<"\n";
      }
      }
    }
    else
    {
     ll temp=sqrt(n/3);
      if(n%3==0)  
      {
        first=3;
      }
      else 
      {
        cout<<"NO"<<endl;
        continue;
      }
      if(primecheck(n/3))
      {
        cout<<"NO"<<"\n";
      }
      else if((n/3)==(temp*temp))
      {
        cout<<"NO"<<"\n";
      }
      else
      {
        int ct=0;
      for(int i=5;i<=20;i++)
      {
          if((n/3)%i==0)
          {
            second=i;
            third=(n/3)/i;
            ct=1;
            break;
          }
      }
      if(ct==0)
      {
        cout<<"NO"<<"\n";
      }
      else
      {
        cout<<"YES"<<"\n";
        cout<<first<<" "<<second<<" "<<third<<"\n";
      }
    }
   }
  }
  }
   return 0;
}