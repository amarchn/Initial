#include <iostream>
#include <string.h>
using namespace std;
class student
{
    public:
    string studentname, classname;
    int rollno;
    void data();
};
void student::data()
{
    cin>>studentname>>classname>>rollno;
    cout<<studentname<<"\t"<<classname<<"\t"<<rollno<<"\n";
}
int main()
{
    student s1,s2;
    cout<<"Enter the StudentName, Classname and Roll no:\n";
    s1.data();
    return 0;
}