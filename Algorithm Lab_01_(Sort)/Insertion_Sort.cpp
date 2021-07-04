
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

void print(vi v)
{
    for(auto it : v)
    {
        cout<<it<<" ";
    }
}
void solve()
{

  lli n;
  cin>>n;
  vi v;
  for(i=0;i<n;i++)
  {
      lli x;
      cin>>x;
      v.pb(x);
  }
  for(i=1;i<v.size();i++)
  {
    j = i-1;
    lli temp = v[i];
    while(1)
    {
        if(j<0||temp>v[j]) break;
        if(temp<v[j])
        {
            v[j+1] = v[j];
        }
       // j--;
        cout<<j<<endl;
    }
    v[j+1] = temp;

  }
  print(v);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

