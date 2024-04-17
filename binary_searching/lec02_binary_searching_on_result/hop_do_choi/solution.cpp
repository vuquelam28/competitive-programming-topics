#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int n;ll sum;
bool check(ll mid)
{
    if(mid*(n-1)<sum) return false;
    else return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll max1=0;
        sum=0;
        for(int i=1 ; i<=n ; i++)
        {
            ll x;
            cin>>x;
            sum+=x;
            max1=max(max1,x);
        }
        ll l=max1,r=2e9;
        while(l<r)
        {
            ll mid=(l+r)>>1;
            if(check(mid)) r=mid;
            else l=mid+1;
        }
        cout<<ll((n-1)*l-sum)<<endl;
    }
}