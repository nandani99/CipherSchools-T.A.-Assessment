#include <bits/stdc++.h>
using namespace std;
const long long int MOD = 998244353;
const long long int INF = 1e18;
#define pb push_back
#define ff first
#define ss second
#define f(i, a, b) for (long long int i = a; i < b; i++)
#define ll long long int
#define srt(a) sort(a.begin(), a.end())
#define srtc(a, c) sort(a.begin(), a.end(), c);
#define fi(i, a, b) for (long long int i = a; i >= b; i--)
#define vectori vector<long long int>
#define vectorc vector<char>
#define ma(v) max_element(v.begin(), v.end())
#define mi(v) min_element(v.begin(), v.end())
#define rev(s) reverse(s.begin(), s.end())
#define up(v, x) upper_bound(v.begin(), v.end(), x)
#define lo(v, x) lower_bound(v.begin(), v.end(), x)
#define endl "\n"


//////////////////////////////////////////////////////////

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    f(i,0,n){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll q;
    cin>>q;
    f(i,0,q){
        ll x,y;
        cin>>x>>y;
        ll z=upper_bound(arr.begin(), arr.end(), x)- arr.begin();
        if(z==y){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}