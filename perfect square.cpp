#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
  int s=max(m,n);
  for(int i=1;i<=m;i++)
  {
    if((m*n)==(i*i)){
      cout<<"yes";
    return 0;
    }
  }
  cout<<"no";
}