#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);

int main() {
	string str;
	cout << "Enter a string: ";
	cin >> str;
	cout << "Count: " << countCharacter(str);

	return 0;
}

int countCharacter(string str) {
	int count = str.length();
	return count;
}