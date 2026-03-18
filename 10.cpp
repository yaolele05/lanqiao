#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> q(n);
  int c=n*(n-1)/2;
  vector<int> sum(n);
  for(int i=0;i<n;i++)
  {
    cin>>q[i];
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      sum[i]+=q[i]*q[j];
    }
  }
  int ans=0;
  for(int i=0;i<n;i++)
  {
    ans+=sum[i];
  }
  cout<<ans;
  return 0;
}