#include <iostream>
#include "balance_vector.hpp"

int main(int argc, char *argv[])
{
    double v1[] = {1.0, 2.0, 3.0};
    int n = sizeof(v1) / sizeof(v1[0]);
    BalanceVector bv1 = BalanceVector(v1, n);
    return 0;
}