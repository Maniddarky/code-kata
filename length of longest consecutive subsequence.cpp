#include<bits/stdc++.h>
using namespace std;
int longsub(int a[],int n)
{
  unordered_set<int> s;
  int ans=0;
  
  for(int i=0;i<n;i++)
    s.insert(a[i]);
  for(int i=0;i<n;i++)
  {
    if(s.find(a[i-1])==s.end())
    {
      int j=a[i];
      while(s.find(j)!=s.end())
        j++;
      
      ans=max(ans,j-a[i]);
    }
  }
  return ans;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<longsub(a,n);
}
    
