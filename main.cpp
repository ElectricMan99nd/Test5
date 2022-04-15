#include "KhachSan.h"

int main(){
    KhachSan quanLy;
    int cmnd;
    quanLy.nhapDanhSach();
    cout << "**********Danh sach khach tro**********" << endl;
    quanLy.hienThiDanhSach();
    cout << "Nhap vao cmnd khach tro can tinh tien: ";
    cin >> cmnd;
    cout << "Thong tin khach tro tra phong:" << endl;
    quanLy.hienThiThongTinKhachThanhToan(cmnd);
    cout << "==> Tong tien la: " << quanLy.tinhTien(cmnd) << endl;
}
