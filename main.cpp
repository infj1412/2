#include <stdio.h>

int main() {
    double num1, num2;

    // 사용자로부터 두 숫자 입력 받기
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%lf", &num1);
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%lf", &num2);

    // 덧셈 결과 출력
    printf("결과: %.2lf\n", num1 + num2);

    return 0;
}
