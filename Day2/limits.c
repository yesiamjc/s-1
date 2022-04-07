#include<stdio.h>
#include <limits.h>
int main()
{
    int var1=INT_MIN;
    int var2=INT_MAX;
    printf("Range of signed int is from %d to %d \n",var1,var2);
    unsigned int var3=0;
    unsigned int var4=UINT_MAX;
    printf("Range of unsigned int is from %u to %u \n",var3,var4);
    short var5=SHRT_MIN;
    short var6=SHRT_MAX;
    printf("Range of signed short is from %d to %d \n",var5,var6);
    unsigned short var7=0;
    unsigned short var8=USHRT_MAX;
    printf("Range of unsigned short is from %u to %u \n",var7,var8);
    long var9=LONG_MIN;
    long var10=LONG_MAX;
    printf("Range of signed long is from %ld to %ld \n",var9,var10);
    unsigned long var11=0;
    unsigned long var12=ULONG_MAX;
    printf("Range of unsigned long is from %lu to %lu \n",var11,var12);
    long long var13=LONG_LONG_MIN;
    long long var14=LONG_LONG_MAX;
    printf("Range of signed long long is from %lld to %lld \n",var13,var14);
    unsigned long long var15=0;
    unsigned long long var16=ULONG_LONG_MAX;
    printf("Range of unsigned long long is from %llu to %llu \n",var15,var16);
    return 0;
}