#include <iostream>
using namespace std;
class fact
{
    public:
    int factorial=1;
    fact(int a)//constructor
    {
        for(int i=1; i<=a ;i++)
        {
            factorial=factorial*i;
        }
    }
    void display()
    {
        cout<<"The Factorial is: "<<factorial;
    }
};
int main()
{
    int a;
    cout<<"Enter the number who's factorial is to be shown:";
    cin>>a;
    fact n1(a);
    n1.display();
    return 0;
}