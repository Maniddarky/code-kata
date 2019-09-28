#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000]={0},count=0,dig;
  cin>>n;
  while(n){
    dig=n%10;
    a[dig]++;
    n/=10;
  }
  for(int i=0;i<1000;i++)
  {
    if(a[i]>0)
      count++;
  }
  if(count==2)
    cout<<"Saturated";
  else
    cout<<"Unsaturated";
}
    
    
