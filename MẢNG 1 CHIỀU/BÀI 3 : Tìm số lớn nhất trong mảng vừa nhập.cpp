#include <stdio.h>
#include <iostream>
//ĐỀ : TÌM SỐ LỚN NHẤT TRONG MẢNG : 

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
        int max = a[0];                     //-> Gán phần tử đầu tiên trong mảng có giá trị lớn nhất để làm mốc so sánh cho các phần tử sau. 
        for(int i = 1; i < n ; i++){        // i sẽ bắt đầu từ 1 vì a[0] mình đã gán trước đó nên bỏ qua
            //Nếu phần tử đang xét lớn hơn giá trị max hiện tại : 
            if (a[i] > max)
            {
                max = a[i];
            }
        }

        //Tính và in ra kết quả : 
        cout << "Ket qua la : " << max << endl;
    
    cout << endl;
    return 0;
}
