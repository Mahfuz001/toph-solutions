/**
 *  author: MahfuzAhmed
 *  created: 26.05.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, s, n) for(int i = s; i < int(n); i++)

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

void print(char c, int n){
    if(c != '\n' && n >= 0)
        cout << c;
}

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    string s;
    cin >> s;
    
    int len = s.length();
    
    int n;
    if (len % 3 == 0){
        n = 3;
    }else{
        n = len % 3;
    }
    print(s[n-3], n-3); print(s[n-2], n-2); print(s[n-1], n-1);
    n +=3;
    while(n <= len){
        cout << ",";
        print(s[n-3], n-3); print(s[n-2], n-2); print(s[n-1], n-1);
        n +=3;
    }
    cout << "\n";   
    
    return 0;
}
