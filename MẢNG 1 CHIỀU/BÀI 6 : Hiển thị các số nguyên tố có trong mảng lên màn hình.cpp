#include <stdio.h>
#include <iostream>
//ĐỀ : IN RA CÁC SỐ NGUYÊN TỐ TRONG MẢNG : -> SỐ NGUYÊN TỐ LÀ SỐ CHỈ CHIA ĐƯỢC CHO 1 VÀ CHÍNH NÓ -> ƯỚC SỐ = 2 -> VD : 2,3,5,7,... 

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

        cout << "Cac so nguyen to trong mang la : ";
        //Chạy vòng lặp lớn để bắt đầu xét từng phần tử trong mảng đóng vai trò là số bị chia xem có phải số nguyên tố hay không :
        for(int i = 0; i < n ; i++){      
            int dem = 0;                        //Đây là kỹ thuật ghi nhớ để ghi nhận số lần chia hết của từng phần tử nếu dem = 2 thì phần tử đó là số nguyên tố  
            //Vòng lặp nhỏ đóng vai trò là số chia để chia các phần tử trong vòng lặp lớn :
            for(int j = 1; j <= a[i]; j++)
            {
                if(a[i] % j == 0)
                {
                    dem = dem + 1;
                }

                //Nếu dem > 2 thì phần tử này kh phải số nguyên tố lập tức thoát vòng lặp : 
                if(dem > 2)
                {
                    break;
                }
            }
            //Nếu đến đây biến dem vẫn bằng 2 thì phần tử đang xét chính là số nguyên tố -> In ra : 
            if (dem == 2)
            {
                cout << a[i] << " ";
            }
        }
    
    cout << endl;
    return 0;
}
