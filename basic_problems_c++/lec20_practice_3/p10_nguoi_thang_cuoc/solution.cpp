#include <bits/stdc++.h>

using namespace std;

void solution(map < string, int >& total_score, vector < pair < string, int > >& tmp)
{
    int max_score = INT_MIN;
    for (auto e: total_score)
        max_score = max(max_score, e.second);

    int number_of_maximum = 0;
    string winner;
    for (auto e: total_score)
        if (e.second == max_score)
            ++number_of_maximum, winner = e.first;

    if (number_of_maximum == 1)
        cout << winner;
    else
    {
        for (auto e: tmp)
            if (e.second >= max_score)
            {
                cout << e.first;
                return;
            }
    }
}

int main()
{
    int n;
    cin >> n;

    map < string, int > total_score, last_score;
    vector < pair < string, int > > tmp;
    for (int i = 1; i <= n; ++i)
    {
        string name;
        int score;
        cin >> name >> score;

        total_score[name] += score;
        tmp.push_back({name, total_score[name]});
    }

    solution(total_score, tmp);

    return 0;
}