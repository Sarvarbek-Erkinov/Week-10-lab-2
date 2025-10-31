#include <cstring>
#include <iostream>

using namespace std;

// int main() {
//
//     bool nonDescending = true;
//     int arr[4] = {10,5,4,8};
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] > arr[i+1]) {
//             nonDescending = false;
//             break;
//         }
//     }
//
//     if (nonDescending) {
//         cout << "Yes" << endl;
//     }else {
//         cout << "No" << endl;
//     }
//
//     return 0;
// }

// void reverseArray(int arr[], int start, int end) {
//     for (int i = end - 1; i >= start; i-- ) {
//         cout << arr[i] << " ";
//     }
// }
//
// int main() {
//
//     int arr[5] = {7,6,8,1,0};
//     reverseArray(arr, 0, 5);
//
//     return 0;
// }

// int main() {
//
//     ctime(0);
//     int arr[1000];
//
//     for (int i = 0; i < 1000; i++ ) {
//         arr[i] = rand() % 6 + 1;
//     }
//
//     for (int i = 1; i <= 6; i++) {
//         int count = 0;
//         for (int j = 0; j < 1000; j++ ) {
//             if (arr[j] == i) {
//                 count++;
//             }
//         }
//         cout << i << " " << count << endl;
//     }
//
//     return 0;
// }

// With a little bit autopilot help below one only just a little bit

// int main() {
//
//     int n = 5;
//     int arr[] = {4,0,-3,5,2};
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (arr[i] < arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//
//     return 0;
// }

