#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t = 0; // �׽�Ʈ ����
	string str;
	int right = 0, left = 0;

	cin >> t;

	cin.ignore();

	for (int i = 0; i < t; i++) { // �־��� �׽�Ʈ ������ŭ �ݺ�
		//����!!
	// str.size()�� Ȧ���� �ȵ�
	// '('�� ')'�� ������ ���ƾ� ��

		getline(cin, str);				//���� �޾ƿ���
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
						//cout << "�� : " << s.top() << endl;
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
					//cout << "����" << endl;
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