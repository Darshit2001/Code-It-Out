#include<bits/stdc++.h>
using namespace std;


int main()
{  int n,i,j,s,l,r,cur=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    l=0;
    r=n-1;
    vector<char> v;
    if(a[l]<a[r])
    {  v.push_back('L');
        cur=a[l];
        l++;
    }
    else
    {   v.push_back('R');
         cur=a[r];
         r--;
    }
// cout<<cur<<" ";
    while(1)
    {   if(a[l]>cur && a[r]>cur)
          {    if(a[l]<a[r])
                {  v.push_back('L');
                  cur=a[l];
                  l++;
                //   cout<<cur<<" ";
                }
               else
              {   v.push_back('R');
                 cur=a[r];
                r--;
                // cout<<cur<<" ";
              }


          }
          else if(a[l]>cur && a[r]<cur) 
          {      v.push_back('L');
                  cur=a[l];
                  l++;
                 //  cout<<cur<<" ";

          }
          else if(a[l]<cur && a[r]>cur)
          {       v.push_back('R');
                 cur=a[r];
                 // cout<<cur<<" ";
                   r--;

          }
          else if(a[l]<cur && a[r]<cur)
          {  
              break;

          }
          else if(l==r)
          {  if(a[l]>cur)
            {   cout<<a[l]<<endl;
                v.push_back('R');
              break;

            }
            else
              {  break; }

          }
          else
          break;

    }
   // cout<<"\n"<<l<<" "<<r<<endl;
    cout<<v.size()<<endl;
    for(auto va:v)
    cout<<va;






}
