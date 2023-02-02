#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n, i;
	cin >> n;
	int num = 1;
	stack<int>s;
	vector<char>c;


	for (i = 0; i < n; i++) {
		int order_n;
		
		cin >> order_n;

		while (num <= order_n) {
			s.push(num);
			num +=1;
			c.push_back('+');
		}

		if (s.top() == order_n) {
			s.pop();
			c.push_back('-');
		}
		else{
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < c.size(); i++) {
		cout << c[i] << '\n';
		
	}
	return 0;
}