#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float s, k, n;
    cout << "Nhập vào số lượng sinh viên:";
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "điểm sinh viên thứ " << i << endl;
        cin >> k;
        s += k;
    }
    float diem = s / n;
    cout << "điểm trung bình của cả lớp là:" << diem << endl;
    return 0;
}