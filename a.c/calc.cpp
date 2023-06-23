# include <iostream>
using namespace std;
class calc
{
    public:
    char op;
    float num1, num2;
    calc()
    {

    }
    void get_data()
    {
    cout << "Enter operator: +, -, *, /: ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    }
    void calculator()
    {
    switch(op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            cout << "Error!";
            break;
    }
    }
};
int main()
{
    calc c1;
    c1.get_data();
    c1.calculator();
    return 0;
}