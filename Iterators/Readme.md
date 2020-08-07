# STL Iterators

A generalization of pointer.
Central generic programming because they are interface between container and algorithm. 

- Let algorithm to work on many type of container.

## How it work
- An implementation of Iterator pattern
- It provides access to the element store in the container without expose the underlying representation
- Iterator object encapsulate the internal structure of how the iteration work
- Use to walk over the range of object container

## Main features
- Has the ability to move to the next item in the range
- Has the ability to read/write to item its currently pointing to
- Depend on type parameterization instead of inheritance
- Let Algorithms to work seamlessly on both native(pointer) and user defined iterator type

### Categories of Iterators

1. Input Iterator
2. Output Iterator
3. Forward Iterator
4. Bidirectional Iterator
5. Random access Iterator

#### Iterator relationship

- Base iterator 
  - Input
  - Output
- Forward are both input and output
- Bidirectional are all forward
- Randoms are all birectional


## An iterator in C++ 
is a concept that implements the iterator design
pattern into a specific set of behaviors that work well with the
C++ standard library. The standard library uses iterators to work
with elements in a range in a consistent manner. Anything that
implements this set of behaviors is called an iterator.

### The iterator pattern defines a handful of simple requirements. An
iterator should allow its consumers to:

- Move to the beginning of the range of elements.
- Advance to the next element.
- Return the value referred to.
- Query it to see if it is at the end of the range.

Iterators are defined by the operations that they must support. And
because the underlying representation of an iterator is usually
implementation independent, one can use a regular pointer, an
integer, or a class object so long as it supports the operations *,
++, = and ==.

### Their capabilities range from the random access iterator that has
all of the power of a regular C++ pointer, to the input and output
iterators that can only go forward in a collection either reading
or writing. In between are the bi-directional, reverse, insertion,
stream and forward iterators. Each is a class with its own member
functions, overloaded operators and data.

### The following overloaded operators are defined for more iterators:

- `*it;`	Use dereference (*) op to get/set value
- `++it;`	Points to next element. Value after update
- `it++;`	Points to next element. Value before update
- `it2 = it2;`	Assignment
- `it1 == it2;`	Equality comparison
- `it1 != it2;`	Inequality

#### Additional operators for bidirectional iterators include:

- `--it;`	Pre-decrement
- `it--;`	Post-decrement. May be less efficient

#### Additional operators for random-access iterators include:

- `it += i;`	Increments it by i positions
- `it -= i;`	Decrements it by i positions
- `it2 + I;`	Increments it by i positions
- `it2 – I;`	Decrements it by i positions
- `it[i];`	Returns reference to ith element after it
- `it1 < it2;`	Comparison
- `it1 <= it2;`	Comparison
- `it1 > it2;`	Comparison
- `it1 <= it2;`	Comparison

#### Each predefined standard STL container comes with its own iterator
accessible via its
- `*begin()` and 
- `*end()` factory methods.  

STL container iterators also have random access iterator, a bidirectional
iterator, or some another type.  However, you can always use an
additional type of iterator if the predefined one doesn't work as
needed.  Likewise, you can define a custom iterator based on the
STL predefined classes.

Iterators are central to generic programming because they are an
interface between containers and algorithms. Algorithms usually
take iterators as arguments, so for an algorithm to work with a
container, a container must provide a way to access its elements
using iterators.


















<style>h1{color:lightblue;}</style>
<style>h2{color:green;}</style>
<style>h3{color:yellow;}</style>
<style>h4{color:coral;}</style>
<style>h5{color:teal;}</style>