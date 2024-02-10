#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e9+7;

const int N=1e7+10;

void printBinary(int num)
{
     for(int i=10;i>=0;i--)
    {
        cout<<(num>>i & 1);
    }
    cout<<endl;
}


ll binaryitr(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans =(ans * a) % M;
        }
        a =(a* a) % M;
        b >>= 1;
    }
    return ans;
}


int main()
{
int t;
cin>>t;
    while(t--)
    {
        
    }
    return 0;
}