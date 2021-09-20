#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
int MOD = 1e9 + 7;
 
int main() 
{   ll n,i,tar,j;
   cin>>n;
   ll dp[n+1]={0};
     dp[0]=1;
     int a[6]={1,2,3,4,5,6};
     for(i=0;i<n+1;i++)
     {    tar=i;
        for(j=0;j<6;j++) 
        {  if(a[j]<=tar)
            dp[i]= ((dp[i]%MOD) + (dp[i - a[j]] %MOD) % MOD);
            else
            break;
            
        }
         
         
     }
     cout<<dp[n]%MOD<<endl;
   
}
