#include <stdio.h>
//#define SPACE_OPTIMIZED
// to pass "SPACE_OPTIMIZED" by command line
/* gcc file_name.c -D SPACE_OPTIMIZED */
int main()
{
    int x = 10, y = 20;
#ifdef SPACE_OPTIMIZED
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("x = %d\ny = %d\n", x, y);
    printf("Selected Space Optimization\n");
#else
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d\ny = %d\n", x, y);
    printf("Selected Time Optimization\n");
#endif
    return 0;
}
