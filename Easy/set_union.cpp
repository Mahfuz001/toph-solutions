/**
 *  author: MahfuzAhmed
 *  created: 15.08.2019
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
    
    
	set<int> s;
	int n, m; cin >> n >> m;
	
	for(int i = 0; i<n; i++){
		int x; cin >> x;
		s.insert(x);
	}
	for(int i = 0; i<m; i++){
		int x; cin >> x;
		s.insert(x);
	}
	
	set<int> :: iterator itr;
    
    itr = s.begin();
    
    cout << *itr;
    
    itr++;
    
	for(; itr != s.end(); ++itr){
        cout << " " << *itr;
	}
	
    cout << "\n";
    
    
    return 0;
}
