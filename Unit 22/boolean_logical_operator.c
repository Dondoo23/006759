#include <stdio.h>
#include <stdbool.h>    // bool, true, false�� ���ǵ� ��� ����

int main()
{
    printf("%d\n", true && true);      // 1: true AND true�� 1
    printf("%d\n", true && false);     // 0: true AND false�� 0
    printf("%d\n", false && true);     // 0: false AND true�� 0
    printf("%d\n", false && false);    // 0: false AND false�� 0

    printf("%d\n", true || true);      // 1: true OR true�� 1
    printf("%d\n", true || false);     // 1: true OR false�� 1
    printf("%d\n", false || true);     // 1: false OR true�� 1
    printf("%d\n", false || false);    // 0: false OR false�� 0

    return 0;
}