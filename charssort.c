#include <stdio.h>
#include <string.h>
void bubbleSortStrings(char a[][50], int n)
 {
    int i, j;
    char temp[50];
    for (i = 0; i <= n - 2; i++) {
        for (j = 0; j <=(n - 2 - i); j++) {
            if (strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char strings[100][50];
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%s", strings[i]);
    }
    bubbleSortStrings(strings, n);
    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}