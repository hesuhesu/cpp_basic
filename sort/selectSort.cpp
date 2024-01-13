#include <iostream>

using namespace std;

int arr[1000001];

void selectSort(int list[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        int num = i;
        for (j = i + 1; j < n; j++) {
            if (list[num] > list[j]) {
                num = j;
            }
        }
        if (num != i) {
            temp = list[num];
            list[num] = list[i];
            list[i] = temp;
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

    selectSort(arr, N);

    cout << "����� : ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}