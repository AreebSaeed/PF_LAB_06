#include <stdio.h>
int main() 
{
    int n, i = 0;
    printf("Enter Range of Even or Odd: ");
    scanf("%d", &n);

    if (n % 2 == 0) { 
        printf("Even\n");
        i = 2;
        while (i <= n) {
            printf("%d\n", i);
            i =i+ 2;
        }
    } else { 
        printf("Odd\n");
        i = 1;
        while (i <= n) {
            printf("%d\n", i);
            i =i+ 2;
        }    
    }

    return 0;
}
