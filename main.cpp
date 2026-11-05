#include <iostream>
using namespace std;
int main() {
  #include <iostream>
using namespace std;
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai > 90) {
        cout << "Grade A";
    }
    else if (nilai > 80) {
        cout << "Grade B";
    }
    else if (nilai > 70) {
        cout << "Grade C";
    }
    else {
        cout << "Grade D";
    }


    return 0;
}
