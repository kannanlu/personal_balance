#ifndef BALANCEHEADER
#define BALANCEHEADER

//  a1, b1, c1
// class balance_vector, sum, add(), copy_constructor, empty_initialize, initialize_with_vector

//  class balance_sheet: (balance_vector1, balance_vector2 ...)
//  add_balance_vector
//  delete_balance_vector
//  calculate sum
//  column slicing
//  row slicing

class BalanceVector
{
private:
    int n_account;
    double *value;

public:
    // overide constructors
    BalanceVector(double bv[], int n);
    BalanceVector(int n);
    ~BalanceVector();
    BalanceVector(const BalanceVector &another_bv);

    // some methods
    int get_size() const;
    double &operator[](int ii);
    double sum() const;
    BalanceVector &operator=(const BalanceVector &another_bv);
    BalanceVector operator+(const BalanceVector &another_bv) const;
    BalanceVector operator+(double x) const;
    BalanceVector operator-(const BalanceVector &another_bv) const;
    BalanceVector operator-(double x) const;
};

#endif