#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int student_number = 0; // Số lượng học sinh.
    double total_points = 0; // Tổng điểm các học sinh.
    int id = 0; // Số thứ tự của các học sinh.
    int max_id = 0; // Thứ tự của học sinh có điểm cao nhất.
    double max_point = 0; // Điểm của học sinh cao nhất.
    while (true)
    {
        double p;
        cin >> p;
        
        if (p == -1)
            break;
        
        ++student_number; // Tăng số lượng hs với mỗi p khác -1.
        ++id; // Số thứ tự của học sinh hiện tại.
        total_points += p; // Tổng điểm tăng thêm lượng p.
        
        if (p > max_point)
        {
            max_point = p;
            max_id = id;
        }
    }
    
    // In kết quả theo yêu cầu.
    cout << student_number << endl;
    cout << fixed << setprecision(2) << total_points / student_number << endl;
    cout << max_id;
    
    return 0;
}