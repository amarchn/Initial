//parameterized Constructor
#include <iostream>
#include <string.h>
using namespace std;
class point
{
    private:
    public:
    int x,y;
    point(int x1, int y1)
    {
        x=x1;
        y=y1;
    }
};
int main()
{
    point p1(10,15);
    cout<<p1.x<<endl<<p1.y;
    return 0;
}