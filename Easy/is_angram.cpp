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
    
    string s1, s2; cin >> s1 >> s2;
    
    int arr1[26] = {0};
    int arr2[26] = {0};
    
    for(int i=0; s1[i]; i++){
        arr1[s1[i] - 'a']++;
    }
    for(int i=0; s2[i]; i++){
        arr2[s2[i] - 'a']++;
    }
    
    for(int i = 0; i<26; i++){
        if(arr1[i] != arr2[i]){
            cout << "No\n";
            return 0;
        }
    }
    
    cout << "Yes\n";
    
    
    return 0;
}
