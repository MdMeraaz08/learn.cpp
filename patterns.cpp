#include <iostream>
using namespace std;


void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


void pattern2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        int a = 1;
        for (int j = 0; j < i; j++) {
            cout << a++;
        }
        cout << endl;
    }
}


void pattern4(int n) {
    int a = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << a;
        }
        a++;
        cout << endl;
    }
}


void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << "*";
        }
        cout << endl;
    }
}


void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        int a = 1;
        for (int j = n; j > i; j--) {
            cout << a++;
        }
        cout << endl;
    }
}


void pattern7(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < n - i; k++) cout << " ";
        for (int j = 0; j < (2 * i - 1); j++) cout << "*";
        cout << endl;
    }
}


void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) cout << "*";
        cout << endl;
    }
}


void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}


void pattern10(int n) {
    pattern2(n);
    pattern5(n - 1);
}


void pattern11(int n) {
    for (int i = 0; i < n; i++) {
        int num = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
}


void pattern12(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j;
        for (int s = 1; s <= (2 * n) - (2 * i); s++) cout << " ";
        for (int j = i; j > 0; j--) cout << j;
        cout << endl;
    }
}


void pattern13(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}
void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch++;
        }
        cout << endl;
    }
}

void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        char a = 'A';
        for (int j = n; j > i; j--) {
            cout << a++;
        }
        cout << endl;
    }
}

void pattern16(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

void pattern17(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < n - i; k++) cout << " ";
        char ch = 'A';
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j < i) cout << ch++;
            else cout << ch--;
        }
        cout << endl;
    }
}

void pattern18(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + n - i;
        for (int j = 0; j < i; j++) {
            cout << (char)(ch + j) << " ";
        }
        cout << endl;
    }
}

void pattern19a(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) cout << "*";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = 1; j <= n - i + 1; j++) cout << "*";
        cout << endl;
    }
}

void pattern19b(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) cout << "*";
        for (int j = 1; j < n - i; j++) cout << "  ";
        for (int j = 0; j < i + 1; j++) cout << "*";
        cout << endl;
    }
}

void pattern19(int n) {
    pattern19a(n);
    pattern19b(n);
}


void pattern20a(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) cout << "*";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = 1; j <= n - i + 1; j++) cout << "*";
        cout << endl;
    }
}

void pattern20b(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < i + 1; j++) cout << "*";
        for (int j = 1; j < n - i; j++) cout << "  ";
        for (int j = 0; j < i + 1; j++) cout << "*";
        cout << endl;
    }
}

void pattern20(int n) {
    pattern20b(n);
    pattern20a(n);
}


void pattern21(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}


void pattern22(int n) {

}


int main() {
    int n ;
    cin>>n;
    pattern20(n);
    return 0;
}
