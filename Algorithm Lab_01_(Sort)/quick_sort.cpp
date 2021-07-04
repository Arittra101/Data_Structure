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
int partition(vi &v,lli low,lli high)
{
   lli pivot = v[high];
   lli i = low - 1,j=low;
   while(1)
   {
       if(v[j]<pivot)
       {
           i++;
           swap(v[j],v[i]);
       }

       j++;
       if(j>=high)break;
   }
   swap(v[i+1],v[high]);
   return i+1;

}
void quickSort(vi &v,lli low,lli high)
{
    //swap(v->at(0),v->at(1));
    if(low>=high) return;
    lli p  = partition(v,low,high);
    quickSort(v,low,p-1);
    quickSort(v,p+1,high);
}


void solve()
{

    lli n;
    vi v;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    quickSort(v,0,n-1);
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
