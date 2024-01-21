#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements: ";
    cin >> a;

    int arr[a];
    for(int i = 0; i < a; i++) {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }

    int max1 = arr[0];
    int max2 = INT_MIN;

    for(int i = 0; i < a; i++) {
        if (max1<arr[i]) {
            max2 = max1;
            max1 = arr[i];
        } else if (max2 <arr[i]&& max1>arr[i]) {
            max2 = arr[i];
        }
    }

    cout << "First maximum: " << max1 << endl;
    cout << "Second maximum: " << max2 << endl;

    return 0;
}
