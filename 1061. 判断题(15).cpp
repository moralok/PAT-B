#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int *sco = new int[100];
	int *ans = new int[100];
	int (*ans_stu)[100] = new int[100][100];
	/**vector<int> sco(m);
	vector<int> ans(m);
	vector<vector<int>> ans_stu(n, vector<int>(m));*/
	for (int i = 0; i < m; i++) {
		cin >> sco[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> ans[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ans_stu[i][j];
		}
	}

	//vector<int> sum(n);
	int *sum = new int[100];
	for (int i = 0; i < 100; i++) {
		sum[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ans_stu[i][j] == ans[j]) {
				sum[i] = sum[i] + sco[j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << sum[i] << endl;
	}
}