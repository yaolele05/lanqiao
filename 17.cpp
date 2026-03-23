#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int dp[2];
    dp[0]=0;
    dp[1]=s[0]-96;
    for(int i=1;i<s.size();i++)
    {
        int pre=dp[0];
        dp[0]=max(dp[0],dp[1]);
        dp[1]=pre+s[i]-96;
    }
    cout<<max(dp[0],dp[1]);
    return 0;
}