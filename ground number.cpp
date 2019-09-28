#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,count=-1;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  
  sort(a,a+n);
  for(int i=0;i<n;i++)
  {
   if(a[i]>k){
     count=i-1;
    break;}
  }
  cout<<count;
}