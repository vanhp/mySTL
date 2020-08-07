## This is for old compiler and code

In many ways, templates work like preprocessor macros, replacing
the templated variable with the given type. However, there are many
differences between a macro and a template, as shown in the example
below.


- Template functions and member functions are only instantiated when
they are used.  Some older C++ compilers had problems instantiating
all the templates properly.  One way to prevent linker and
compilation errors is to use "explicit instantiation", which
provides each template argument when invoking a template
function. For example, consider the following small template
function. 

- The following are examples of using this particular function
template in a program plus other templates; all being explicitly
instantiated.

- explicitly instantiate an entire template class and all its functions
later cannot explicitly instantiate particular functions of this class
because ALL are instantiated by this statement