#include <iostream>
#include <string.h>
using namespace std;
class number
{
    public:
    int a,b;
    number ()
    {
        a=10;
        b=15;
    }
};
int main()
{
    number n1;
    cout<<"a:"<<n1.a<<endl<<"b:"<<n1.b;
    return 0;
}

