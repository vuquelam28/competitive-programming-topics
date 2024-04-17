#include <bits/stdc++.h>

using namespace std;
const int maxn = 101;
int N, total_width;
vector < int > book_1, book_2;

void enter()
{
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        int t, w;
        cin >> t >> w;

        if (t == 1)
            book_1.push_back(w);
        else
            book_2.push_back(w);

        total_width += w;
    }
}

void solution()
{
    // Sort each set of books by their width in descending order.
    // book_1 contains of books which thickness is 1, book_2 contains of books which thickness is 2.
    sort(book_1.begin(), book_1.end(), greater < int >());
    sort(book_2.begin(), book_2.end(), greater < int >());

    // Try to use i max-width books with thickness 1 and j max-width books with thickness 2 as below books.
    int minimum_thickness = INT_MAX;
    for (int i = 0; i <= (int) book_1.size(); ++i)
        for (int j = 0; j <= (int) book_2.size(); ++j)
        {
            // above_width is the total width of above books.
            int above_width = total_width;
            for (int k = 0; k < i; ++k)
                above_width -= book_1[k];
            for (int k = 0; k < j; ++k)
                above_width -= book_2[k];

            int below_thickness = i + 2 * j;
            if (above_width <= below_thickness)
                minimum_thickness = min(minimum_thickness, below_thickness);
        }

    cout << minimum_thickness;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}