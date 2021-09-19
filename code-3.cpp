#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{  ll n,i,j,l,sum=0,subarr=0,tar,k;
	  cin>>n>>tar;
	  ll a[n];
	  for(i=0;i<n;i++)
	  	cin>>a[i];
	  map<long long int , long long int > m;
	  m.insert({0,1});
	  for(i=0;i<n;i++)
	  {  sum+=a[i];
	  	 m[sum]++;
	  	 k=sum-tar;
	  	 auto it=m.find(k);
	  	 if(it!=m.end())
	  	 {  subarr+=(*it).second;

	  	 }


	  }
	  cout<<subarr<<endl;




}
