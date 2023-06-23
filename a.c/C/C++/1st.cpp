#include  <iostream>
using namespace std;
class car
{
    private:
    public:
    int speed;
    char carname[10];
    void display()
    {
        cin>>carname;
        cout<<carname<<"\n"<<speed;
    }
};
int main()
{
    car c1;
    c1.speed=100;
    c1.display();
    return 0;
}
