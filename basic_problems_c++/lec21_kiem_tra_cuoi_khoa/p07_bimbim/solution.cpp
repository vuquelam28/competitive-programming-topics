#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int tol = (n * (n + 1) / 2);
    int m_current = m % tol;
    int i = 1;
    while (m_current >= i)
    {
        m_current -= i;
        ++i;
    }
    
    cout << m_current;

    return 0;
}