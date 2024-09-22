#include "balance_vector.hpp"
#include "cassert"

// constructor by specification
BalanceVector::BalanceVector(double bv[], int n)
{
    n_account = n;
    value = new double[n_account];
    for (int ii = 0; ii < n_account; ii++)
    {
        value[ii] = bv[ii];
    }
}

// zero constructor
BalanceVector::BalanceVector(int n)
{
    assert(n > 0);
    n_account = n;
    value = new double[n_account];
    for (int ii = 0; ii < n_account; ii++)
    {
        value[ii] = 0.0;
    }
}

// destructor
BalanceVector::~BalanceVector()
{
    delete[] value;
}

// copy constructor
BalanceVector::BalanceVector(const BalanceVector &another_bv)
{
    n_account = another_bv.get_size();
    value = new double[n_account];
    for (int ii = 0; ii < n_account; ii++)
    {
        value[ii] = another_bv.value[ii];
    }
}

// get_size method
int BalanceVector::get_size() const
{
    return n_account;
}

// index method
double &BalanceVector::operator[](int ii)
{
    assert(ii > -1);
    assert(ii < n_account);
    return value[ii];
}

// summation method
double BalanceVector::sum() const
{
    double res = 0.0;
    for (int ii = 0; ii < n_account; ii++)
    {
        res += value[ii];
    }
    return res;
}

// assignment method
BalanceVector &BalanceVector::operator=(const BalanceVector &another_bv)
{
    assert(n_account == another_bv.n_account);
    for (int ii = 0; ii < n_account; ii++)
    {
        value[ii] = another_bv.value[ii];
    }
    return *this;
}

// binary add method
BalanceVector BalanceVector::operator+(const BalanceVector &another_bv) const
{
    assert(another_bv.n_account == n_account);
    BalanceVector res_v(n_account);
    for (int ii = 0; ii < n_account; ii++)
    {
        res_v[ii] = value[ii] + another_bv.value[ii];
    }
    return res_v;
}

// binary add by constant method
BalanceVector BalanceVector::operator+(double x) const
{
    BalanceVector res_v(n_account);
    for (int ii = 0; ii < n_account; ii++)
    {
        res_v[ii] = value[ii] + x;
    }
    return res_v;
}

// binary subtract method
BalanceVector BalanceVector::operator-(const BalanceVector &another_bv) const
{
    assert(another_bv.n_account == n_account);
    BalanceVector res_v(n_account);
    for (int ii = 0; ii < n_account; ii++)
    {
        res_v[ii] = value[ii] - another_bv.value[ii];
    }
    return res_v;
}

// binary subtract by constant method
BalanceVector BalanceVector::operator-(double x) const
{
    BalanceVector res_v(n_account);
    for (int ii = 0; ii < n_account; ii++)
    {
        res_v[ii] = value[ii] - x;
    }
    return res_v;
}