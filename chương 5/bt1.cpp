#include <cmath>
#include <iostream>
using namespace std;
struct point {
    double x,y;
    void nhap(){
        cout <<"Nhap truc hoanh:";
        cin >> x;
        cout <<"Nhap truc tung:";
        cin >> y;
    }
    void xuat(){
        cout <<"toa do x:" << x <<endl;
        cout <<"toa do y:" << y <<endl;
    }
};
struct segment{
    point a,b;
    void nhap(){
        cout <<"Nhap toa do A:" <<endl;
        a.nhap();
        cout <<"Nhap toa do B:" <<endl;
        b.nhap();
    }
    void xuat(){
        cout <<"Toa do A:"; 
        a.xuat();
        cout <<"Toa do B:"; 
        b.xuat();
    }
};
struct line{
    double a,b,c;
    void nhap(){
        cout<<"Nhap phương trinh duong thang:";
        cin >>a>>b>>c;
    }
    void xuat(){
        cout << "Duong thang: " << a << "x + " << b << "y + " << c << " = 0" << endl;
    }
};
struct parabol{
    double a,b,c;
    void nhap(){
        cout <<"Nhap phuong trinh parabol:";
        cin >> a>>b>>c;
    }
    void xuat(){
        cout << "Parabol: y = " << a << "x^2 + " << b << "x + " << c << endl;
    }
};
struct vector{
    point s,t;
    void nhap(){
        cout <<"Nhap diem bat dau:";
        s.nhap();
        cout <<"Nhap diem ket thuc:";
        t.nhap();
    }
    void xuat(){
        cout << "Vector tu ";
        s.xuat();
        cout << " den ";
        t.xuat();
        cout << endl;
    }
};
struct triangle{
    point A,B,C;
    bool kiemTraTamGiac() {
        double dienTich = (A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y-B.y))/2.0;
        if (dienTich < 0) dienTich = -dienTich;
        return dienTich > 0.001;
    }
    void nhap(){
        do{
        cout << "Nhap toa do 3 diem A,B,C:";
        A.nhap();
        B.nhap();
        C.nhap();
        if (!kiemTraTamGiac()) {
                cout << "3 diem nay khong tao thanh tam giac! Nhap lai.\n";
            }}while (!kiemTraTamGiac());
    }
    void xuat(){
        cout <<"Toa do 3 dinh cua tam giac:";
        A.xuat();
        B.xuat();
        C.xuat();
    }
};
struct rectangle {
    point diem[4];
    
    void nhap() {
        cout << "Nhap 4 dinh hinh chu nhat:\n";
        for (int i = 0; i < 4; i++) {
            cout << "Diem " << (i+1) << ":\n";
            diem[i].nhap();
        }
    }
    
    void xuat() {
        cout << "Hinh chu nhat voi 4 dinh:\n";
        for (int i = 0; i < 4; i++) {
            cout << "Diem " << (i+1) << ": ";
            diem[i].xuat();
            cout << endl;
        }
    }
};
struct circle{
    point a;
    double bk;
    void nhap(){
        cout <<"Nhap tam duong tron:";
        a.nhap();
        cout <<"Nhap ban kinh duong tron:";
        cin >> bk;
    }
    void xuat(){
        cout <<"tam duong tron la:";
        a.xuat();
        cout <<"Ban kinh duong trong la:"<<bk;
    }
};
struct convexpoly {
    point diem[20];
    int soDiem;
    bool kiemTraLoi() {
        if (soDiem < 3) return false;
        
        bool duong = false, am = false;
        
        for (int i = 0; i < soDiem; i++) {
            int j = (i + 1) % soDiem;
            int k = (i + 2) % soDiem;
        
            double tich = (diem[j].x - diem[i].x) * (diem[k].y - diem[j].y) - 
                         (diem[j].y - diem[i].y) * (diem[k].x - diem[j].x);
            
            if (tich > 0) duong = true;
            if (tich < 0) am = true;
            
            if (duong && am) return false;
        }
        
        return true;
    }
    
    void nhap() {
        do {
            cout << "Nhap so dinh (3-20): ";
            cin >> soDiem;
        } while (soDiem < 3 || soDiem > 20);
        
        do {
            cout << "Nhap toa do cac dinh:\n";
            for (int i = 0; i < soDiem; i++) {
                cout << "Diem " << (i+1) << ":\n";
                diem[i].nhap();
            }
            
            if (!kiemTraLoi()) {
                cout << "Da giac nay khong loi! Nhap lai.\n";
            }
        } while (!kiemTraLoi());
    }
    
    void xuat() {
        cout << "Da giac loi co " << soDiem << " dinh:\n";
        for (int i = 0; i < soDiem; i++) {
            cout << "Diem " << (i+1) << ": ";
            diem[i].xuat();
            cout << endl;
        }
    }
};
void dodai(segment hung){
        double dai = sqrt((hung.b.x-hung.a.x)*(hung.b.x-hung.a.x) + (hung.b.y-hung.a.y)*(hung.b.y-hung.a.y));
        cout << "Do dai: " << dai << endl;
};
void kc(line hung,point baby){
    double tu = abs(hung.a * baby.x + hung.b * baby.y + hung.c);
    double mau = sqrt(hung.a * hung.a + hung.b * hung.b);
    if (mau == 0) {
        cout << "Duong thang khong hop le (A = B = 0)." << endl;
    }
    else{
    double D = tu / mau;
    cout << "Khoang cach tu diem den duong thang la: " << D << endl;
    }
};
void menu() {
    cout << "\n=== CHUONG TRINH HINH HOC 2D ===\n";
    cout << "1. Tao diem\n";
    cout << "2. Tao doan thang\n";
    cout << "3. Tao duong thang\n";
    cout << "4. Tao parabol\n";
    cout << "5. Tao vector\n";
    cout << "6. Tao tam giac\n";
    cout << "7. Tao hinh chu nhat\n";
    cout << "8. Tao hinh tron\n";
    cout << "9. Tao da giac loi\n";
    cout << "0. Thoat\n";
    cout << "Chon: ";
};

int main() {
    int chon;
    
    do {
        menu();
        cin >> chon;
        
        if (chon == 1) {
            point p;
            p.nhap();
            cout << "\nDiem da tao: ";
            p.xuat();
            cout << endl;
        }
        else if (chon == 2) {
            segment s;
            s.nhap();
            cout << "\nDoan thang da tao:\n";
            s.xuat();
            dodai(s);
        }
        else if (chon == 3) {
            line l;
            l.nhap();
            cout << "\nDuong thang da tao:\n";
            l.xuat();
        }
        else if (chon == 4) {
            parabol p;
            p.nhap();
            cout << "\nParabol da tao:\n";
            p.xuat();
        }
        else if (chon == 5) {
            vector v;
            v.nhap();
            cout << "\nVector da tao:\n";
            v.xuat();
        }
        else if (chon == 6) {
            triangle t;
            t.nhap();
            cout << "\nTam giac da tao:\n";
            t.xuat();
        }
        else if (chon == 7) {
            rectangle r;
            r.nhap();
            cout << "\nHinh chu nhat da tao:\n";
            r.xuat();
        }
        else if (chon == 8) {
            circle c;
            c.nhap();
            cout << "\nHinh tron da tao:\n";
            c.xuat();
        }
        else if (chon == 9) {
            convexpoly poly;
            poly.nhap();
            cout << "\nDa giac loi da tao:\n";
            poly.xuat();
        }
        else if (chon == 0) {
            cout << "Tam biet!\n";
        }
        else {
            cout << "Chon sai! Thu lai.\n";
        }
        
        if (chon != 0) {
            cout << "\nNhan Enter de tiep tuc...";
            cin.ignore();
            cin.get();
        }
        
    } while (chon != 0);
    

    return 0;
}