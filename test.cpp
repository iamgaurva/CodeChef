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
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1 = "Naruto";
    string word2 = "Sasuke";

    int totalLength = word1.length() + word2.length();

    cout << totalLength;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << evenSum - oddSum;

    return 0;
}


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int L, R;
    cin >> L >> R;

    for(int i = L; i <= R; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}


