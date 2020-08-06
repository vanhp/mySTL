// #include "baseOp.h"

#include <iostream>
//#include <ctype.h>


 #define MOVE std::move
 #define PASS_BY_VALUE 1

#include "pair.h"
#include "simple_string.h"
#include "container.h"

using namespace std;


/**
 * This method demonstrates the use of template member functions and
 * member function templates.
 */
int main () {
 // Show the use of a template member function.
  container<int> myint(7);
  cout << myint.increase() << endl;

  // // Show the use of another template member function.
  // long l;
  // class_A<long> a(&l);
  // a.f(&l);

  // // Show the use of a member function template.
  // int i;
  // double d;
  // class_B b;
  // b.mf(&i); // The C++ compiler is automatically synthesizing
  // b.mf(&d); // the mf() member function template for int and double.

  // // Show more uses of template class and a member function template.
  // class_C<int> c;
  // class_C<double> cc;

  // c.mf(10, &i);
  // cc.mf(20.5, &d);
  // c.f(&i);
  // cc.f(&d);  



//    simple_string s1("hello");
//   simple_string s2("world");

//   cout << "max value: " <<s1<< "and"<<s2<<" = ";

//   // Chose "my_pair" rather than std::pair.
//   my_pair::pair<simple_string> string_pair(MOVE(s1), MOVE(s2));

// cout << "max value: " <<s1<< "and"<<s2<<" = ";

  // cout << string_pair.max()
  //       << endl;
  

  // It's easy to switch from one type parameter to another.
  {
    double d1 = 100.4;
    double d2 = 200.8;

    // Again, chose "my_pair" rather than std::pair.
    my_pair::pair<double> d_pair(d1, d2);

    cout << "the max of "
         << d1 << " and "
         << d2 << " = "
         << d_pair.max()
         << endl;
  }

  // container<int> my_int (7);
  // container<double> my_double (10.5) ;

  // char lowercase[] = "hello world";
  // container<char *> my_charstring (lowercase);

  // cout << my_int.increase() << endl;
  // cout << my_double.increase() << endl;
  // cout << my_charstring.uppercase() << endl;

  // container<Foo> my_foo (Foo(10));
  // cout << my_foo.increase() << endl;





  return 0;
}