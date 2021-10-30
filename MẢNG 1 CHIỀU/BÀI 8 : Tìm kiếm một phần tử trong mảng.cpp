#include <stdio.h>
#include <iostream>
//ĐỀ : TÌM KIẾM PHẦN TỬ TRONG MẢNG VÀ IN RA VỊ TRÍ : 

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

    //B5 : Nhập giá trị x muốn tìm kiếm : 

    int x;
    cout << "Nhap gia tri ban muon tim trong mang :";
    cin >> x;

    cout << endl;

    //B6 : Thực thi bài toán : 

        int dk = 0;         //-> Biến dk dùng để đánh dấu xem đã tìm được x trong mảng hay không nếu có dk = 1

        //Xét từng phần tử trong mảng và so sánh với x và in ra kết quả tìm kiếm :
        for(int i = 0; i < n; i++){      
            if(a[i] == x)
            {
                cout << "Vi tri cua gia tri " << x << " ban muon tim la :" << i + 1 << endl;
                dk = 1;
            }  
        }
        
        if(dk == 0)
        {
            cout << "Gia tri " << x << " ban muon tim khong ton ta trong mang !" << endl;
        }

    cout << endl;
    return 0;
}
