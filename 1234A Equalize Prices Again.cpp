//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
        scl(t);
    while(t--)
    {

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];
      fr(i,n)cin>>a[i], ans+=a[i];

      cnt=ans/n;

      if(ans%n )cnt++;
      pfl(cnt);
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

