#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string s = "";  
	cin >> s; // 최초 string 입력

	stack<char> l;
	stack<char> r;

	for (int i = 0; i < s.size(); i++) {  // 최초 커서는 맨 왼쪽
		l.push(s[i]);
	}

	int num;
	cin >> num; // 명령 개수

	while (num--) {
		char tmp;
		cin >> tmp;

		if (tmp == 'P') {
			char c;
			cin >> c; // P 명령어로 넣을 글자 받음
			l.push(c);
		}
		else if (tmp == 'L') {
			if (l.empty()) continue;
			else {
				r.push(l.top());
				l.pop();
			}
		}
		else if (tmp == 'D') {
			if (r.empty()) continue;
			else {
				l.push(r.top());
				r.pop();
			}
		}
		else if (tmp == 'B') {
			if (l.empty()) continue;
			else {
				l.pop();
			}
		}
	}

	while (!l.empty()) {
		r.push(l.top());
		l.pop();
	}

	while (!r.empty()) {
		cout << r.top();
		r.pop();
	}

	return 0;
}