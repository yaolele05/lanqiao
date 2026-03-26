#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int count=0;
  for(int i=1;i<n-1;i++)
  {
    int f=0,k=0;
    for(int j=0;j<n;j++)
    {
      if((a[j]<a[i]&&j<i))
      {
        f=1;
      }
      if((a[j]>a[i]&&j>i))
      k=1;
    }
    if(f&&k)
    count++;

  }
  cout<<count;
  return 0;
}