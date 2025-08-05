#include <iostream>
using namespace std;


void printArr(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortChar(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] < curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}




int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(ch[0]);

    cout << "Before sorting: ";
    printArr(ch, n);

    sortChar(ch, n);

    cout << "After sorting: ";
    printArr(ch, n);

    return 0;
}
