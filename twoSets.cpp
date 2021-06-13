#include<bits/stdc++.h>
using namespace std;

#define INF (int)1e9
#define mp make_pair
#define pb push_back
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
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
typedef set<int64> setll;

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
      if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

void twoSets(int64 n)
{
    int64 sum = n*(n+1)/2;
    if(sum&1)
    {
        cout<<"NO";
        return;
    }
    else
    {
        int64 curr_sum=0, i=n;
        cout<<"YES"<<endl;
        sum = sum/2;
        unordered_set<int64> set1;
        while(curr_sum<sum)
        {
            set1.insert(i);
            curr_sum+=i;
            i--;
        }
        if(curr_sum>sum)
        {
            curr_sum-=(i+1);
            set1.erase(set1.find(i+1));
            set1.insert(sum-curr_sum);
        }
        cout<<set1.size()<<endl;
        for(auto c: set1)
            cout<<c<<" ";
        cout<<endl;
        cout<<n - set1.size()<<endl;
        for(int64 j=1; j<=n; j++)
        {
            if(set1.find(j)==set1.end())
                cout<<j<<" ";
        }
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int64 n;
    cin>>n;
    twoSets(n);
    // cout<<(int64)260443*260444/2;
    return 0;
}