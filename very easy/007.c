#include <stdio.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF)
        if (n % 2 == 0)
            printf("gerade");
        else printf("ungerade");
    return 0;
}