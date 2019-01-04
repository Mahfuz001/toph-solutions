#include <iostream>

using namespace std;

int main() {
	int n,h=0;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		if(x>h) h = x;
	}
	cout << h << endl;
	
	return 0;
}
