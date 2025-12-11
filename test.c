#include<stdio.h>
int main()
{
	printf("Hello World!\n");
	return 0;
}
#include <stdio.h>

int add()
// 两数相减函数：返回 a - b 的结果
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1 = 10, num2 = 3;
    printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
    return 0;
}
