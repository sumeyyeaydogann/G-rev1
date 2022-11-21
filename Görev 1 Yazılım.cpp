#include <iostream>
using namespace std;
int main() {
	#define G 9.80665
	float t, x;
	cin >> t;
	x = 1./2 * G * t*t;
	cout << x;
}
