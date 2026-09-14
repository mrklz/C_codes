#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
    printf("CHAR SIGNED: %d - %d\n CHAR UNSIGNED: %d\n", CHAR_MIN,  CHAR_MAX, UCHAR_MAX);
    printf("INT SIGNED: %d - %lld\n INT UNSIGNED: %d\n", INT_MIN,  INT_MAX, UINT_MAX);
    printf("SHORT SIGNED: %d - %d\n SHORT UNSIGNED: %d\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("LONG SIGNED: %d - %lld\n LONG UNSIGNED: %d\n\n", LONG_MIN, LONG_MAX, ULLONG_MAX);
    printf("DOUBLE: %f - %f\n", DBL_MIN, DBL_MAX);
    printf("FLOAT: %f - %f\n", FLT_MIN, FLT_MAX);
    
    return 0;
}
