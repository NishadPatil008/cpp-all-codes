#include <iostream>
#include <string>
using namespace std;
template <typename T>
T square(T x) {
    return x * x;
}
template <>
string square<string>(string s) {
    return s + s;
}
int main() {
    cout << square(5) << endl;
    cout << square(string("Aaa")) << endl;
    return 0;
}