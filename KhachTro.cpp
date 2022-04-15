#include "KhachTro.h"

KhachTro::KhachTro()
{

}

KhachTro::KhachTro(string hoTen, int CMND, int soNgayTro, string loaiPhong, double giaPhong) {
   this->hoTen = hoTen;
   this->CMND = CMND;
   this->soNgayTro = soNgayTro;
   this->loaiPhong = loaiPhong;
   this->giaPhong = giaPhong;
}

// ham nhap
void KhachTro::nhapThongTin() {
   Nguoi::nhapThongTin();

   cout <<"\tNhap so ngay tro: "; cin >> soNgayTro;
   fflush(stdin);
   cout <<"\tNhap loai phong: "; getline(cin, loaiPhong);
   cout <<"\tNhap gia phong: "; cin >> giaPhong;
   fflush(stdin);
}

// ham hien thi
void KhachTro::hienThiThongTin() {
   Nguoi::hienThiThongTin();
   cout << "\tSo ngay tro: " << soNgayTro << endl;
   cout << "\tLoai phong: " << loaiPhong << endl;
   cout << "\tGia phong: " << giaPhong<< endl;
}

// ham lay ra thong tin so ngay tro
int KhachTro::getSoNgayTro() {
   return soNgayTro;
}

// ham lay thong tin gia phong
double KhachTro::getGiaPhong() {
   return giaPhong;
}
