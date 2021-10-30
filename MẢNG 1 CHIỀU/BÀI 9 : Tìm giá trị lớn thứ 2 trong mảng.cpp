#include <stdio.h>
#include <iostream>
//ĐỀ : TÌM SỐ LỚN NHẤT THỨ 2 TRONG MẢNG : 

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

        //Sau đó ta tiến hành thực hiện việc tìm và in ra số lớn thứ 2 trong mảng : 
        int max_2 = 0;                      //Khởi tạo biến chứa giá trị lớn thứ 2 trong mảng nhưng chưa vội gán liền giá trị nào đó nằm trong mảng : 

        if(a[0] == max)                 //TH1 : nếu max nằm ở vị trí đầu tiên thì ta ghép max_2 cho vị trí kế tiếp
        {
            max_2 = a[1];
        }
        else
        {
            max_2 = a[0];               //TH2 : nếu max không nằm ở đầu mảng thì ta gán ngay giá trị 
        }

        //Chạy vòng lặp để xác định giá trị lớn thứ 2 : 
        for (int i = 0; i < n; i++)
        {
            if(a[i] > max_2 && a[i] != max)         //Nếu như phần tử đang xét lớn hơn max_2 và khác giá trị lớn nhất trong mảng là max -> Đây là giá trị lớn thú 2 !
            {
                max_2 = a[i];
            }
        }
    

        //Tính và in ra kết quả : 
        cout << "Ket qua la : " << max_2 << endl;
    
    cout << endl;
    return 0;
}
