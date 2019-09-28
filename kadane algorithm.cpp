#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  
  int max=INT_MIN,sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
    
    if(max<sum)
    max=sum;
    if(sum<0)
    sum=0;
  }
  cout<<max;
}
    
  