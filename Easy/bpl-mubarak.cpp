// 
//	author: Mahfuz Ahmed 
// 

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end();
#define sz(a) (int)(a).size();
#define pb push_back;
#define mp make_pair
#define nl std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

typedef long long ll;
const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t; cin >> t;
    
    while(t--){
		string s; cin >> s;
		int ball = 0, b= 0;
		int over = 0;
		
		for(int i=0;s[i];i++){
			if(s[i] == 'O')b++;
			int x = s[i] - '0';
			if(x < 7) b++;
		}
		over = b / 6;
		ball = b % 6;
		
		
		
		if(over == 1){
			cout <<over<< " OVER";
		}else if(over > 1){
			cout <<over<< " OVERS";
		}
		
		if(over > 0 && ball > 0) {
			cout << " ";
		}
		if(ball == 1){
			cout<< ball << " BALL";
		}else if(ball > 1){
			cout <<ball<< " BALLS";
		}
		nl;
	}
        
    
    return 0;
}
