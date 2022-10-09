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

vector<vector<int>> adj;
int n;int s;


void bfs()
{
queue<int> q;
vector<bool> used(n);
vector<int> d(n),p(n);

q.push(s);
used[s]=true;
p[s]=-1;
while(!q.empty())
{
    int v=q.front();
    q.pop();
    for(int u:adj[v])
    {
        if(!used[v])
        {
            used[u]=true;//marking u is used
            q.push(u);//putting u in queue
            d[u]=d[v]+1;//distance of u = distance of v +1
            p[u]=v;//parent updated to v
        }
    }
}
 int node;
if(!used[node])cout<<"nopaths";
else
{  vector<int> path;
    for(int v=node;v!=-1;v=p[v])
    {
        path.push_back(v);

    }
    reverse(path.begin(),path.end());
    //return path;
}
}

int main()
{ 
   int n;
   cin >> n;

   int ans = 1e9;

   for(int i=0; i<13; i++) {
       if(i*8 > n) continue;
       
       float now;

      now=float(ans);
       if(now == (int)now) ans = min(ans, i+(int)now);
   }

   if(ans == 1e9) cout << "-1";
   else cout << ans;
}
