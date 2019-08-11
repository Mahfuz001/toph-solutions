/**
 * 	author: MahfuzAhmed
 * 	created: 11.08.2019 
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    string s1, s2; cin >> s1 >> s2;
    
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    
    for(int i = 0; s1[i]; i++){
        int x = (s1[i] - '0') + (s2[i] - '0');
        if(x > 9){
            cout << "Yes\n";
            return 0;
        }
    }
    
    cout << "No\n";
    
    
    return 0;
}
