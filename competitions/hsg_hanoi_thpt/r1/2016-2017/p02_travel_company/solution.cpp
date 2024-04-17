#include <bits/stdc++.h>
#define int long long
#define task "BAI2_1617."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
typedef pair < int, int > II;
const int maxn = 1e5 + 10;
II place[maxn];
int M, N, totalGuest;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> M >> N;
    for (int i = 1; i <= M; ++i)
    {
        cin >> place[i].x >> place[i].y; // x là số khách tại địa điểm, y là số khách tối đa hướng dẫn được/1 HDV.
        if (place[i].x < place[i].y)
            place[i].y = place[i].x; // Nếu số khách < số người tối đa có thể hướng dẫn/1 HDV thì gán t[i] = k[i].
        totalGuest += place[i].x;
    }
}

void solve()
{
    int totalGuest_Served = 0; // Số khách tối đa có thể được phục vụ.

    for (int tourGuide = N; tourGuide > 0;) // Ban đầu công ty có N HDV, ta sẽ lần lượt sử dụng cho từng địa điểm.
    {
        int maxGuest_Per_Guide = 0, Pos = 0;

        for (int i = 1; i <= M; ++i) // Tìm ra địa điểm đang có place[i].y lớn nhất hiện tại.
            if (maxGuest_Per_Guide < place[i].y)
            {
                maxGuest_Per_Guide = place[i].y;
                Pos = i;
            }

        if (Pos == 0) // Nếu đã phục vụ hết toàn bộ khách thì dừng vòng lặp.
            break;
        /*
          Số khách ở địa điểm này sẽ có dạng: place[i].x = tourGuideUse * place[i].y + R; R là số khách lẻ không đủ số
          lượng tối đa cho 1 HDV. Ta sẽ tính tourGuideUse trước, còn R khách lẻ sẽ lưu lại vào place[i] để tiếp tục lựa
          chọn có nên điều thêm 1 HDV tới đây nữa không.
        */
        int tourGuideUse = place[Pos].x / place[Pos].y;
        int R = place[Pos].x % place[Pos].y; // Số khách còn lại tại địa điểm - không đủ số lượng tối đa / 1 HDV.

        if (tourGuide < tourGuideUse) // Nếu số HDV còn lại không đủ để sử dụng cho địa điểm này thì dùng nốt và thoát.
        {
            totalGuest_Served += tourGuide * place[Pos].y;
            tourGuide = 0;
            break;
        }
        // Ngược lại, nếu số lượng HDV đủ để điều tới địa điểm này thì tính toán số khách phục vụ được.
        totalGuest_Served += tourGuideUse * place[Pos].y; // Phục vụ được thêm = tourGuideUse * số khách tối đa/1 HDV.
        tourGuide -= tourGuideUse; // Số HDV còn lại.
        place[Pos].x = place[Pos].y = R; // Số khách còn lại tại địa điểm Pos, số khách tối đa/1 HDV cũng giảm theo.
    }

    cout << totalGuest - totalGuest_Served; // Số khách tối thiểu không thể phục vụ.
}

main()
{
    enter();
    solve();
    return 0;
}