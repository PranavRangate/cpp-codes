#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    Point operator+(const Point& other) const {
        int new_x = x + other.x;
        int new_y = y + other.y;
        return Point(new_x, new_y);
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point point1(1, 2);
    Point point2(3, 4);

    Point result = point1 + point2;

    result.display(); 

    return 0;
}
