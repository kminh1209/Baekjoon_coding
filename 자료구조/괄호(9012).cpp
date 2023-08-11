#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t = 0; // 테스트 개수
	string str;
	int right = 0, left = 0;

	cin >> t;

	cin.ignore();

	for (int i = 0; i < t; i++) { // 주어진 테스트 개수만큼 반복
		//조건!!
	// str.size()가 홀수면 안됨
	// '('과 ')'의 개수가 같아야 됨

		getline(cin, str);				//문장 받아오기
		//cout << str << endl;

		stack<char>s;

		int len = str.size();

		//cout << "len : " << len << endl;

		for (int k = 0; k < len; k++) {

			if (k < len - 1) {
				if (str[k] == '(') {
					s.push(str[k]);
					//cout << "push : ("<< endl;
				}

				else if (str[k] == ')') {
					if (s.empty()) {
						cout << "NO" << endl;
						break;
					}
					else if (!s.empty()) {
						//cout << "팝 : " << s.top() << endl;
						s.pop();

					}
				}
			}
			if (k == len-1) {
				if (str[k] == '(') {
					cout << "NO" << endl;
					break;
				}
				else if (str[k] == ')') {
					//cout << "들어옴" << endl;
					if (s.empty()) {
						cout << "NO" << endl;
						break;
					}
					else if (!s.empty()) {
						cout << s.top() << endl;
						s.pop();
						if (s.empty()) {
							cout << "YES" << endl;
						}
						else {
							cout << "NO" << endl;
						}
					}
				}
			}

		}
	}
}