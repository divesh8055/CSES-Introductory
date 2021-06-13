#include<bits/stdc++.h>
using namespace std;

#define INF (int)1e9
#define mp make_pair
#define pb push_back
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define mod 1000000007;
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

void reorderPalindrome(string str)
{
    unordered_map<char, int>mp;
    string res;
    int n = str.length();
    for(int i=0; i<n; i++)
        mp[str[i]]++;
    int count = 0;
    for(auto element:mp)
    {
        if(element.second%2 !=0)
            count++;
    }
    if(count>1 || (count==1 && !(n&1)) || (count==0 && (n&1)))
    {
        cout<<"NO SOLUTION";
        return;
    }

    string temp;
    for(auto element: mp)
    {
        int temp_count = element.second/2;
        while(temp_count--)
            temp.pb(element.first);
    }
    res = temp;
    for(auto element:mp)
    {
        if(element.second%2!=0)
            res.pb(element.first);
    }
    reverse(temp.begin(), temp.end());
    res.append(temp);
    cout<<res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin>>str;
    reorderPalindrome(str);
    return 0;
}