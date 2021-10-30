#include <stdio.h>
#include <iostream>
//ĐỀ : Thay thế các phần tử âm có trong mảng bằng giá trị 0 : 

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

        //Chạy vòng lặp để xét từng vị trí trong mảng xem có phần tử nào < 0 hay không nếu nó thì set nó = 0 
    for(int i = 0; i < n ; i++){      
        if(a[i] < 0)
        {
            a[i] = 0;
        }  
    }

    //In ra lại mảng để xem ta đã set đúng hay không : 
    cout << "Mang cua ban sau khi thay doi la : "; 
        for(int i = 0; i < n ; i++){      
            cout << a[i] << " ";
        }

    cout << endl;
    return 0;
}
