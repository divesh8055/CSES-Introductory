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

void rowfunc(uint64 row, uint64 column)
{
    if(!(row&1))
        cout<<((row-1)*(row-1))+(2*row)-column<<endl;
    else
        cout<<((row-1)*(row-1))+column<<endl;
}

void columnfunc(uint64 row, uint64 column)
{
    if(!(column&1))
        cout<<((column-1)*(column-1))+row<<endl;
    else
        cout<<((column-1)*(column-1))+(2*column)-row<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        uint64 row, column;
        cin>>row>>column;
        if(row>column)
            rowfunc(row, column);
        else    
            columnfunc(row, column);
    }
    return 0;
}

