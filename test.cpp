#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
//
//
//
#include <iostream>
using namespace std;

int main() {
    int hour = 5;

    int minutes = hour * 60;
    int seconds = hour * 60 * 60;

    cout << minutes << endl;
    cout << seconds << endl;

    return 0;
}
