#include <stdio.h>

// 加法函数
int add(int a, int b) {
    return a + b;
}

// 减法函数
int subtract(int a, int b) {
    return a - b;
}

// 除法函数（处理除数为0的错误，返回整数商）
int divide(int a, int b) {
    if (b == 0) {
        printf("错误：除数不能为0！\n");
        return 0; // 除数为0时返回0（可根据需求调整）
    }
    return a / b;
}

// 主函数（唯一入口）
int main() {
    int num1 = 10, num2 = 3;
    
    // 输出加法、减法、除法结果
    printf("%d + %d = %d\n", num1, num2, add(num1, num2));
    printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("%d ÷ %d = %d\n", num1, num2, divide(num1, num2));

    return 0;
}
