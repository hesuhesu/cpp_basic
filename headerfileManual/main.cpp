#include <iostream>
#include "mathSolve.h"

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B;

    cout << "정수 A와 B를 한 칸 띄우고 입력해주세요 : ";
    cin >> A >> B;

    cout << sum(A,B) << "\n";
    cout << divide(A,B);

    return 0;
}