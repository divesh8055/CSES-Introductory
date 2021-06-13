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

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
      if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

void twoKnights(int n)
{
    uint64 odd=1;
    for(int i=2; i<=n; i++)
    {
        uint64 temp1 = i*i;
        uint64 temp2 = (i*i)-1;
        if(!(i&1))
            temp1 = temp1/2;
        else
            temp2 = temp2/2;
        uint64 sub = (odd*odd)-1;
        odd+=2;
        cout<<(temp1*temp2)-sub<<"\n"; 
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    cout<<0<<"\n";
    twoKnights(n);
    return 0;
}