#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
#pragma pack(1)
struct SinhVien{
	int MHS;
	char HoTen[30];
	int NamSinh;
    float DTB;
}
typedef struct SinhVien SV
void Nhap(SV);
void Xuat(SV);
void SXDTB();


