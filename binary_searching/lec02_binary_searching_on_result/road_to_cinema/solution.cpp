#include <bits/stdc++.h>
#define int long long

using namespace std;

// Nhập dữ liệu.
void enter(int &n, int &k, int &s, int &t, vector < pair < int, int > > &cars,
           vector < int > &stations)
{
    // Số xe, số trạm xăng, địa điểm s của rạp phim và thời gian tối đa để tới rạp.
    cin >> n >> k >> s >> t;

    // Thông số các xe: Giá thuê và dung tích bình xăng.
    cars.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> cars[i].first >> cars[i].second;

    // Tọa độ các trạm xăng.
    stations.resize(k + 1);
    for (int i = 1; i <= k; ++i)
        cin >> stations[i];
}

// Kiểm tra xem với dung tích bình xăng là test_capacity thì có thể đi từ
// địa điểm 0 tới rạp chiếu phim tại địa điểm s hay không.
bool check(int test_capacity, int t, vector < int > &stations)
{
    int total_time = 0;
    for (int i = 2; i < stations.size(); ++i)
    {
        int road_length = stations[i] - stations[i - 1];

        if (test_capacity - road_length < 0)
            return false;

        int k = min(road_length, test_capacity - road_length);
        total_time += 2 * road_length - k;
    }

    return total_time <= t;
}

void solution(int n, int s, int t, vector < pair < int, int > > &cars,
              vector < int > &stations)
{
    // Thêm hai địa điểm 0 và s vào danh sách các địa điểm, coi như là hai trạm xăng.
    // Sắp xếp tăng dần các địa điểm theo tọa độ trên trục số.
    stations.push_back(0);
    stations.push_back(s);
    sort(stations.begin() + 1, stations.end());

    // Tìm dung tích G nhỏ nhất sao cho tất cả các xe có dung tích lớn hơn hoặc bằng
    // G đều có thể đi từ địa điểm 0 tới địa điểm s trong thời gian không quá t.
    int minimum_capacity = LLONG_MAX;
    int l = 0, r = 1e9;
    while (l <= r)
    {
        int test_capacity = (l + r) >> 1;

        if (check(test_capacity, t, stations))
        {
            minimum_capacity = test_capacity;
            r = test_capacity - 1;
        }
        else
            l = test_capacity + 1;
    }

    // Chọn xe có giá thuê nhỏ nhất trong tất cả các xe có thể chọn.
    int minimum_cost = LLONG_MAX;
    for (int i = 1; i <= n; ++i)
        if (cars[i].second >= minimum_capacity)
            minimum_cost = min(minimum_cost, cars[i].first);

    if (minimum_cost == LLONG_MAX)
        cout << -1;
    else
        cout << minimum_cost;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, s, t;
    vector < pair < int, int > > cars;
    vector < int > stations;

    enter(n, k, s, t, cars, stations);
    solution(n, s, t, cars, stations);

    return 0;
}