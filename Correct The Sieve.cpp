/**
 *  author: MahfuzAhmed
 *  created: 05.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;

ll isPrime[1000000];

void sieve(){
    isPrime[1] = 1;
    
    for(int i=2; i<= 1000000; i++){
        if(isPrime[i] == 0){
            for(int j = i*2; j<=1000000; j+=i){
                isPrime[j] = 1;
            }
        }
    }
    
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    sieve();
    
    int n; cin >> n;
    
    while(n--){
        int x; cin >> x;
        
        if( isPrime[x] == 0 ) {
			cout << x << " is a prime number.\n";
		}
		else {
			cout << x << " is not a prime number.\n";
		}
    }
    
    
    return 0;
}
