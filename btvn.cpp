#include <iostream>
#include <cstdlib>
using namespace std;

int arithmetic(int n1, int n2, char op);
int main(int argc, char* argv[])
{
    int n1,n2;
    char op;

    n1 = atoi(argv[1]);
    op = argv[2][0];
    n2 = atoi(argv[3]);

    cout << arithmetic(n1, n2, op) << endl;
    return 0;
}

int arithmetic(int n1, int n2, char op)
{
    switch(op)
    {
    case '+':
        return (n1+n2);
    case '-':
        return (n1-n2);
    case 'x':
        return (n1*n2);
    case '/':
        if (n2 == 0)
            {cout << "Invalid divisor" << endl;
            exit(1);}
        else
            return n1/n2;

     case '%':
        if (n2 == 0)
            {cout << "Invalid divisor" << endl;
            exit(1);}
        else
            return n1%n2;
     default:
        cout << "Invalid divisor" <<endl;
        exit(1);
    }
}
