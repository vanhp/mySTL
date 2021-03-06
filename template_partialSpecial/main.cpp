#include <iostream>

// Partial specialization means there are constraint on the type 
// that being templatized to narrowing it down to more specific type

/**
 * example_class templates can be partially specialized, as shown by
 * this template example_class that takes two type parameters.
 */
template <typename T, typename U>
struct example_class {
  example_class () { std::cout << "example_class <T, U>\n"; }
};
	
/**
 * The following are partial specializations of the template
 * example_class.
 */
template <typename T>   	//specialize so that both are same datatype
struct example_class <T, T> {
  example_class () { std::cout << "example_class<T, T>\n"; }
};

template <typename T>   	//specialize so that second datatype is int
struct example_class <T, int> {
  example_class () { std::cout << "example_class<T, int>\n"; }
};

template <typename T, typename U>   // both are now pointers
struct example_class <T *, U *> {
  example_class () { std::cout << "example_class<T*, U*>\n"; }
};

template <>
struct example_class <int, int> {
  example_class () { std::cout << "example_class<int, int>\n"; }
}; 


/// Defaul template only allow with class template
/**
 * Templates classes (but not template functions), can take default
 * template parameters.
 */ 
template <typename T = int>
class stack {
  public:
    // ...
  private:
    vector<T> s;
};


int main() {
  example_class<int, double> a;     // prints "example_class<T, U>"
  example_class<double, double> b;  // prints "example_class<T, T>"
  example_class<double, int> c;     // prints "example_class<T, int>"
  example_class<int *, double *> d; // prints "example_class<T*, U*>"
  example_class <int, int> e;        // prints??


  // Use default so stack is a vector of doubles.
  stack<double> a_stack_of_doubles;       

  // Don't use default, so stack now a vector of ints.
  stack<> a_stack_of_ints;


  return 0;
}
