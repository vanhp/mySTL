#ifndef _CONTAINER_CPP
#define _CONTAINER_CPP
#include "container.h"
#include <ctype.h>
#include <iostream>


using namespace std;

template <typename T> 
container<T>::container (const T &arg): element (arg) {}

template <typename T> T
container<T>::increase () { 
  return ++element; 
}





// // //class template specialization:
// template <> 
// class container <char *> {
// public:
//   explicit container (char *arg): element (arg) {}
//   char *uppercase ();  // note how we've added a totally new method!

// private:
//   char *element;
// };

// Member of class template specialization:
char *
container<char *>::uppercase() {
  for (int i = 0; element[i] != '\0'; ++i)
    if (islower(element[i]))
      element[i] = toupper(element[i]);

  return element;
}

// /**
//  * Define class Foo that defines operator++().
//  */
// class Foo {
// public:
//   explicit Foo(int i): i_(i) {}

//   Foo operator++() {
//     cout << "Foo::operator++" << endl;
//     return Foo(++i_);
//   }

//   explicit operator int() const { return i_; }

// private:
//   int i_;
// };

// ostream &operator<<(ostream &os,  const Foo &foo) {
//   return os << int(foo);
// }

// /**
//  * Specialize container with a Foo.
//  */
// template<> class container<Foo> {
// public:
//   explicit container (Foo arg): element (arg) {}
//   Foo increase() {
//     cout << "container<Foo>::increase()" << endl;
//     return ++element;
//   }

// private:
//   Foo element;
// };




#endif /* _CONTAINER_CPP */