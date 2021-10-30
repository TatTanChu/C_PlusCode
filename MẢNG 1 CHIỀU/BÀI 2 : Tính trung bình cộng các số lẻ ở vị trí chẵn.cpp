#include <stdio.h>
#include <iostream>
//ĐỀ : TÍNH TRUNG BÌNH CÁC PHẦN TỬ Ở VỊ TRÍ CHẴN : 

//-> Đây là cách chúng ta khai báo 1 hằng số MAX cố định : 

#define MAX 100

using namespace std;

int main()
{
    //B1 : Khai báo mảng theo kiểu số nguyên : 
    int a[MAX]; 

    //B2 :Nhập số phần tử tối đa trong mảng :
    int n = 0; 
    cout << "Moi nhap n :"; 
    cin >> n; 

    //B3 : Chạy vòng lặp để tiến hành nhập các giá trị số nguyên của từng phần tử trong mảng : 
    for(int i = 0; i < n ; i++){
        cout << "Phan tu thu #" << i + 1 << " :";
        cin >> a[i]; 
    }

    //B4 : In ra các giá trị phần tử trong mảng vừa nhập : 

    cout << "Cac phan tu trong mang cua ban la : ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    //B5 : Thực thi bài toán : 
        //Tìm các phần tử số ở vị trí chẵn và cộng dồn vào biến 'tong' :
        int tong = 0;           //-> Cộng dồn các giá trị của phần tử vị trí chẵn 
        int dem = 0;            //-> Đếm các phần tử ở vị trí chẵn để chia trung bình
        for(int i = 0; i < n ; i++){
            //Nếu phần tử ở vị trí chẵn : 
            if ((i + 1) % 2 == 0)
            {
                tong = tong + a[i];
                dem = dem + 1;
            }
        }

        //Tính và in ra kết quả : 
        float kq = (float)tong/dem;
        cout << "Ket qua la : " << kq << endl;
    
    cout << endl;
    return 0;
}
