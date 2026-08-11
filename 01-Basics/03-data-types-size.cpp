#include <iostream>
using namespace std;

int main() {
    cout << "char        : " << sizeof(char)        << " byte" << endl; // 1 byte
    cout << "short       : " << sizeof(short)       << " bytes" << endl; // 2 bytes
    cout << "int         : " << sizeof(int)         << " bytes" << endl; // 4 bytes
    cout << "long        : " << sizeof(long)        << " bytes" << endl; // 4 or 8 bytes
    cout << "long long   : " << sizeof(long long)   << " bytes" << endl; // 8 bytes

    cout << "float       : " << sizeof(float)       << " bytes" << endl; // 4 bytes
    cout << "double      : " << sizeof(double)      << " bytes" << endl; // 8 bytes
    cout << "long double : " << sizeof(long double) << " bytes" << endl; // 8, 12, or 16 bytes

    cout << "bool        : " << sizeof(bool)        << " byte" << endl; // 1 byte

    return 0;
}