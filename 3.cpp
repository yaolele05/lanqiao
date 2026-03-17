#include <bits/stdc++.h>
using namespace std;
int summ(int x,int n)
{
    int sum=0;
    while(x)
    {
        sum+=x%n;
        x=x/n;
    }
    return sum;
}
int main()
{
    int count=0;
    for(int i=1;i<=2024;i++)
     {
        if(summ(i,2)==summ(i,4))
        {
           count++;
        }
     }
     cout<<count<<endl;
    return 0;
}