#ifndef _CONTAINER_H
#define _CONTAINER_H
#include <iostream>


using namespace std;

template <typename T> 
class container { // class template
public:
  explicit container (const T &arg);
  T increase ();

private:
  T element;
};

/**
 * The idea of C++ class template specialization is similar to
 * function template overloading. It fixes the template code for
 * certain data types that need to be handled differently than most
 * data. For example, string or char data is not handled identically
 * to true numeric datatypes, so a specialization of an ‘add’ template
 * for strings or char data may need to work differently than it would
 * for adding integers or numbers. After the template is specialized,
 * all the member functions should be declared and defined for the
 * specific data type.
 *
 * When a program instantiates a template with a given set of template
 * arguments the compiler generates a new definition based on those
 * template arguments. To override this, instead specify the
 * definition the compiler uses for a given set of template
 * arguments. This is called explicit specialization. A program can
 * explicitly specialize any of the following: 
 * • Function or class template 
 * • Member function of a class template 
 * • Static data member of a class template 
 * • Member class of a class template 
 * • Member function template of a class template 
 * • Member class template of a class template
 * 
 * The template<> prefix indicates that the following template
 * declaration takes no template parameters. The declaration_name is
 * the name of a previously declared template. Note that an explicit
 * specialization can be forward-declared so the declaration_body is
 * optional, at least until the specialization is referenced.
 */
//class template specialization:
template <> 
class container <char *> {
public:
  explicit container (char *arg): element (arg) {}
  char *uppercase ();  // note how we've added a totally new method!

private:
  char *element;
};


/**
 * Templates declared inside classes are called member templates, and
 * they can be either member function templates or member class
 * templates (nested classes).
 * 
 * Member function (method) templates are template functions that are members
 * of any class or templatize class and can't be virtual. 
 * Notice that member function templates (a templatize method of a class) are
 * not the same as template members function (a normal method of template class).
 * 
 * A template member is a member declared inside a class that templatize.
 */
template <typename T> 
struct class_A  {
  explicit class_A(T *p): p_(p) {
    cout << typeid(p).name() << endl;
  }

  // a template (data) member
  T *p_; 	

  // a template member function (can be virtual if necessary)
  // a member function (method) that works on the template of a template class
  
  void f(T *t) const {
    // print the "name" of the types.
    cout << typeid(t).name() << endl;
  }
};

/**
 * A "member function template" or (method) that is a template
 * of a non template class can't be virtual
 * parameters declared inside any class.
 * 
 * Here's an example of a member function template in a non-template
 * class.
 */
struct class_B {
  // member function template (can't be virtual)
  // any member function that declare as template
  template <typename T>     
  void mf(T *t) {
    // print the "name" of the type.
    cout << typeid(t).name() << endl;
  }
};

/**
 * Here's an example of declaring a member function(method) template in a
 * template class.
 */
template <typename T>
struct class_C {
    // member function template (can't be virtual)
    template <typename U>
    void mf(U u, T *t) {
        // print the "name" of the types.
        cout << typeid(u).name() << endl;
        cout << typeid(t).name() << endl;
    }

    // template member function (can be virtual if necessary)
    void f(T *t) const {
        // print the "name" of the types.
        cout << typeid(t).name() << endl;
    }
};



/**
 * Define class Foo that defines operator++().
 */
class Foo {
public:
  explicit Foo(int i): i_(i) {}

  Foo operator++() {
    cout << "Foo::operator++" << endl;
    return Foo(++i_);
  }

  explicit operator int() const { return i_; }

private:
  int i_;
};

ostream &operator<<(ostream &os,  const Foo &foo) {
  return os << int(foo);
}

/**
 * Specialize container with a Foo.
 */
template<> 
class container<Foo> {
public:
  explicit container (Foo arg): element (arg) {}
  Foo increase() {
    cout << "container<Foo>::increase()" << endl;
    return ++element;
  }

private:
  Foo element;
};



#include "container.cpp"

#endif /* _CONTAINER_H */
