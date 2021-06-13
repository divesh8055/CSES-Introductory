#include<bits/stdc++.h>
using namespace std;

#define INF (int)1e9
#define mp make_pair
#define pb push_back
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOREACH(it, l) for(auto it = l.begin(); it != l.end(); it++)
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define mod 1000000007
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define FOR(i, a, b) for(int i=a; i<(b); i++)
#define F0R(i, a) for(int i=0; i<(a); i++)
#define FORd(i, a, b) for(int i=(b)-1; i>=(a); i--)
#define F0Rd(i, a) for(int i=(a)-1; i>=0; i--)
#define all(x) x.begin(), x.end()
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef map<int64,int64> mpll;
typedef vector<int64> vll;
typedef pair<int64, int64> pll;

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
      if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

int64 power(int64 x, int64 y, int64 p)
{
    int64 res = 1;
    x %= p;
    while (y)
    {
        if (y & 1)
            res = (res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vs chessboard(8);
    F0R(i,8)
        cin>>chessboard[i];
    int64 count = 0;
    vi columns(8);
    iota(all(columns),0);
    do{
        bool valid = true;
        F0R(i,8)
        {
            if(chessboard[i][columns[i]] != '.')
            {
                valid = false;
                break;
            }
        }
        vector<bool> diagonal(15, false);
        F0R(i,8)   
        {
            if(diagonal[i+columns[i]])
                valid = false;
            diagonal[i+columns[i]] = true;
        }
        F0R(i,15)
            diagonal[i] = false;
        F0R(i,8)
        {
            if(diagonal[i+7-columns[i]])
                valid = false;
            diagonal[i+7-columns[i]] = true;
        }
        count+=valid;
    
    }while(next_permutation(all(columns)));

    cout<<count;
    return 0;
}