#include <iostream>

using namespace std;

int giaithua(int n)
{
    if (n<=1)
         return 1;
    return n * giaithua(n - 1);
}

int main()
{
    double dtb;
    int n;
    cin >> dtb;
    string kq1 = (dtb>=8)? "Gioi":((dtb>=6.5)&&(dtb<8)? "Kha":((dtb>=5)&&(dtb<6.5)? "TB":"Yeu") );
    cin >> n;
    cout << kq1 <<'\n';
    int kq2 = giaithua(n);
    cout << kq2;
    return 0;
}
