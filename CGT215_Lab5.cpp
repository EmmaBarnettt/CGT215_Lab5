#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<char> intVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });

	cout << "Please enter message here";
	cout << "Message: " << ch << std::endl;

	char ch;
	if (ch >= 65 && ch <= 90) {
		intVector[ch - 65];
	}
	else if (ch >= 97 && ch <= 122) {
		char upperCaseLetter = ch - 32;
		char upperCaseCode = intVector[upperCaseLetter - 65];
	}
	else if (ch > 0 && ch > 122) {
		intVector[ch];
	}


	


}