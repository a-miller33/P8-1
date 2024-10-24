#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
	string str;
	cout << "Enter a string: ";
	cin >> str;
	cout << "Count: " << countVowel(str);

	return 0;
}

int countVowel(string str) {
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			count++;
		}
	}
	return count;
}