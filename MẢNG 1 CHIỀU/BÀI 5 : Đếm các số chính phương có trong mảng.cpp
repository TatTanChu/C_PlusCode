#include <stdio.h>
#include <iostream>
//ĐỀ : ĐẾM CÁC SỐ CHÍNH PHƯƠNG TRONG MẢNG : -> SỐ CHÍNH PHƯƠNG LÀ SỐ : 2^2. 3^2, 4^2, X^2 

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

    int dem = 0;                //Đóng vai trò là biến khai báo số phần tử là số chính phương trong mảng :

    //B5 : Thực thi bài toán : 
        //Chạy vòng lặp lớn để bắt đầu xét từng phần tử trong mảng đóng vai trò là số bị chia xem có phải số chính phương hay không :
        for(int i = 0; i < n ; i++){        
            //Vòng lặp nhỏ đóng vai trò là số chia để chia các phần tử trong vòng lặp lớn :
            for(int j = 1; j <= a[i]; j++)
            {
                if(j * j == a[i])
                {
                    dem = dem + 1;
                }
            }
        }

        //Xuất kết quả :
        cout << "Tong cac so chinh phuong co trong mang la : " << dem; 
    
    cout << endl;
    return 0;
}
