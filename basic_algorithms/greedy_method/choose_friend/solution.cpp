#include <bits/stdc++.h>
#define int long long
#define task "ChooseFriend."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
typedef pair < int, int > II;

const int maxN = 1e5 + 10;
int N, M, choseTime[maxN];
vector < int > available[maxN];

void enter()
{
    cin >> N >> M;
    for (int i = 1; i <= M; ++i)
        available[i].clear();
    memset(choseTime, 0, sizeof(choseTime));

    for (int i = 1; i <= M; ++i)
    {
        int K, F;
        cin >> K; // Số người bạn rảnh rỗi trong ngày thứ i.

        for (int j = 1; j <= K; ++j) // Danh sách những người bạn của ngày i.
        {
            cin >> F;
            available[i].push_back(F);
        }

        if (K == 1) // Nếu chỉ có 1 người bạn => Bắt buộc phải chọn.
            ++choseTime[available[i].front()];
    }
}

void solution()
{
    int maxTime = (M + 1) / 2;

    for (int i = 1; i <= N; ++i) // Nếu có người bạn nào bị chọn hơn [(M + 1) / 2] lần thì không có phương án thỏa mãn.
        if (choseTime[i] > maxTime)
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;

    for (int i = 1; i <= M; ++i)
    {
        if (available[i].size() == 1)
        {
            cout << available[i].front() << ' ';
        }
        else // Ngược lại tìm một người bạn chưa chọn đủ số lần max để chọn.
        {
            for (vector < int > :: iterator it = available[i].begin(); it != available[i].end(); ++it)
                if (choseTime[*it] < maxTime)
                {
                    cout << *it << ' ';
                    choseTime[*it]++;
                    break;
                }
        }
    }

    cout << endl;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int nTest;
    cin >> nTest;

    while (nTest--)
    {
        enter();
        solution();
    }

    return 0;
}


