#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Hàm kiểm tra xem một ký tự có phải là toán tử hay không
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Hàm thực hiện phép toán giữa hai số với một toán tử cho trước
int performOperation(char op, int operand1, int operand2) {
    if (op == '+')
        return operand1 + operand2;
    else if (op == '-')
        return operand1 - operand2;
    else if (op == '*')
        return operand1 * operand2;
    else if (op == '/')
        return operand1 / operand2;
    return 0;
}

// Hàm tính giá trị của biểu thức hậu tố
int evaluatePostfix(const string& exp) {
    stack<int> operands;

    for (char c : exp) {
        if (isdigit(c)) {
            // Nếu là số, đưa vào stack
            operands.push(c - '0'); // Chuyển ký tự số thành số nguyên
        } else if (isOperator(c)) {
            // Nếu là toán tử, lấy hai số từ stack và thực hiện phép toán
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = performOperation(c, operand1, operand2);
            // Đưa kết quả vào stack
            operands.push(result);
        }
    }

    // Kết quả cuối cùng sẽ nằm trên đỉnh stack
    return operands.top();
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Loại bỏ ký tự newline sau dòng chứa số lượng test cases

    while (T--) {
        string exp;
        getline(cin, exp);
        // Tính toán và in ra kết quả của biểu thức hậu tố
        cout << evaluatePostfix(exp) << endl;
    }

    return 0;
}