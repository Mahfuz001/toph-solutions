#include <iostream>

using namespace std;
const double pi = 3.1415926536;
int main() {
	double r;
	cin >> r;
	double area = pi * (r*r);
	printf("%.5lf\n",area);
	
	return 0;
}
