#include <iostream>

using namespace std;


//void printInfo(int val) {
//    cout << "int: " << val << endl;
//}
void printInfo(float val) {
    cout << "float: " << val << endl;
}

void printInfo(const int &w) {
    cout << "Adress: " << &w << ", wartość: " << w << endl;
}

int main() {

    int a = 5;
    int& w = a;
    w = 5;
    printInfo(w);
    return 0;
}
