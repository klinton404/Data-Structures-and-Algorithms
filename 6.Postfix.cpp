#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int evaluatePostfix(string expression)
{
    stack<int> s;
    stringstream ss(expression);
    string token;

    while (ss >> token)
    {
        if (token.size() == 1 && isOperator(token[0]))
        {
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            switch (token[0])
            {
            case '+':
                s.push(operand1 + operand2);
                break;
            case '-':
                s.push(operand1 - operand2);
                break;
            case '*':
                s.push(operand1 * operand2);
                break;
            case '/':
                s.push(operand1 / operand2);
                break;
            }
        }
        else
        {
            s.push(stoi(token));
        }
    }
    return s.top();
}

int main()
{
    string expression = "5 6 2 + * 12 4 / -";
    cout << "Postfix Expression: " << expression << endl;
    cout << "Result: " << evaluatePostfix(expression) << endl;
    return 0;
}
