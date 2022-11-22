#include <iostream>
using namespace std;

int main() {
    int n=0, a=0, b=1;
    cin>> n;
    int i=2;
    if (n>=2){
        cout << 1 << endl;
        while (i++ <= n) {
            cout << a+b << endl;
            if (a < b)
                a += b;
            else
                b += a;
        }
    }
    else {
        cout << "errore" << endl;
    }

    return 0;
}
