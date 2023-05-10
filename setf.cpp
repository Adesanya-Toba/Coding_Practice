#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::hex, ios::basefield);
    cout << 100 << " ";
    cout.unsetf(ios::hex);
    cout << 100 << endl;

    int x = 10;
    int b , c;

    x =b , c = x;
    int& ref = x;

    ref = 20;
    cout << x;
    x = 30;
    cout << ref << endl;

    int t[2][3] = {{3,2,1,}, {1,2,3}};

    cout << sizeof(t) << " ";
    cout << sizeof(t[1][1]) << endl;
    

    static int arry [] = {1,2,3};
    cout << arry[-1] << " "<< arry[5] << endl;

    return 0;
}