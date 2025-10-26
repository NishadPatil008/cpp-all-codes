000000000000000000000000000000000#include <iostream>
using namespace std;

class Cube;

class Box {
    int volume;
public:
    Box(int v) : volume(v) {}
    friend void findGreater(Box, Cube);
};

class Cube {
    int volume;
public:
    Cube(int v) : volume(v) {}
    friend void findGreater(Box, Cube);
};

void findGreater(Box b, Cube c) {
    cout << "Greater volume: " << (b.volume > c.volume ? b.volume : c.volume) << endl;
}

int main() {
    Box box(118);
    Cube cube(90);
    findGreater(box, cube);
    return 0;
}