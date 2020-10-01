#include <stdio.h>
#include<math.h>

double average(double a, double b, double c) {
    double aver;
    aver = (a + b + c) / 3;
    return aver;
}

double std_deviation(double a, double b, double c) {
    double var_a, var_b, var_c, var_sum, result;
    var_a = pow(average(a, b, c) - a,2);
    var_b = pow(average(a, b, c) - b,2);
    var_c = pow(average(a, b, c) - c,2);
    var_sum = (var_a + var_b + var_c)/3;
    result = sqrt(var_sum);
    return result;
}

int main()
{
    double a, b, c;
    printf("Enter a three real numbers.\n");
    scanf_s("lf%lf%lf%", &a, &b, &c);
    printf("Standared deviation is %lf.\n", std_deviation(a, b, c));
    return 0;
}