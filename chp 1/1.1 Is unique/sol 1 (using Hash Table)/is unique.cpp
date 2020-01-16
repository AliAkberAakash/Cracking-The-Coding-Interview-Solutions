/*
============================================================================
* Author       : Ali Akber Aakash
* Email        : ali852609@gmail.com
* Problem Name : Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
                 cannot use additional data structures?
* Source       : Cracking the coding interview - Gayle Laakmann McDowell
* Time Limit   : 1 sec
============================================================================
*/

#include<bits/stdc++.h>

using namespace std;

//typedef
typedef long double ld;
typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pld;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
typedef priority_queue< int, vector<int>, greater<int> > rpqi;
typedef stack<int> si;
typedef vector <pii> vpii;

//short names
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define pf printf
#define sf scanf
#define um unordered_map

//bitwise
#define BIT(n) (1<<(n))
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a) | (b))
#define XOR(a,b) ((a) ^ (b))
#define sqr(x) ((x) * (x))

//loop
#define FOR(i,n) for (i = 0; i < n; i++)
#define DFOR(n,i) for (i = n; i >= 0; i--)
#define RFOR(a,b,i) for (i = a; i < = b; i++)
#define DRFOR(a,b,i) for (i = a ; i >= 0; i--)
#define RRFOR(a,b,i,j) for(i=a; i<=b; i+=j);
#define DRRFOR(a,b,i,j) for(i=a; i>=b; i-=j);
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define CLR(x) memset(x,0,sizeof(x))
#define SET(ar,n, val) for(int i=0; i<n; i++) ar[i]=val;

//constants
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 10000000
#define MOD 1000000007
#define inf 1<<30

//debug
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define bin(x) cout<<(#x)<<" "<<(x)<<" = "<<bitset<16>(x)<<endl
#define LINE puts("\n---------------------------------------------\n")

bool isUnique(string s)
{
    int i;
    bool hashTable[256];

    if(s.length()>256)
        return false;

    CLR(hashTable);

    FOR(i,s.length())
    {
        if(hashTable[s[i]])
            return false;
        hashTable[s[i]]=true;
    }

    return true;
}

int main()
{
    freopen("../Inputs/input5.txt", "r", stdin);
    freopen("../Outputs/output5.txt", "w", stdout);

    string s;
    getline(cin,s);

    if(isUnique(s))
        cout<<"Unique"<<endl;
    else
        cout<<"Not Unique"<<endl;

    return 0;
}
