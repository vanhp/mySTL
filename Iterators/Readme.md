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

#### predefined standard STL container
Each container comes with its own iterator
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

# Std Iterators

The C++ standard library provides iterators for the standard
containers in STL (e.g., list, vector, and deque), and a few other
non-container classes, such as string.

- The definition of iterators makes them much more than simple C/C++
pointers although they perform that type of behavior. They also
have a `state`, in other words they can hold data about
themselves. 
- Their base classes are found in the header `<iterator>`.

An iterator gives a program access to the contents of a container
or other sequence of data, such as an I/O stream. One can think of
an iterator as an abstraction of a pointer; the syntax for using
iterators resembles that of pointers. 



### Non const iterators are allow to write to the item

- An iterator points to a single element in a container or sequence
- and can be advanced to the next element with the `++` (increment)
operator. 
- The unary `*` (dereference) operator returns the element
that the iterator points to. 
- Iterators, except for output iterators, 
  - can be compared, and 
  - two iterators are equal if they point to the same position in the same sequence, or 
  - if they both point to one position past the end of the same sequence. 

### Const iterators are not allow to modify item

There are also constant iterators defined for each container so
that a program can safely traverse a container without modifying
its elements. 

- The STL algorithms that don’t modify container
elements (search, find etc) require const iterators as arguments. 

## How it works

Here's an example that shows how various types of vectors work with
their iterators:

- Obtain an iterator to the first element in a container by calling
  that container's `begin()` member function.

- Advance an iterator to the next element with the `pre-` or `post-`
  increment operator, as in `++it` or `it++` (it’s good practice to use
  `++it` since this is more efficient).

- Get the value the iterator refers to via the pointer dereference
  operator `*`, as in `*it`.

# Iterator Traits


 We can use the iterator traits template to know what we need to
 define when defining our own iterators or what we can check for
 when using the STL predefined iterators.

 ## Here are the traits.

 - iterator_category must be one of these 5 values:
   - input_iterator_tag, 
   - output_iterator_tag, 
   - forward_iterator_tag,
   - bidirectional_iterator_tag,  
   - random_access_iterator_tag. 

 - value_type is the base datatype of the iterator, and it can be
   `void` for output iterators since one cannot dereference them.

 - difference_type  is the difference between two iterators.

 - pointer is a pointer to the same datatype as the value_type is
 
 - reference is a reference to the same datatype as the value_type

## Generic Algorithm
 Generic algorithms often need to have access to these traits
 described on the previous page. 
 - Many STL algorithms take a range of ierators, and they might need to declare a temporary variable whose type is the iterators' value_type. 
 - The class iterator_traits is a mechanism that allows such declarations.


## STL Iterator Advantages

. The STL provides predefined iterators as a convenient abstraction
  for accessing many different types of containers

. Iterators for templated classes are generated inside the class
  scope with the syntax class_name<parameters>::iterator, so they
  can be directly used with their container.

. Iterators can be thought of as limited (possible stateful)
  pointers, and can be dereferenced to get the values of elements
  pointed to, passed to stand-alone functions and algorithms to
  operate indirectly on the container and more.

. An iterator can be a pointer or a class, and it can be derived
  from the STL's iterator class template. Any pointer can be
  treated as an iterator.

STL Iterator Disadvantages

. Iterators do not provide bounds checking; it is possible to
  overstep the bounds of a container, resulting in segmentation
  faults.

. Different containers support different types of iterators by
  default, so it's not always possible to change the underlying
  container type without making changes to the code.

. Iterators can be invalidated if the underlying container (the
  container being iterated over) is changed significantly.

. Iterators have the same advantages and power as pointers. But
  they also have the same risks and inconveniences. For example,
  using a pointer we can accidentally modify data that we are not
  supposed to.














<style>h1{color:lightblue;}</style>
<style>h2{color:green;}</style>
<style>h3{color:yellow;}</style>
<style>h4{color:coral;}</style>
<style>h5{color:teal;}</style>