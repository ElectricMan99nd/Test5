#ifndef NGUOI_H
#define NGUOI_H

#include <iostream>
#include <string.h>
using namespace std;

class Nguoi
{
protected:

    // thuoc tinh
         string hoTen;
         string ngaySinh;
         int CMND;
public:

        // phuong thuc
        // ham khoi tao khong doi so
         Nguoi();

        // ham khoi tao co doi so
         Nguoi(string hoTen, string ngaySinh, int CMND);

        // ham nhap
         void nhapThongTin();
        // ham hien thi
         void hienThiThongTin();

        // ham lay ra thong tin CMND
         int getCMND();
};

#endif // NGUOI_H
