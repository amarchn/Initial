#include  <iostream>
#include <string.h>
using namespace std;
class employee
{
    private:
    public:
    string name;
    int age, id, salary;
    void getdata()
    {
        cin>>name>>age>>id>>salary;
    }

    void display()
    {
        cout<<"\n\t\t"<<name<<"\t"<<age<<"\t"<<id<<"\t\t"<<salary;
    }
}
c1,c2;
int main()
{
    cout<<"Input the Name,Age,Employee ID and Salary for Employee:"<<"\n";
    c1.getdata();
    c2.getdata();
    cout<<"**************Employee data as follows:**************"<<"\n";
    cout<<"\t\t"<<"Name"<<"\t"<<"Age\t"<<"Employee ID\t"<<"Salary";
    c1.display();
    c2.display();
    return 0;
}