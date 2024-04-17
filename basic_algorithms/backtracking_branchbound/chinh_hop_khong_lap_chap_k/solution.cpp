#include <iostream>

using namespace std;

bool used[11];
int s[11];
int n, k;

void back_track(int i)
{
    // Nếu đã sinh đủ k thành phần thì dừng.
    if (i > k)
    {
        for (int j = 1; j <= k; ++j)
            cout << s[j] << ' ';
        cout << '\n';

        return;
    }

    // Bắt đầu sinh các cấu hình.
    for(int v = 1; v <= n; ++v) 
    {
        // Nếu giá trị v chưa được sử dụng thì chọn nó.
        if(!used[v]) 
        {
            s[i] = v; 
            used[v] = true;

            back_track(i + 1); 

            used[v] = false; // Trả đệ quy.
        }   
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    back_track(1);

    return 0;
}