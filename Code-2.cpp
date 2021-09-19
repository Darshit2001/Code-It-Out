#include<bits/stdc++.h>
using namespace std;
struct name{
   long long int x,y;
} ;
 
bool comp(name p1,name p2)
{  return p1.x<p2.x;
    
}
 
int main()
{ long long  int n,i,j,sum=0;
   cin>>n;
   name a[n];
   for(i=0;i<n;i++)
   cin>>a[i].x>>a[i].y;
   sort(a,a+n,comp);
  long long int f=0;
   for(i=0;i<n;i++)
   {  int du=a[i].x;
      int d=a[i].y;
      f=f+du;
      sum=sum+(d-f);
       
       
       
   }
   cout<<sum<<endl;
   
 
 
 
 
}
