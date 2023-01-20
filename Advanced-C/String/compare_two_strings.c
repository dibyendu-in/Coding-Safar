#include<stdio.h>

int main()
{
    char str1[10], str2[10]; int count = 0, i = 0;
    scanf("%s%s", str1, str2);
    while(str1[i] != '\0')
    {
        if(str1[i] != str2[i])
        count++;
        i++;
    }
    if(count == 0)
    printf("Yes\n");
    else
    printf("No\n");
    
    return 0;
}
