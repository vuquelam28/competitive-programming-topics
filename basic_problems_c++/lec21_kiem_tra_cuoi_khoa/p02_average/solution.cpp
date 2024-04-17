#include <bits/stdc++.h>

using namespace std;

void solution(pair < int, int >* a, int* n) 
{
	sort(a, a + *n);
	for (int i = *(n - 1); i >= 0; i--) 
		cout << a[i].second << ' ' << a[i].first << endl;
	
	delete n;
	n = NULL;
	delete[] a;
	a = NULL;
}

int main()
{
	int* n = new int;
	cin >> *n;
	pair < int, int >* a = new pair < int, int > [*n];

	for (int i = 0; i < *n; i++) 
	{
		cin >> a[i].first;
		a[i].second = i + 1;
	}

	solution(a, n);

	return 0;
}