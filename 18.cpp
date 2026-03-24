#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> mm(n,vector<char>(6));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        cin>>mm[i][j];
        }
    }
 int sum=0;
 for(int i=1;i<n-1;i++)
 {
  for(int j=1;j<m-1;j++)
  {
    int b=1;
    if(mm[i][j]==mm[i-b][j-b]&&mm[i][j]==mm[i+b][j+b]&&mm[i][j]==mm[i-b][j+b]&&mm[i][j]==mm[i+b][j-b])
    sum++;
    b++;
  }
 }
 cout<<sum<<endl;
    return 0;
}