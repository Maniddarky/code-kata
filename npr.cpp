#include <iostream>
using namespace std;
int fact(int n)
{
  if(n<=1)
    return 1;
  else return n*fact(n-1);
}
int npr(int n,int r)
{
  return fact(n)/fact(n-r); 
}
int main() {
    int n,r;
  cin>>n>>r;
  cout<<npr(n,r);
}