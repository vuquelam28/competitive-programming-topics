#include <bits/stdc++.h>
#define int long long
#define task "Prime."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxN = 11;
int N, L, R, p[maxN];
vector < int > numList;

void enter()
{
    cin >> N;

    for (int i = 1; i <= N; ++i)
        cin >> p[i];

    cin >> L >> R;
}

void recursion(int pos, int num)
{
    if (num >= L)
        numList.push_back(num);

    for (int i = pos; i <= N; ++i)
        if (num <= R / p[i])
            recursion(i, num * p[i]);
}

/* Solution:
   - Bài này ta duyệt sinh tất cả các số tạo thành từ tích của các số nguyên tố p[i], số nào nằm trong đoạn [L, R] thì
   lưu lại. Ở đây chỉ sử dụng quay lui kết hợp với đặt cận thông thường.
*/
void solution()
{
    recursion(1, 1);
    sort(numList.begin(), numList.end());

    if (numList.empty())
        cout << "none";
    else
    {
        for (int i = 0; i < numList.size() - 1; ++i)
            cout << numList[i] << ',';
        cout << numList.back();
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


