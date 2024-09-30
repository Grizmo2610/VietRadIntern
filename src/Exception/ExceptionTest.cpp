#include <iostream>
#include <vector>
#include <random>
using namespace std;

// void userException() {
//     int size = 5;
//     vector<int> v(size);
//     for (int i = 0; i < size; i++) {
//         while (true) {
//             try {
//                 cin >> v[i];
//                 break;
//             } catch () {
//         }
//
//     }
// }
int main() {
    int a = 3, b = 0;
    try {
        if (b != 0) {
            cout << a / b << endl; // Không bao giờ xảy ra vì b = 0
        } else {
            throw logic_error("error: b cannot be zero");
        }
    } catch (logic_error &e) { // Sử dụng tham chiếu để tránh sao chép
        cout << e.what() << endl;
        cout << a + a << endl; // Kết quả sẽ là 6
    }
    return 0;
}