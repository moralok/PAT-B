#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
/**
bool isPrime(int num) {
	int sqrt_num = sqrt((double)num);
	if (num <= 1) {
		return false;
	}
	else {
		for (int i = 2; i <= sqrt_num; i++) {
			if (sqrt_num % i == 0) {
				return false;
			}
		}
		return true;
	}
}
*/
int isPrime(int x) {
	int flag = 1;
	int i;
	for (i = 2; i<x; i++) {
		if (x%i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}

int main() {
	int n;
	cin >> n;
	int *ran = new int[10000];
	int *get = new int[10000];
	for (int i = 0; i < 10000; i++) {
		get[i] = 0;
	}
	for (int i = 0; i < 10000; i++) {
		ran[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		int id;
		cin >> id;
		ran[id] = i;
	}

	int k;
	cin >> k;
	
	for (int i = 0; i < k; i++) {
		int num;
		cin >> num;
		//cout << num << ":";
		printf("%04d:", num);
		if (ran[num] == 0) {
			cout << " Are you kidding?" << endl;
		}
		else if (get[num] == 1) {
				cout << " Checked" << endl;
			}
		else if (ran[num] == 1) {
			cout << " Mystery Award" << endl;
		}
		else if (isPrime(ran[num])) {
			cout << " Minion" << endl;
			}
		else {
			cout << " Chocolate" << endl;
		}
		get[num] = 1;
	}
	delete[]ran;
	delete[]get;
}