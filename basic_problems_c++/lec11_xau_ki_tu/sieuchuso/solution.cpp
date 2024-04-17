#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    int k;
    cin >> n >> k;
    
    // Tính tổng các chữ số của n.
    int sum_digit = 0;
    for (int i = 0; i < n.size(); ++i)
        sum_digit += (n[i] - 48);
    
    // Tính ra siêu chữ số của p ở lượt đầu tiên. 
    sum_digit *= k;
    string p = to_string(sum_digit);
    
    while (p.size() > 1)
    {
        int sum_digit = 0;
        for (int i = 0; i < p.size(); ++i)
            sum_digit += (p[i] - 48);
        
        p = to_string(sum_digit);
    }
    
    cout << p;
    
    return 0;
}