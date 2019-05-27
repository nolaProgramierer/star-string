/*
 * This program takes in an integer 'n'
 * and returns a string with 2 to the n number of '*'s
 */

#include "console.h"
#include <simpio.h>
using namespace std;

/*
 * Function prototypes
 */
string starString(int n);

int main() {
    cout << "Please enter an integer:" << endl;
    cout << "To exit enter '0'" << endl;
    while (true) {
        int n = getInteger("Please enter an integer:");
        if (n == 0) break;
        else {
            cout << starString(n) << endl;
        }
    }

    return 0;
}
string starString(int n) {
    if (n == 0) {
        return "*";
    }
    else {
       string s = starString(n - 1);
       return s + s;
    }
}
