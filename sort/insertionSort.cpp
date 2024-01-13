#include <iostream>
using namespace std;

int arr[1000001];

void insertionSort(int list[], int n) {
    int key;

    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (list[j] > list[j + 1]) {
                key = list[j];
                list[j] = list[j + 1];
                list[j + 1] = key;
            }
            else {
                break;
            }
        }

        cout << i << "번째 회전 : ";
        for (int k = 0; k < n; k++) {
            cout << list[k] << " ";
        }
        cout << "\n";
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cout << "Array의 크기를 지정해 주세요 : ";
    cin >> N;

    cout << "밑줄에 숫자를 공백으로 띄워서 표현해주세요. 앞에서부터 입력되며 오버되면 인식안합니다." << "\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << "---------------------------------------------------------\n";

    insertionSort(arr, N);

    cout << "결과는 : ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}