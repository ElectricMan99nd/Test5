#ifndef KHACHSAN_H
#define KHACHSAN_H

#include "KhachTro.h"
#include <list>

class KhachSan
{
    // thuoc tinh
         list<KhachTro> ds;
         KhachTro khach;
public:
        // phuong thuc
        // ham khoi tao
         KhachSan();

        // ham them khach tro vao khach san
         void themKhachTro(KhachTro kt);

        // ham nhap danh sach
         void nhapDanhSach();

        // ham hien thi
         void hienThiDanhSach();

        // ham tinh tien
         double tinhTien(int CMND);
         void hienThiThongTinKhachThanhToan(int CMND);
};

#endif // KHACHSAN_H
