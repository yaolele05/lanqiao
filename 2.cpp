#include <bits/stdc++.h>
using namespace std;
int main()
{
  int res=0;
  for(int i=0;i<50;i++)
  {
    for(int j=i+1;j<50;j++)
    {
      res++;
    }
  }
  int in=0;
  for(int i=0;i<7;i++)
  {
    for(int j=i+1;j<7;j++)
    {
       in++;
    }
  }
  int ans=res-in;
  cout<<ans;
  return 0;
}
