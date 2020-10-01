#include <stdio.h>
#include <math.h>

int bin_to_dec(long long n) {
    long long bin = n;
    long long bin_i =0;
    long long dec=0;
    long long num=0;
    for (int i = 0; ; i++) {
        bin_i = bin % 10;
        num = bin_i * pow(2, i);
        dec += num;
        bin = bin / 10;
        if (bin == 0)
            return int(dec);
    }
}

int main()
{
    long long bin;
    long long dec;
    printf("Enter a binary number.");
    scanf_s("%lld", &bin);
    dec = bin_to_dec(bin);
    printf("The decimal value of brinary %lld is %lld.", bin, dec);
    return 0;
}