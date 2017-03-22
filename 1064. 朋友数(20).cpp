#include<iostream>
#include<set>

using namespace std;

int getFriendNum(int num) {
	int sum = 0;
	while (num != 0) {
		sum = sum + num % 10;
		num = num / 10;
	}
	return sum;
}

int main() {
	set<int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		s.insert(getFriendNum(num));
	}

	cout << s.size() << endl;
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		if (it == s.begin()) {
			cout << *it;
		}
		else {
			cout << " " << *it;
		}
		
	}

}
