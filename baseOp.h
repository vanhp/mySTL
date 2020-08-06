#include <iostream>
#include <typeinfo>
using namespace std;




/**
 * This example demonstrates the use of template member functions and
 * member function templates in C++ parameterized types.
 */

/**
 * Here is an example of a template class. This class has one template
 * parameter, T. This datatype will be applied when its constructor
 * and increase() template member function are called.
 */
// template <typename T>		
// class container {
// public:
//   explicit container(const T &arg): element (arg) {}

//   // template member function
//   T increase() {return ++element;}

// private:
//   T element;
// };

/**
 * Templates declared inside classes are called member templates, and
 * they can be either member function templates or member class
 * templates (nested classes).
 * 
 * Member function templates are template functions that are members
 * of any class or class template. Notice that member templates are
 * not the same as template members.
 * 
 * A template member is a member declared inside a class template.
 */
template <typename T> 
struct class_A  {
  explicit class_A(T *p): p_(p) {
    cout <<"class name is: "<< typeid(p).name() << endl;
  }

  // a template (data) member
  T *p_; 	

  // another template member function (can be virtual if necessary)
  void f(T *t) const {
    // print the "name" of the types.
    cout <<"function name is: "<< typeid(t).name() << endl;
  }
};

/**
 * A "member function template" is a template with its template
 * parameters declared inside any class.
 * 
 * Here's an example of a member function template in a non-template
 * class.
 */
struct class_B {
  // member function template (can't be virtual)
  template <typename T>     
  void mf(T *t) {
    // print the "name" of the type.
    cout <<"another function name is: "<< typeid(t).name() << endl;
  }
};

/**
 * Here's an example of declaring a member function template in a
 * template class.
 */
template <typename T>
struct class_C {
    // member function template (can't be virtual)
    template <typename U>
    void mf(U u, T *t) {
        // print the "name" of the types.
        cout <<"class c: "<< typeid(u).name() << endl;
        cout <<"class c2: "<< typeid(t).name() << endl;
    }

    // template member function (can be virtual if necessary)
    void f(T *t) const {
        // print the "name" of the types.
        cout <<"class c: f: "<< typeid(t).name() << endl;
    }
};

