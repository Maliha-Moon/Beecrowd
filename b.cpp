#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; caseNumber++) {
        long long S;
        cin >> S;

        // Calculate the side length (N) of the square that contains the S-th cell
        long long root = ceil(sqrt(S));
        if (root % 2 == 0) {
            root++; // Make sure N is odd to simplify calculations
        }

        long long mid = (root - 1) / 2; // Calculate the middle point of the square

        // Calculate the position (x, y) within the square
        long long positionInSquare = S - (root - 2) * (root - 2);
        long long x, y;

        if (positionInSquare <= root - 1) {
            // On the right edge of the square
            x = mid + 1;
            y = mid - (positionInSquare - 1);
        } else if (positionInSquare <= 2 * (root - 1)) {
            // On the top edge of the square
            x = mid - (positionInSquare - (root - 1));
            y = -mid;
        } else if (positionInSquare <= 3 * (root - 1)) {
            
            x = -mid;
            y = -mid + (positionInSquare - 2 * (root - 1));
        } else {
            // On the bottom edge of the square
            x = -mid + (positionInSquare - 3 * (root - 1));
            y = mid + 1;
        }

        cout << "Case " << caseNumber << ": " << x << " " << y << endl;
    }

    return 0;
}
