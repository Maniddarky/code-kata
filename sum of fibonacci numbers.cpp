#include<bits/stdc++.h>
  using namespace std;
int fib(int n)
{
  if(n==0||n==1)
    return 1;
  else
    return(fib(n-2)+fib(n-1));
}
int main()
{
  int n,sum=0;
  cin>>n;
  for(int i=0;i<=n;i++)
  {
    sum+=(fib(i)*a);
}
  cout<<sum;
}
