#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:

    Box(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void setDimensions(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int volume()
    {
        return length * width * height;
    }
};

int main()
{
   
    Box b1(2,3,4);

    cout << "Volume after constructor initialization: "
         << b1.volume() << endl;

    b1.setDimensions(5,6,7);

    cout << "Volume after setDimensions(): "
         << b1.volume() << endl;

    return 0;
}