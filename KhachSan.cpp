#include "KhachSan.h"

KhachSan::KhachSan()
{

}

void KhachSan::themKhachTro(KhachTro kt) {
   ds.push_back(kt);
}

// ham nhap danh sach
void KhachSan::nhapDanhSach() {
   int soLuongKhach;
   cout << "Nhap vao so luong khach: "; cin >> soLuongKhach;
   fflush(stdin);
   cout << "***********Nhap vao thong tin khach tro**********" << endl;
   for (int i = 0; i < soLuongKhach; i++) {
      cout << "Khach tro thu " << (i +1)  << ":" << endl;
       khach.nhapThongTin();
       themKhachTro(khach);
   }
}

// ham hien thi
void KhachSan::hienThiDanhSach() {
    int i = 0;
   for (KhachTro khach : ds) {
       i++;
       cout << "Khach tro thu " << i << ":" << endl;
       khach.hienThiThongTin();
   }
}

// ham tinh tien
double KhachSan::tinhTien(int CMND) {
   double tien = 0;

   for (KhachTro khach : ds) {
       if (khach.getCMND() == CMND) {
           tien = khach.getSoNgayTro() * khach.getGiaPhong();
       }
   }

   return tien;
}

void KhachSan::hienThiThongTinKhachThanhToan(int CMND){
    for (KhachTro khach : ds) {
        if (khach.getCMND() == CMND) {
            khach.hienThiThongTin();
        }
    }
}





