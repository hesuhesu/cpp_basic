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

    cout << "������ �ƴ� ������ �Է��ϼ��� : ";
    cin >> N;

    cout << "\n����� ��� : ";

    for (int i = 0; i < N; i++) {
        cout << fibonacciRecursive(i) << " ";
    }

    cout << "\n\n�ݺ����� ��� : ";

    for (int i = 0; i < N; i++) {

        cout << result << " ";

        f1 = result;
        term = f1;
        result = f1 + f2;
        f2 = term;
    }

    return 0;
}