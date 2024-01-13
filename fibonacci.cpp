#include <iostream>

using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

int main()
{
    int N, f1, f2 = 0, term, result = 1;

    cout << "음수가 아닌 정수를 입력하세요 : ";
    cin >> N;

    cout << "\n재귀의 경우 : ";

    for (int i = 0; i < N; i++) {
        cout << fibonacciRecursive(i) << " ";
    }

    cout << "\n\n반복문의 경우 : ";

    for (int i = 0; i < N; i++) {

        cout << result << " ";

        f1 = result;
        term = f1;
        result = f1 + f2;
        f2 = term;
    }

    return 0;
}