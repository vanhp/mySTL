#ifndef _SIMPLE_STRING_H
#define _SIMPLE_STRING_H

//#include <ctype.h>

/**
 * This simple string class shows the difference between pass-by-value
 * using copy vs. move semantics in C++.  It also shows the "Rule of
 * 5", which supplants the "Rule of 3" with earlier C++ versions
 * https://en.wikipedia.org/wiki/Rule_of_three_(C++_programming).
 */
class simple_string {
public:

  simple_string();

  simple_string(const char *s);

// copy constructor
  simple_string(const simple_string &rhs) noexcept;
// move constructor
  simple_string(simple_string &&rhs) noexcept;
// copy assignment operator
  simple_string &operator=(const simple_string &rhs) noexcept;
// move assignment operator
  simple_string &operator=(simple_string &&rhs) noexcept;

  void swap(simple_string &rhs) noexcept;

  char &operator[](size_t index);

  const char &operator[](size_t index) const;

  bool operator<(const simple_string &rhs) const;

  size_t length() const;

  explicit operator const char *() const;

  // destructor
  ~simple_string();

private:
  size_t len_;

  char *str_;

  char *strnew(const char *s);
};

std::ostream &
operator<<(std::ostream &os, const simple_string &string);
#endif /* _SIMPLE_STRING_H */