#include<iostream>
#include<math.h>

using namespace std;

int main() {
	double r1, p1, r2, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	
	double A = r1 * r2 * cos(p1) * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
	double B = r1 * r2 * cos(p1) * sin(p2) + r1 * r2 * sin(p1) * cos(p2);

	if (fabs(A) < 0.005) {
		A = 0;
	}
	
	if (fabs(B) < 0.005) {
		B = 0;
	}
	if (B < 0) {
		printf("%.2f%.2fi", A, B);
	}
	else {
		printf("%.2f+%.2fi", A, B);
	}
}