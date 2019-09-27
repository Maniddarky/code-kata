#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,f,i=0,a[1000000];
cin>>n;

  while(n)
  {
    a[i]=n%10;
    i++;
    n/=10;
  }
  f=a[i-1];
  //cout<<f;
  sort(a,a+(i+1));
  if(f==a[i])
    cout<<"impossible";
  else
    for(int j=i;j>0;j--)
    cout<<a[j];
}
    
    
    