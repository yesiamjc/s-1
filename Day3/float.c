#include<stdio.h>
int main()
{
    float a;
    double b;
    long double c;
    printf("%d\n%d\n%d\n",sizeof(float),sizeof(double),sizeof(long double));
    return 0;
}
/*
%d integer printing 
%ld long integer printing
%lld long long integer printing 

%u for unsigned printing
%lu for long unsigned printing 
%llu for long long unsigned printing

%f for float printing (.7 max)
%lf or %f for double printing (.16 max)
%Lf for long double printing (.19 max)

%c for charecter printing

%s for string of charecters printing 
*/