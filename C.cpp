#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define ff first
#define ss second
#define mp make_pair
#define ub upper_bound
const int mn = 1e9+10;

void setIO(string name = "") {cin.tie(0)->sync_with_stdio(0);if (sz(name)) {	freopen((name+".in").c_str(), "r", stdin);freopen((name+".out").c_str(), "w", stdout);}}
///|||///||| Driver Code  ///|||///|||

int main()
{ 
   setIO();
  int n;cin>>n;
  vector<int> a(n,0),b(n,0),c(n,0);
  for(int i=0;i<n;i++)cin>>a[i]>>b[i]>>c[i];
 int dp[n][3];
  dp[0][0]=a[0];
  dp[0][1]=b[0];
  dp[0][2]=c[0];
 
  for(int i=1;i<n;i++)
  {
    dp[i][0]=a[i]+max(dp[i-1][1],dp[i-1][2]);
    dp[i][1]=b[i]+max(dp[i-1][0],dp[i-1][2]);  
    dp[i][2]=c[i]+max(dp[i-1][0],dp[i-1][1]);
  }
  cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});

}