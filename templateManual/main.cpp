#include <iostream>
#include "mathSolve.h"
using namespace std;

template <class T>
//template <typename T> //혹은 이렇게

class Calcu
{
private:
    T num1;
    T num2;
public:
    Calcu(T num1, T num2) {
        this->num1 = num1;
        this->num2 = num2;
    }
    T GetAdd() {
        return num1 + num2;
    }
};

template <typename T2>
T2 tem_add(T2 x, T2 y) {
    return x + y;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Calcu<int> calcu1(10, 20);
    cout << calcu1.GetAdd() << endl;

    Calcu<double> calcu2(10.52, 20.24);
    cout << calcu2.GetAdd() << "\n------------------------------------\n";

    int num1 = 10, num2 = 20;
    cout << tem_add(num1, num2) << endl;

    double num3 = 10.52, num4 = 20.24;
    cout << tem_add(num3, num4) << "\n------------------------------------\n";

    double a1 = 3.005;
    double a2 = 4.84;

    cout << "헤더를 이용한 template 함수 덧셈 결과값 : " << sum(a1, a2) << "\n"; 
    cout << "헤더를 이용한 template 함수 나눗셈 결과값 : " << divide(a1, a2) << "\n";
    cout << "헤더를 이용한 template 함수 최대값 결과값 : " << max(a1, a2) << "\n";
    // template를 헤더파일에 삽입하려면 구현까지 마친 상태로 기입.
    // 단 기존에 구현하던 cpp 파일은 존재하지 않아야함.

    return 0;
}