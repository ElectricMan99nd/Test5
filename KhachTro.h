#ifndef KHACHTRO_H
#define KHACHTRO_H

#include "Nguoi.h"

class KhachTro: public Nguoi
{
    // thuoc tinh
         int soNgayTro;
         string loaiPhong;
         double giaPhong;
public:
        // phuong thuc
        // ham khoi tao khong doi so
         KhachTro();
        // ham khoi tao co doi so
         KhachTro(string hoTen, int CMND, int soNgayTro, string loaiPhong, double giaPhong);

        // ham nhap
         void nhapThongTin();

        // ham hien thi
         void hienThiThongTin();

        // ham lay ra thong tin so ngay tro
         int getSoNgayTro();

        // ham lay thong tin gia phong
         double getGiaPhong();
};

#endif // KHACHTRO_H
