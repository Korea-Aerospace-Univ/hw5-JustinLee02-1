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
#-------------------------------------------
코드 내용은 똑같습니다. 다만 C23에서는 bool형이 있기 때문에 found를 bool형으로 선언하고 사용해야 합니다:
#include <stdio.h>

int main(void)
{
    int n, total = 0;
    bool found = false;
	
    scanf("%d", &n);
	
    for (int i = 1; i * 900 < n; i++) {
        for (int j = 2; j * 750 < n; j += 2) {
            for (int k = 1; k * 200 < n; k++) {
				total = i * 900 + j * 750 + k * 200;				
                if (total == n && (k < i || k < j)) {
                    printf("%d %d %d\n", i, j, k);
                    found = true;
                }
            }
        }
    }
	
    if (!found) {
        printf("none\n");
    }
	
    return 0;
}
