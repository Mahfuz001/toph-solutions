//
//  D.cpp
//  
//
//  Created by Mahfuz Ahmed on 2/7/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define push push_back

//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    double p;
    cin>>p;
    
    int n = p/10;
    cout<<"[";
	int dots = 10-n;
    while (n--) {
        cout<<"+";
    }
	while(dots--){
		cout<<".";
	}
    cout<<"] "<< floor(p)<<"%";br;
    
    return 0;
}
