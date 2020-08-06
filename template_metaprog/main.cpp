#include <iostream>
#include <cassert>

using namespace std;

/**
 * Store the factorial of 20.
 */
const long long factorial_20 = 2432902008176640000LL;

/**
 * Define a "run-time" factorial function.
 * using recursion
 */
long long 
runTimefactorial(const long long val, const long long sum = 1) {
  if (val > 1)
    return runTimefactorial(val - 1, sum * val);
  else
    return sum;
}

/**
 * Define a "compile-time" factorial function.
 * meta programming
 */
constexpr long long
compileTimefactorial(const long long in,const long long sum = 1) {
  if (in > 1)
    return compileTimefactorial(in - 1,sum * in);
  else
    return sum;
}

/**
 * Check whether the result worked at compile-time.
 */
enum { compileTimeGeneratedValue = compileTimefactorial(20) };
static_assert(compileTimeGeneratedValue == factorial_20, "error");

/**
 * Define a "compile-time" factorial template using a generic
 * metafunction calls (inherits from) itself.
 */
template<long long LLn, long long LSum = 1>
struct Factorial
       : Factorial<LLn - 1, LLn * LSum>{};

/**
 * this is the base case to stop recursion
 * This specialized metafunction has a value and does not self-inherit.
 */
template<long long LSum> // take LSum as a wild card
struct Factorial<1, LSum> {
    enum { value = LSum };
};

/**
 * Compute factorial of 20 at compile-time!
 */
const long long fact = Factorial<20>::value;

/**
 * Check whether the result worked at compile-time.
 */
static_assert(fact == factorial_20, "error");

/**
 * This example demonstrates various ways to compute factorials at
 * compile-time and run-time.
 */
int main() {
  // Call the run-time factorial method for 20.
  assert(runTimefactorial(20) == factorial_20);

  // Print the factorial of 20.
  cout << "factorial(20) = " << factorial_20;
}
