
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;


void solve()
{
    lli n,find;
    cin>>n>>find;
    vi v;
    for(i=0; i<n; i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    lli f=0,l=n-1;
    while(1)
    {
        lli mid = (f+l)/2;
        if(v[mid]==find)
        {
            cout<<"Found"<<endl;
            break;
        }
        if(mid==0||mid==(n-1))
        {
            cout<<"Not found"<<endl;
            break;
        }
        else if(find<v[mid])
            l = mid-1;

        else if(find>v[mid])
            f = mid+1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

