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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int64 sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]<arr[i])
        {
            sum+=(arr[i]-arr[i+1]);
            arr[i+1] = arr[i];
        }   
    }
    cout<<sum;
    return 0;
}