#include "Nguoi.h"

Nguoi::Nguoi()
{

}

// ham khoi tao co doi so
Nguoi::Nguoi(string hoTen, string ngaySinh, int CMND) {
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->CMND = CMND;
}

// ham nhap
void Nguoi::nhapThongTin() {
    cout << "\tNhap ho ten: "; getline(cin, hoTen);
    cout << "\tNhap ngay sinh: "; getline(cin, ngaySinh);
    cout << "\tNhap CMND: "; cin >> CMND;
    fflush(stdin);
}

// ham hien thi
void Nguoi::hienThiThongTin() {
     cout << "\tHo ten: " << hoTen << endl;
     cout << "\tNgay Sinh: " << ngaySinh << endl;
     cout << "\tCMND: " << CMND << endl;
}

// ham lay ra thong tin CMND
int Nguoi::getCMND() {
    return CMND;
}
