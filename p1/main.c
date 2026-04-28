#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    
    int found = 0;
    
    for (int a=1; a*900 <= N; a++) {
        for (int b=2; a * 900 + b * 750 <= N; b+=2) {
            for (int c=1; a*900 + b*750 + c*200 <=N; c++) {
                if (a*900 + b*750 + c*200 ==N) {
                    if (c<a || c < b) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                    }
                }
            }
        }
    }
    if (!found) {
        printf("none\n");
    }

    return 0;
}
