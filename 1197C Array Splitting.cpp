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
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define N 100006

int main()
{
    ll m,n,t,b,c,a,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(k);

      vector<ll>v;
      cin>>a;
      fr1(i,n-1)cin>>b, v.pb( b-a ),a=b  ;

      vasort(v);
      for(i=v.size()-k; i>=0;i--)
      {
          ans+=v[i];
      }

      pfl(ans);

return 0;
}


