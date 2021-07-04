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

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res (n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;

void marge(vi &v,lli mid,lli left,lli right)
{
    vi left_vector;
    vi right_vector;

   for(i=left;i<(mid-left);i++)
     left_vector.pb(v[i]);
   for(i=mid+1;i<(right-mid);i++)
     right_vector.pb(v[i]);
     lli l_v=0,r_v=0,main_v=left;
    while(l_v<left_vector.size()&&r_v<right_vector.size())
    {

        if(left_vector[l_v]<right_vector[r_v])
        {

            v[main_v] = left_vector[l_v];
            l_v++;
            main_v++;

        }
        else{
            v[main_v]=right_vector[r_v];
            r_v++;
            main_v++;
        }
    }
    main_v--;
    while(1)
    {
        if(l_v>=left_vector.size()) break;
        v[main_v] = left_vector[l_v];
        l_v++;
        main_v++;
    }
    while(1)
    {
        if(r_v>=right_vector.size()) break;
        v[main_v] = right_vector[r_v];
        r_v++;
        main_v++;
    }
}

void marge_sort(vi &v,lli left,lli right)
{
    if(left>=right)
        return;
    lli mid  = (left+right)/2;
    marge_sort(v,left,mid);
    marge_sort(v,mid+1,right);

    marge(v,mid,left,right);

}


void solve()
{

  vi v;
  lli n;
  cin>>n;
  for(i=0;i<n;i++)
  {
      lli x;
      cin>>x;
      v.pb(x);
  }
  marge_sort(v,0,n-1);

  for(auto it : v)
    cout<<it<<" ";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
