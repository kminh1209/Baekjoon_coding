#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	int case_num;
	string str;
	cin >> case_num;


	cin.ignore();
	for (int k = 0; k < case_num; k++) {

		getline(cin, str);
			str += ' ';

			stack<char>s;

			for (int i = 0; i < str.size(); i++) {
				if (str[i] == ' ') {
					while (!s.empty()) {
						cout << s.top();
						s.pop();
					}
					cout << ' ';
				}
				else {
					s.push(str[i]);
				}
			}
			cout << endl;
	}
	
}