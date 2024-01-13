#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int arr[], int size, int target)
{
    int count = 0;
    int low = 0;
    int high = size - 1;
    int mid = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (target < arr[mid]) {
            high = mid - 1;
        }
        else if (target > arr[mid]) {
            low = mid + 1;
        }
        else {
            cout << "검색 결과 index : " << mid;
            return 0;
        }
    }
    cout << "검색 결과에 해당 숫자 없음";
    return 0;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = { 1,2,5,7,9,8,17,11,20,100 };
    int searchNum;

    cout << "검색할 숫자를 입력 : ";
    cin >> searchNum;
    sort(arr, arr + 10); // sort

    BinarySearch(arr, 10, searchNum);

    return 0;
}