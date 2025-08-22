#include <iostream>
using namespace std;

class rectangle {
private:
    float length;
    float width;
public:
    void dim(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }
};
int main() {
    rectangle rect;
    rect.dim(5.7, 3.2);        
    cout << "Area of rectangle: " << rect.area() << endl;  
    return 0;
}
