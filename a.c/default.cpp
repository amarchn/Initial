//default constuctor
#include <iostream>
using namespace std;
class num
{
    public:
    int a, b;
    num()
    {
        a=10,b=15;
    }
};
int main()
{
    num n1;
    cout<<"a: "<<n1.a<<endl<<"b: "<<n1.b;
    return 0;
}

