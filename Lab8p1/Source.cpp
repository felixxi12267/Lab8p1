#include <iostream>
#include <string>
using namespace std;
int countCharacter(string str);
int main() {
	bool Qcheck = true;
	string input;
	int charcount = 0;
	while (Qcheck) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q")  break;
		charcount = countCharacter(input);
		cout << charcount<<endl;
	}
	return 0;
}



int countCharacter(string str) {
	int charactercount = 0;
	charactercount = str.length();
	return charactercount;
}