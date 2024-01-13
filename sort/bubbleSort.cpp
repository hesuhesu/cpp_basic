#include <iostream>

using namespace std;

int arr[1000001];

void bubbleSort(int list[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cout << "Array�� ũ�⸦ ������ �ּ��� : ";
    cin >> N;

    cout << "���ٿ� ���ڸ� �������� ����� ǥ�����ּ���. �տ������� �ԷµǸ� �����Ǹ� �νľ��մϴ�." << "\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, N);

    cout << "����� : ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}