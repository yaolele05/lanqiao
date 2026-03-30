
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],b[100005],ans;
int main()
{
  
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++) cin>>a[i];
   for(int j=1;j<n;j++) b[j]=a[j+1]-a[j];
   sort(b+1,b+n);
   for(int i=1;i<=n-k;i++)
   ans+=b[i];
   cout<<ans;
   
  return 0;
}