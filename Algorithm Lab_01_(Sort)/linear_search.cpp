
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


void solve()
{

  vi v;
  lli n,found,check=0;
  cin>>n>>found;
  for(i=0;i<n;i++)
  {
      lli x;
      cin>>x;
      v.pb(x);
  }
  for(i=0;i<v.size();i++)
  {
     if(found==v[i])
     {
         check=1;
         break;
     }
  }
  if(check==1) cout<<"Found"<<endl;
  else cout<<"Not found"<<endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

