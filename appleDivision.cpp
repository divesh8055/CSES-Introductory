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

int solve(int64 arr[], int64 sum, int n)
{
    int64 diff = INT_MAX;
    // cout<<sum<<endl;
    for(int64 i=0; i<(1<<n); i++)
    {
        // int temp_diff = INT_MAX;
        int64 temp_sum = 0;
        for(int j=0; j<n; j++)
            if(((1<<j)&i))
                temp_sum+=arr[j];
        diff = min(diff, abs(sum-(2*temp_sum)));
    }
    return diff;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int64 arr[n];
    int64 sum = 0;
    F0R(i,n)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int64 result = solve(arr, sum, n);
    cout<<result;

    return 0;
}