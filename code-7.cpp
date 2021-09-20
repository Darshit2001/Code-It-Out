#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int MOD = 1e9 + 7;

int main() 
{   int n,k,i,j,p,cur,val;
     cin>>n>>k;
     int a[n+1];
     a[0]=0;
     for(i=1;i<n+1;i++)
        cin>>a[i];
     int  dp[n+1][k+1];

     for(i=0;i<n+1;i++)
     {  for(j=0;j<k+1;j++)
        {  if(i==0 || j==0)
            dp[i][j]=0;
            else
            {  val= dp[i-1][j];
                dp[i][j]=dp[i-1][j];
               if(j>=a[i])
               {  p=j-a[i];

                  if(p==0)
                  {  dp[i][j]=1;
                   continue;
                  }
                  if(dp[i][p]!=0)
                  {  cur=1 + dp[i][p];
                      if(val!=0)
                     dp[i][j]=min(cur , val);
                     else
                      dp[i][j]=cur;

                  }

               }

            }
        }
      }

      if(dp[n][k]!=0)
        cout<<dp[n][k]<<endl;
      else
        cout<<"-1"<<endl;


   
}
