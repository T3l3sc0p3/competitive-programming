#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n <= 1) {
        cout << "NOT FOUND";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (arr[0] == arr[i]) {
            count++;
        }
        else {
            break;
        }
    }
    if (count == n - 1) {
        cout << "NOT FOUND";
    }
    else {
        cout << arr[count + 1];
    }
    delete[]arr;
    return 0;
}