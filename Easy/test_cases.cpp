/**
 *  author: MahfuzAhmed
 *  created: 17.08.2019
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
    
    int n, cpu, m; cin >> n >> cpu >> m;
    
    
    vector<string> svec;
    
    for(int i=0; i<n; i++){
        int a,b, c; cin >> a >> b >> c;
        
        if(a != 0){
            if(b > cpu) svec.push_back("CLE");
            else if(c > m) svec.push_back("MLE");
            else svec.push_back("WA");
        }else{
            if(b > cpu) svec.push_back("CLE");
            else if(c > m) svec.push_back("MLE");
            else svec.push_back("AC");
        }
    }
    
    for(int i=0; i< n; i++){
        if(svec[i] != "AC"){
            cout << svec[i] << "\n";
            return 0;
        }
    }
    
    cout << "AC\n";
    
    return 0;
}
