#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

    // Nhập tọa độ 5 điểm
    cout << "Nhap toa do diem A (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Nhap toa do diem C (x3 y3): ";
    cin >> x3 >> y3;
    cout << "Nhap toa do diem D (x4 y4): ";
    cin >> x4 >> y4;
    cout << "Nhap toa do diem E (x5 y5): ";
    cin >> x5 >> y5;

    // Tính tích có hướng (cross product) để kiểm tra lồi/lõm
    float c1 = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    float c2 = (x3 - x2) * (y4 - y2) - (y3 - y2) * (x4 - x2);
    float c3 = (x4 - x3) * (y5 - y3) - (y4 - y3) * (x5 - x3);
    float c4 = (x5 - x4) * (y1 - y4) - (y5 - y4) * (x1 - x4);
    float c5 = (x1 - x5) * (y2 - y5) - (y1 - y5) * (x2 - x5);

    if ((c1 > 0 && c2 > 0 && c3 > 0 && c4 > 0 && c5 > 0) ||
        (c1 < 0 && c2 < 0 && c3 < 0 && c4 < 0 && c5 < 0))
    {

        cout << "Day la da giac loi." << endl;

        // Tính diện tích theo công thức Shoelace
        float dientich = 0.5 * fabs(
                                   x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - y1 * x2 - y2 * x3 - y3 * x4 - y4 * x5 - y5 * x1);

        // Tính chu vi
        float cv = 0;
        cv += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cv += sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        cv += sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
        cv += sqrt((x4 - x5) * (x4 - x5) + (y4 - y5) * (y4 - y5));
        cv += sqrt((x5 - x1) * (x5 - x1) + (y5 - y1) * (y5 - y1));

        cout << "Dien tich da giac: " << dientich << endl;
        cout << "Chu vi da giac: " << cv << endl;
    }
    else
    {
        cout << "Day la da giac lom." << endl;
    }

    return 0;
}
