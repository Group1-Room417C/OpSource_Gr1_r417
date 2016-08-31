#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
class nhan_vien
{

public:
    int don_vi;
    char ho_ten[20];
    int nam_sinh;
    nhan_vien(void);
    virtual void nhap()=0;
    virtual long tinh_luong()=0;
    virtual void hien_thi()=0;
};
nhan_vien::nhan_vien()
{

}
class cong_nhan : public nhan_vien
{
private:
    int luong;
    int ngay_cong;
public:
    cong_nhan(void);
    void nhap();
    void hien_thi();
    long tinh_luong();
};
cong_nhan::cong_nhan()
{

}
void cong_nhan::nhap()
{
   cout << "Nhap ho ten cong nhan: ";
   fflush(stdin);
   gets(ho_ten) ;
   cout<<endl << "Nhap nam sinh: ";
   cin>>nam_sinh;
   cout <<endl <<" Nhap luong cong nhan : ";
   cin >> luong;
   cout << endl << "Nhap ngay cong:";
   cin>> ngay_cong;
}
void cong_nhan::hien_thi()
{
    cout <<" Ho ten cong nhan: " << ho_ten;
    cout <<endl << "nam sinh : " <<nam_sinh;
    cout << endl <<" luong : " << luong;
    cout << endl << "ngay cong :" << ngay_cong;
}
long cong_nhan::tinh_luong()
{
    return (luong * ngay_cong)/26;
}
class quan_ly: public nhan_vien
{
   private:
       char chuc_vu[20];
       int he_so_luong;
       int phu_cap;
   public:
      quan_ly(void);
       void nhap();
       long tinh_luong();
       void hien_thi();
};
quan_ly::quan_ly()
{

}
void quan_ly::nhap()
{
   cout <<endl<< "Nhap ho ten quan ly: ";
   fflush(stdin);
   gets(ho_ten) ;
   cout<<endl << "Nhap nam sinh: ";
   cin>>nam_sinh;
   cout <<endl <<" Nhap chuc vi : ";
   fflush(stdin);
   gets(chuc_vu);
   cout <<endl << "Nhap he so luong: ";
   cin>> he_so_luong;
   cout << endl << "Nhap tien phu cap : ";
   cin >> phu_cap;
}
void quan_ly::hien_thi()
{
    cout <<endl<<" Ho ten nguoi quan ly: " << ho_ten;
    cout <<endl << "nam sinh : " <<nam_sinh;

    cout <<endl << "chuc vu:" << chuc_vu;
    cout <<endl << "He so luong :" << he_so_luong;
    cout << endl << "Tien phu cap: " <<phu_cap;
}
long quan_ly::tinh_luong()
{
    return (he_so_luong * 440000 + phu_cap);
}

int main()
{
    int so,n=1;
   // nhan_vien *a;
    cong_nhan b[10];
    quan_ly   c[10];
    do

    {
        cout<< endl;
    cout<<"====================================================="<<endl;
    cout<<"* CHUONG TRINH NHAP THONG TIN 10 NHAN VIEN hoac Quan li *"<<endl;
    cout<<"====================================================="<<endl;
    cout<<"     1.Nhan so 1 de nhap cong nhan .  ";
    cout<<endl<<"     2.Nhan so 2 de nhap quan ly   .  "<<endl;

    cin>>so;
    switch(so)
    {
    case 1:
        {
            b[n].nhap();
            b[n].hien_thi();
            cout <<endl <<"luong :"<<b[n].tinh_luong();
            n++;
            break;
        }
     case 2:
        {
            c[n].nhap();
            c[n].hien_thi();
            cout <<endl <<"luong :"<<c[n].tinh_luong();
            n++;
            break;
        }
    }
    }
    while(n<=3);
    long min,max;
    if(b[1].tinh_luong()==NULL)
        {
            min=c[1].tinh_luong();
            max=c[1].tinh_luong();
        }
    else
    {
        min=b[1].tinh_luong();
        max=b[1].tinh_luong();
    }
    for(int x=1;x <=n;x++)
        for(int y=x+1;y<=n;y++)
    {

            if(b[y].tinh_luong()==NULL)
            {
                if(c[y].tinh_luong()<min)
                {
                    min=c[y].tinh_luong();
                }
                if(c[x].tinh_luong()>max)
                {
                    max=c[y].tinh_luong();
                }
            }
            else
            {
                if(b[y].tinh_luong()<min)
                {
                    min=b[y].tinh_luong();
                }
                if(b[x].tinh_luong()>max)
                {
                    max=b[y].tinh_luong();
                }
            }
    }
        cout<<endl <<"Min :" <<min;
        cout<<endl <<"Max :" <<max;


        return 0;
}
