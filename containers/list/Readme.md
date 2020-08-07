# List
A list is a sequential collection of elements of type T.  List
containers are implemented as doubly-linked lists; Doubly-linked
lists can store each of the elements they contain in different and
unrelated storage locations. The ordering is kept by the
association to each element of a link to the element preceding it
and a link to the element following it. 

## This implementation
provides the following advantages to list containers:

. Efficient insertion and removal of elements anywhere in the
  container.

. Efficient moving elements and block of elements within the
  container or even between different containers.

. Iterating over the elements in forward or reverse order.

### Compared to vectors and deques, lists perform generally better in
inserting, extracting, and moving elements in any position within
the container, and therefore also in algorithms that make intensive
use of these features.

### The main drawback of lists compared to these other sequential
containers is that lists don't provide direct (i.e., random) access
to the elements by their position. Thus, to access the sixth
element in a list, a program must iterate from a known position
(like the beginning or the end) to that position, which takes
linear time in the distance between these.

- List also use extra memory to keep the linking information
associated to each element (which may be an important factor for
large lists of small-sized elements).  As with deques, however,
storage is handled automatically by the class, allowing lists to be
expanded and contracted as needed.  If you are concerned about the
space overhead of the extra pointer needed to implement a
doubly-linked list then consider using the STL forward_list.

- The list implementation in the C++ Standard Template Library take
two template parameters:
```
template <typename T,
          typename Allocator = allocator<T> > 
class list;
```

1. T: Datatype of the elements to be stored. 

2. Allocator: This is the allocator object used to define the
   storage allocation model. By default, the Allocator class
   template from <memory> for type T is used, which defines the
   simplest memory allocation model and is value-independent.


## Characteristics of STL lists include the following:

. Has all the functions that vectors have except capacity(),
  reserve(), at(), and the [] operator.

. Does not support random access iterators but does support
  bidirectional iterators, which allows both forward and backward
  transversal.

. Constant time insertion and removal of list elements anywhere
  (assuming an iterator points to the desired location).

. Iterators to deleted elements are invalid but inserting elements
  does not invalidate iterators (unless you remove the element that
  your iterator is pointing to!)

Here's another example using a list along with its bi-directional
iterator.

# String is a sequential container and it is mutable


The STL string class is not part of the STL.  However, it often
acts much like a form of a container of char data and can use the
STL iterators, algorithms, and functors.
 
# Bitset

The C++ Standard Library contains several classes that work
similarly to the STL's predefined container classes.

- A bitset provides a set of bits as a data structure. They can be
manipulated by various binary operators such as logical AND, OR,
etc. They are used to model sets of flags, bits or Boolean
values. Once a bitset is constructed, the size of the container
(bitset) cannot be changed.

## Operations of bitset

- `!=`   returns true if the two bitsets are not equal. 
- `==`   returns true if the two bitsets are equal. 
- `&=`   performs the AND operation on the two bitsets. 
- `^=`   performs the XOR operation on the two bitsets. 
- `|=`   performs the OR operation on the two bitsets. 
- `~`    reverses the bitset (same as calling flip()) 
- `<<=`  shifts the bitset to the left 
- `>>=`  shifts the bitset to the right 
- [n]  returns a reference to the nth bit in the bitset. 

























<style>h1{color:lightblue;}</style>
<style>h2{color:green;}</style>
<style>h3{color:yellow;}</style>
<style>h4{color:coral;}</style>
<style>h5{color:teal;}</style>