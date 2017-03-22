#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int N, D, prob = 0, must = 0;
	double e;
	cin >> N >> e >> D;
	
	for (int i = 0; i < N; i++) {
		int K;
		int lower = 0;
		cin >> K;
		double E;
		for (int j = 0; j < K; j++) {
			cin >> E;
			if (E < e) {
				lower++;
			}
		}
		if (lower > K / 2) {
			if (K > D) {
				must++;
			}
			else {
				prob++;
			}
		}
	}
	double result_prob = (double)prob / N * 100;
	double result_must = (double)must / N * 100;
	//cout << fixed <<setprecision(1) << result_prob << "% " << fixed << setprecision(1) << result_must << "%";
	printf("%.1f%% %.1f%%", result_prob, result_must);
}