#include <stdio.h>

int main()
{
    char str1[10], str2[10], str3[20];

    scanf("%s%s", str1, str2);
    int i, index = 0;

    for (i = 0; str1[i] != '\0'; i++)
        str3[i] = str1[i];
    index = i;

    for (i = 0; str1[i] != '\0'; i++)
        str3[index + i] = str2[i];

    for (i = 0; str3[i] != '\0'; i++)
        printf("%c", str3[i]);

    return 0;
}
