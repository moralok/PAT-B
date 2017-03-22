#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
	int M, N, A, B, x;
	cin >> M >> N >> A >> B >> x;
	vector<vector<int>> a(M, vector<int>(N));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
			if (a[i][j] <= B && a[i][j] >= A) {
				a[i][j] = x;
			}
			cout << setw(3) << setfill('0') << a[i][j];
			if (j != N-1) {
				cout << " ";
			}
		}
		cout << endl;
	}
}