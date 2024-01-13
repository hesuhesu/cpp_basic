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

    cout << "Array의 크기를 지정해 주세요 : ";
    cin >> N;

    cout << "밑줄에 숫자를 공백으로 띄워서 표현해주세요. 앞에서부터 입력되며 오버되면 인식안합니다." << "\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    selectSort(arr, N);

    cout << "결과는 : ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}