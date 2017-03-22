#include<iostream>
#include<string>

using namespace std;

int main() {
	string hand, eye, mouth;
	getline(cin, hand);
	getline(cin, eye);
	getline(cin, mouth);

	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < 5; j++) {
			int *choice = new int[5];
			cin >> choice[j];
			int num = 0;
			for (int k = 0; k != hand.length(); k++) {
				if (hand[k] == '[') {
					num++;
					if (num < choice[0]) {
						cout << "Are you kidding me? @\\/@" << endl;
					}
					if (choice[0] == num) {
						k++;
						while (hand[k] != ']') {
							cout << hand[k];
							k++;
						}
					}
				}
			}
			
				
			num = 0;
			for (int k = 0; k != eye.length(); k++) {
				if (eye[k] == '[') {
					num++;
					if (num < choice[1]) {
						cout << "Are you kidding me? @\\/@" << endl;
					}
					if (choice[1] == num) {
						k++;
						while (eye[k] != ']') {
							cout << eye[k];
							k++;
						}
					}
				}
			}
			

			num = 0;
			for (int k = 0; k != mouth.length(); k++) {
				if (mouth[k] == '[') {
					num++;
					if (num < choice[2]) {
						cout << "Are you kidding me? @\\/@" << endl;
					}
					if (choice[2] == num) {
						k++;
						while (mouth[k] != ']') {
							cout << mouth[k];
							k++;
						}
					}
				}
			}
			
			
			num = 0;
			for (int k = 0; k != eye.length(); k++) {
				if (eye[k] == '[') {
					num++;
					if (choice[3] == num) {
						k++;
						while (eye[k] != ']') {
							cout << eye[k];
							k++;
						}
					}
				}
			}
			if (num < choice[3]) {
				cout << "Are you kidding me? @\\/@" << endl;
			}
			
			num = 0;
			for (int k = 0; k != hand.length(); k++) {
				if (hand[k] == '[') {
					num++;
					if (choice[4] == num) {
						k++;
						while (hand[k] != ']') {
							cout << hand[k];
							k++;
						}
					}
				}
			}
			if (num < choice[4]) {
				cout << "Are you kidding me? @\\/@" << endl;
			}
			cout << endl;

			delete[]choice;
		}
	}
}