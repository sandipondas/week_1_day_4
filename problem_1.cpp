#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n,m;
   cin>>n>>m;
   vector<ll>v,v1(n),v2(m);
   for(int i=0; i<n; i++)
   {
      cin>>v1[i];
   }
   for(int i=0; i<m; i++)
   {
      cin>>v2[i];
   }
   int l=0,r=0;
   //int x=max(n,m);
   while(l<n && r<m)
   {
      int curl=v1[l];
      while(curl>=v2[r] && r<m)
      {
         cout<<v2[r]<<" ";
         r++;
      }
      if(r==m && l<n)
      {
         while(l<n)
         {
            cout<<v1[l]<<" ";
            l++;
         }

      }
      int curr=v2[r];
      while(curr>=v1[l] && l<n)
      {
         cout<<v1[l]<<" ";
         l++;
      }
      if(l==n && r<m)
      {
         while(r<m)
         {
            cout<<v2[r]<<" ";
            r++;
         }

      }
   }
   
   return 0;
}