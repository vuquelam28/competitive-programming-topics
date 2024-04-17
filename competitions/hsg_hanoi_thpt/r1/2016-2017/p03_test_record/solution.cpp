#include <bits/stdc++.h>

using namespace std;

void enter(int &m, int &n, vector < vector < int > > &a)
{
    cin >> m >> n;

    a = vector < vector < int > >(n + 1, vector < int >(m + 2));
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m + 1; ++j)
            cin >> a[i][j];
}

// In kết quả.
void print_result(vector < vector < int > > &type)
{
    sort(type[0].begin(), type[0].end());
    sort(type[1].begin(), type[1].end());
    sort(type[2].begin(), type[2].end());

    cout << type[0].size() << ' ';
    if (!type[0].empty())
        for (auto e: type[0])
            cout << e << ' ';
    cout << endl;

    cout << type[1].size() << ' ';
    if (!type[1].empty())
        for (auto e: type[1])
            cout << e << ' ';
    cout << endl;

    cout << type[2].size() << ' ';
    if (!type[2].empty())
        for (auto e: type[2])
            cout << e << ' ';
}

void solution(int m, int n, vector < vector < int > > &a)
{
    // Mảng đánh dấu các virus có khả năng gây bệnh hay không.
    vector < bool > mark(m + 1, false);

    // Duyệt từng bệnh nhân và xét các bệnh nhân không bị bệnh.
    for (int i = 1; i <= n; ++i)
        if (!a[i][m + 1]) // Nếu bệnh nhân thứ i không bị bệnh
            for (int j = 1; j <= m; ++j) // Duyệt lại danh sách các virus để xem có những virus nào có thuộc nhóm 1.
                if (a[i][j] == 1)
                    mark[j] = true;

    vector < vector < int > > type(3);
    vector < vector < int > > patient(n + 1);

    // Đi tìm các virus thuộc nhóm 1, lưu vào vector type[0].
    // Những virus xuất hiện trong hồ sơ của người không bị bệnh sẽ thuộc nhóm 1.
    for (int i = 1; i <= m; ++i)
        if (mark[i])
	        type[0].push_back(i);

    // Xét các hồ sơ bị bệnh để tìm ra các virus thuộc nhóm 2.
    // Lưu lại danh sách các virus không thuộc nhóm 1 ở hồ sơ của mỗi bệnh nhân bị bệnh.
    // Gọi patient[i] là danh sách các virus không thuộc nhóm 1 của bệnh nhân i.
    for (int i = 1; i <= n; ++i)
        if (a[i][m + 1])
            for (int j = 1; j <= m; ++j)
                if (a[i][j] && !mark[j])
                    patient[i].push_back(j);

    // Duyệt lại các patient[i], nếu bệnh nhân nào có bệnh mà lại chỉ có
    // một virus trong hồ sơ (không thuộc nhóm 1) thì chắc chắn virus đó
    // là virus gây bệnh, đưa vào nhóm 2. Đánh dấu tiếp các virus này đã
    // có nhóm rồi, sử dụng luôn mảng mark.
    for (int i = 1; i <= n; ++i)
        if (patient[i].size() == 1 && !mark[patient[i].front()])
        {
            type[1].push_back(patient[i].front());
            mark[patient[i].front()] = true;
        }

    // Các virus còn lại sẽ thuộc nhóm 3.
    for (int i = 1; i <= m; ++i)
        if (!mark[i])
            type[2].push_back(i);

    print_result(type);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    vector < vector < int > > a;

    enter(m, n, a);
    solution(m, n, a);

    return 0;
}
