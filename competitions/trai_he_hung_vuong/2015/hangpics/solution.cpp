#include <bits/stdc++.h>
#define int long long
#define task "hangpics."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
int length, width, a1, b1, a2, b2;

void enter()
{
    cin >> length >> width;
    cin >> a1 >> b1 >> a2 >> b2;
}

void solution()
{
    if (length < width)
        swap(length, width);
    if (a1 < b1)
        swap(a1, b1);
    if (a2 < b2)
        swap(a2, b2);

    // Đặt hai bức tranh cạnh nhau theo cùng chiều dọc hoặc ngang.
    if ((length >= max(a1, a2) && width >= b1 + b2) || (width >= max(a1, a2) && length >= b1 + b2)
         || (length >= a1 + a2 && width >= max(b1, b2)) || (width >= a1 + a2 && length >= max(b1, b2)))
    {
        cout << "YES";
        return;
    }

    // Đặt hai bức tranh ghép kiểu so le: Chiều dài bức này ghép với chiều rộng bức kia.
    if ((length >= a1 + b2 && width >= max(a2, b1)) || (length >= a2 + b1 && width >= max(a1, b2))
        || (length >= max(a2, b1) && width >= a1 + b2) || (length >= max(a1, b2) && width >= a2 + b1))
    {
        cout << "YES";
        return;
    }

    cout << "NO";
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}