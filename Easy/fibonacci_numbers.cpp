/**
 *  author: MahfuzAhmed
 *  created: 13.08.2019
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
    
    int n; cin >> n;
    
    int c1 = 1;
    int c2 = 1;
    
    for(int i = 2; i<n; i++){
        int temp = c2;
        
        c2 = c1+c2;
        c1 = temp;
    }
    
    cout << c2 << "\n"; 
    
    
    return 0;
}
