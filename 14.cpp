#include<iostream>
#include<set>
using namespace std;

int a,b;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    set<int> q;
    cin >> a >> b;
    for(int i = 0;i*a <= a*b;i ++)
        for(int j = 0;j*b + i * a <= a * b;j ++)
            q.insert(a*i + b*j);
    for(int i = a*b;i >= 0;i --)
        if(!q.count(i))
        {
            cout << i << endl;
            break;
        }
    return 0;
}