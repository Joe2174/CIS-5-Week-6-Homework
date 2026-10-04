#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

// Homework 6 — Joe Barron
// CIS 5 Week 06 · Menu

int main() {
	string first, last;
	cout << "Please enter your first name: ";
	cin >> first;
	cout << "Please enter your last name: ";
	cin >> last;
	int n = 0;
	
	do {
		cout << "====== Menu ======" << "\n";
		cout << "1. Say Hello" << "\n";
		cout << "2. Count Down" << "\n";
		cout << "3. Exit" << "\n";
		cout << "Please enter selection: ";
		cin >> n;
		if (n == 1) {
			cout << "Hello " << first << " " << last << "!" << "\n";
		}
		else if (n == 2) {
			int down = 10;
			cout << "Counting Down: " << "\n";
			while (down >= 1) {
				cout << down << "\n";
				down--;
			}
		}
		else if (n == 3) {
			cout << "Exiting. " << "\n";
		}
		else {
			cout << "Invalid input. Please try again." << "\n";
		}
	} while (n < 1 || n > 3);

  return 0;
}
