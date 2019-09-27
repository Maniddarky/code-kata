#include<bits/stdc++.h>
  using namespace std;
int main()
{
  int n,k,f;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<k;i++)
  {
    f=a[n-1];
    for(int j=n;j>0;j--)
    {
      a[j]=a[j-1];
    }
    a[0]=f;
  }
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}