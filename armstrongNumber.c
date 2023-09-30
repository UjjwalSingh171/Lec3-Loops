#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Armstrong numbers between 1 and 500 are: ");

    for (int i = 1; i <= 500; i++) {
        num = i;
        originalNum = i;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }

        result = 0;
    }

    return 0;
}
