
# STL containers

Containers are abstract Datatype that have operation define on them
STL define operations are algorithms, iterators

The iterators task are to coordinate between the container that hold the data and the algorithm that perform the task request by the user

  They are classes whose objects can be used to build
  collections of data of same type, like built-in C++ arrays.
  However, these collections also have data and functions because
  they are objects.
  


## Common characteristics of STL containers

Include the following:

- 1. They copy the values of their elements when inserted rather than
     maintaining references to these elements. This is called ‘value
     semantics’. Thus anything added to an STL container must be able
     to be copied; a user defined class must define a public copy
     constructor or to use the class objects with an STL container,
     pointers to the objects must be stored in the container.

- 2. All elements added to “classic” STL containers have an order; in
     sequential containers this is maintained by the order added to
     the container; in associative containers, a key value provides
     the ordering.

- 3. Operations on the elements of an STL container are not tested by
     must provide its own exception handling code for any errors that
     might occur.

### Common operations of STL containers 

1. Initialization constructors: Each container supports both
     default and copy constructors, plus a destructor. Containers can be
     initialized with a range of values as well. 
  
2. Size functions: There are 3 functions related to a container’s
     size. They are: size(), which returns the actual number of
     elements in the container, empty(), checks whether there are any
     elements at all in the container, and max_size(), which returns
     the maximum number of elements the container can contain.

3. Comparison operators: The equality and relational operators, ==,
     !=, <, <=, >, >= are defined for containers holding the same
     datatype as elements. Two containers are equal if all elements
     are equal and in the same order. The relational operators work
     by comparing the containers element-by-element. If one container
     has fewer elements it is ‘less than’ the other. If a container’s
     element value is less than the value of that element at the same
     index in the other container this contain is also ‘less than’
     the other one. If the comparison test runs thru both containers
     and they are of equal size with identical elements in the same
     order, they are equal and the < or > relational operator returns
     false for whatever it is testing for.

4. Assignments and swap() function: When one container is assigned
     to another one, all elements in the source container are copied
     by value into the destination container, and all old elements
     are removed. This takes time.  A faster way to get this done if
     the source container will not be needed afterward, is to use the
     swap() function instead. This will swap the internal pointers to
     the container’s elements, allocator and sorting criteria, and is
     very fast and exception-safe.

## STL container devide into groups

  1. Sequential containers
       - Vector
       - deque
       - list
  2. Associative containers
       - set
       - multiset
       - map
       - multimap

  3. Derive containers
       - stack
       - queue
       - priority queue

## Sequential containers
Arrange the data they contain in a linear way where 
- item position in the container is not related 
- to the actual value of the data
- how the order of item store in container depend on the type of container

 #### vector

 - Linear and contiguous storage like an array that allows
 fast insertions and removals at the end only.
  
 #### list

 - Doubly linked list that allows fast insertions and removals
 anywhere.
  

#### forward_list

 - Single linked list that allows fast insertions and
 removals anywhere.
  

#### deque

 - Linear but non-contiguous storage that allows fast
 insertions and removals at both ends.

## Associative Containers

This type of container associate a key to a value but some container e.g. *`multi`* container which allow duplication have multiple keys for a value

They devide into
- Order container
- Unorder container

### Ordered associative containers

The order are implement using operator **`<`** to have balance binary tree to maintain log n operation

#### Set
 
- Defines 1 key where the elements' values are the keys and
 duplicates are not allowed. It has fast lookup using the key.

#### multiset

- Define 1 key where the elements'values are the keys and duplicates are allowed
 fast lookup using key

#### map 
- key value mapping a key is map to a value no duplication allow

#### multimap

- Define key to value mapping a key can be mapped to multiple values duplication allow

### Unordered associative containers

These are implement using hashing function to generate psuedo random number as index of array and use linklist or binary tree to alliviate problem of multiple key hash to the same index

- #### unordered_set
- #### unordered_multiset 
- #### unordered_map 
- #### unorder_multimap


### Containers and Iterators

Each container also provide factory method to create iterator that appropiate for the containers

forward
- begin()
- end()

reverse
- rbegin()
- rend()

## Adapter containers

These provide a familar interface to user by sometime restrict
the original container functionality

 #### stack 

 - First in, last out data structure.
 - default implementation is dequeue
  
 #### queue 

 - First in, first out data structure.
 - default implementation is dequeue

 #### priority_queue 

 - A queue that maintains items in a sorted order      based on a priority value.
  - default implementation is vector
  
    






















<style>h1{color:lightblue;}</style>
<style>h2{color:green;}</style>
<style>h3{color:yellow;}</style>
<style>h4{color:coral;}</style>
<style>h5{color:teal;}</style>