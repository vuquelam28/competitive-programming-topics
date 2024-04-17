#include <bits/stdc++.h>

using namespace std;

void solution(string& n) 
{
	int sum = 0;
	for (char d: n)
		sum += d - '0';

	int res = 0;
	for (char d: n) 
		if ((sum - (d - '0')) % 9 && (sum - (d - '0')) % 3==0) 
			++res;

	cout << res;
}

int main() 
{
	string n;
	cin >> n;

	solution(n);

	return 0;
}