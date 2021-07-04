#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define en cout << endl;
void solve()
{
    //  cout << "F";
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];


    for (int i = 0; i < n; i++){
        int temp = a[i],index=i,temp2 = a[i];

        for (int j = i + 1; j < n;j++){

                if(temp<a[j]){
                    temp = a[j];
                    index = j;
                }
        }

        a[i] = temp;
        a[index] = temp2;
    }

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
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
