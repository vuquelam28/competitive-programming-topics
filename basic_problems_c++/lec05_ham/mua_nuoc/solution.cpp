#include <iostream>

using namespace std;

void solution(long long n, long long a, long long b)
{	
	if (b >= a * 2)
		cout << a * n << endl;
	else	
		cout << a * (n % 2) + b * (n / 2) << endl;
}

int main()
{	
	int q;
	cin >> q;

	while (q--)
	{
		long long n, a, b;
		cin >> n >> a >> b;

		solution(n, a, b);
	}

	return 0;
}