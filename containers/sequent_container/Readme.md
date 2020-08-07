# Valarray

The valarray template class is a vector-like container that is
optimized for efficient numeric computation. It doesn't provide
iterators.

- Although one can instantiate a valarray with nonnumeric types,
because it mainly has mathematical functions that are intended to
operate directly on the numeric data elements, this might not be
the most efficient container for non-numeric data.  Most of
valarray functions and operators appear to operate on a valarray as
a whole, but they actually do their work element-by-element.

## Useful Functions  

The valarray class provides a constructor that takes an array of
the target type and the count of elements in the array to
initialize the new valarray.

- The shift() member function shifts each valarray element one
position to the left (or to the right, if its argument is negative)
and fills in holes with the default value for the type (zero in
this case). There is also a cshift() member function that does a
circular shift (or rotate). This is for bitwise arithmetic
operations that often occur in electronics applications.

All mathematical operators and functions are overloaded to operate
on valarrays; in other words, a valarray��s elements can have all of
these operations performed on them. Binary operators, such as
addition, subtraction, multiplication, division and the modulus
operation all require valarrays of the same type and size.

- The apply() member function of valarrays, like the STL transform()
algorithm, applies a function to each element, but the result is
collected into a result valarray.

### Useful Operators

The relational operators (equal, not equal, greater than, less
than, etc), return suitably-sized instances of valarray<bool> that
indicate the result of element-by-element comparisons.

Most operations return a new result array, but a few, such as
min(), max(), and sum(), return a single scalar value.


## Sequential Container wrapper

This example shows how to use C++ template template parameters and
 variadic templates to wrap sequential containers.
 




<style>h1{color:lightblue;}</style>
<style>h2{color:green;}</style>
<style>h3{color:yellow;}</style>
<style>h4{color:coral;}</style>
<style>h5{color:teal;}</style>