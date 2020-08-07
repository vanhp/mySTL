
# <span style="color:lightblue">Template Method</span>

This example demonstrates the use of template member functions and
member function templates in C++ parameterized types.

- Here is an example of a template class. This class has one template
parameter, T. This datatype will be applied when its constructor
and increase() template member function are called.


- Templates declared inside classes are called member templates, and
they can be either member function templates or member class
templates (nested classes).

- Member function (method that declare as template can't be virtual) 
templates are template functions that are members
of any class or class template. Notice that member templates are
not the same as template members.

- A template member function (normal method of templatize class can be virtual)
is a member declared inside a class template.


- A "member function template" is a template with its template
parameters declared inside any class.

- Here's an example of a member function template in a non-template
class.


- This method demonstrates the use of template member functions and
member function templates.


- If a set of functions or classes have the same functionality for
different data types, this becomes a good class template. The class
can also hold state data about itself. A class template can be
implemented in C++ as either a class or a struct. A struct behaves
much like a class does, except that its data/methods are public by
default, whereas data/methods for a class are private by default.
This template class stores two elements of any valid datatype.


- This simple string class shows the difference between pass-by-value
using copy vs. move semantics in C++.  It also shows the "Rule of
5", which supplants the "Rule of 3" with earlier C++ versions
https://en.wikipedia.org/wiki/Rule_of_three_(C++_programming).

### <span style="color:yellow">The rule of 3:</span>

When create a new class object the 3 essential methods are:
1. Copy constructor
2. Copy assignment operator
3. Destructor

### <span style="color:coral">The rule of 5 for newer modern C++:</span>

When create a new class object the 5 essential methods are:
1. Copy constructor
2. Copy assignment operator
3. Destructor
4. move constructor
5. move assignment operator
