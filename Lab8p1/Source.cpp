#include <iostream>
#include <string>
using namespace std;
int countVowel(string str);
int main() {
	bool Qcheck = true;
	string input;
	int vowcount = 0;
	while (Qcheck) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q")  break;
		vowcount = countVowel(input);
		cout <<"Vowel count: " <<vowcount << endl;
	}
	return 0;
}



int countVowel(string str) {
	int vowelcount = 0;
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
			vowelcount++;
		}
	}
	return vowelcount;
}