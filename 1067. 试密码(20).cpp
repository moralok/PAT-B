#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	string ans;
	int n;
	cin >> ans >> n;
	cin.get();
	vector<string> a(1000);
	int i = 0;
	while (i < n) {
		getline(cin, a[i]);
		if (a[i] == "#") {
			return 0;
		}
		else if(a[i] == ans) {
			cout << "Welcome in";
			return 0;
		}
		else {
			cout << "Wrong password: " << a[i] << endl;
			i++;
		}
	}
	cout << "Account locked" << endl;
	return 0;


}