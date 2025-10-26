#include <iostream>
using namespace std;

class Beta; class Gamma;

class Alpha {
    int a;
public:
    Alpha(int val) : a(val) {}
    friend void printSum(Alpha, Beta, Gamma);
};

class Beta {
    int b;
public:
    Beta(int val) : b(val) {}
    friend void printSum(Alpha, Beta, Gamma);
};

class Gamma {
    int c;
public:
    Gamma(int val) : c(val) {}
    friend void printSum(Alpha, Beta, Gamma);
};

void printSum(Alpha x, Beta y, Gamma z) {
    cout << "Sum: " << x.a + y.b + z.c << endl;
}

int main() {
    Alpha a(10); Beta b(20); Gamma c(30);
    printSum(a, b, c);
    return 0;
}