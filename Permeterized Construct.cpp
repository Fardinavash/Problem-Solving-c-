#include <iostream>
using namespace std;
class point
{
private:
    int x, y;
public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    point obj = point(20,30);
    cout << "1st value = " << obj.getX() << endl;
    cout << "2nd Value = " << obj.getY() << endl;
    return 0;
}
