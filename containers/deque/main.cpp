
#include <deque>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

/**
 * A deque (pronounced "deck") is a double-ended queue that grows and
 * shrinks at both ends efficiently. Insertions and deletions can be
 * made in the middle, but these are slower. They are another type of
 * sequential container with their elements ordered following a strict
 * linear sequence.
 *
 * Deques may be implemented by specific libraries in different ways,
 * but in all cases they allow for the individual elements to be
 * accessed through random access iterators, with storage always
 * handled automatically (expanding and contracting as needed).
 *
 * Deque containers have the following properties:
 *
 * . Individual elements can be accessed by their position index.
 *
 * . Iteration over the elements can be performed in any order. 
 * 
 * . Elements can be efficiently added and removed from any of its
 *   ends (either the beginning or the end of the sequence).
 * 
 * Deques therefore provide a similar functionality to vectors, but
 * with efficient insertion and deletion of elements at the beginning
 * and end of the sequence. Unlike vectors, however, deques don't have
 * all elements in contiguous storage locations, thus eliminating the
 * possibility of traversing the deque container with simple pointer
 * arithmetic.
 *
 * Both vectors and deques provide a very similar interface and can be
 * used for similar purposes, but internally both work in quite
 * different ways: While vectors are very similar to a C-style array
 * that grows by reallocating all of its elements in a unique block
 * when its capacity is exhausted, the elements of a deques can be
 * divided in several chunks of storage, with the class keeping all
 * this information and providing uniform access to the elements.
 * 
 * Deques are a more complex internally, but this generally allows
 * them to grow more efficiently than vectors with their capacity
 * managed automatically. This efficiency is especially noticeable in
 * large sequences, because massive reallocations are avoided.
 * 
 * The deque implementation in the C++ Standard Template Library take
 * two template parameters:
 * 
 * template <typename T, 
 *           typename Allocator = allocator<T>> 
 * class deque;
 * 
 * 1. T: Datatype of the elements to be stored in the deque.
 * 
 * 2. Allocator: This is the allocator object used to define the
 *    storage allocation model. By default, the Allocator class
 *    template from <memory> for type T is used, which defines the
 *    simplest memory allocation model and is value-independent.
 *
 * All of the member function implemented in vector are also
 * implemented in deque except for capacity() and reserve().  Also
 * included are two new functions:
 * 
 * void push_front(const T&)    adds an element to the front
 * void pop_front()             removes the first element
 *
 * This example shows how to create a deque, add elements to it using
 * an index, and then display those elements using an index. Here we
 * process the deque as though it were any container, using its
 * push_back function, but without using its iterator.
 */
/**
 * An example of printing the contents of a deque via its const
 * iterator.
 */
template <typename T>
void print(const deque<T> &d) {
  cout << "The number of items in the deque:" 
       << d.size() << endl;

  for (typename deque<T>::const_iterator iter = d.cbegin();
       iter != d.cend();
       ++iter) {
    // *iter = T(); illegal!
    cout << *iter << " ";
  }

  cout << endl << endl;
}

/**
 * This example uses the deque functions push_back(), insert(), and
 * begin(), as well as an example of a function with a deque that uses
 * const iterator to copy the members to the output stream.
 */



int main( ) {
    // deque <float> myDeck;

    // // can use push_front() and push_back() efficiently
    // for (size_t i = 0; i < 7; i++) {
    //     myDeck.push_front(i * 1.1);
    //     myDeck.push_back(i * 1.1);
    // }

    // for (auto f : myDeck)
    //     cout << f << ' ' ;

    // cout << endl;

//  deque<char> aDeck;

//   for(size_t i = 0; i < 5; i++)
//     aDeck.push_back(i + 'A');

//   cout << "Original sequence: ";
//   for(auto c : aDeck)
//     cout << c << " ";
//   cout << endl;

//   // Here are two different ways to define an iterator!
//   deque<char>::iterator it1 = aDeck.begin() + 2; // random access
//   auto it2 = aDeck.begin() + 3;                  // iterators here!

//   cout << "*it1: " << *it1 << ", ";
//   cout << "*it2: " << *it2 << endl;
//   cout << endl;

//   // Modifies the deque by putting 'X' before the iterator.
//   aDeck.insert(it1, 'X');

//   cout << "Sequence after insert: ";
//   for(auto c : aDeck)
//     cout << c << " ";

//   cout << endl;

//   // These iterator dereferences may cause the program to crash since
//   // STL does not implement "robust iterators" for deques.
//   cout << "*it1: " << *it1 << ", ";
//   cout << "*it2: " << *it2 << endl;

    // deque<int> aDeck;

    // aDeck.push_back(3);
    // aDeck.push_front(1);

    // // Insert before aDeck[1].
    // aDeck.insert(aDeck.begin() + 1, 2);
    // aDeck[2] = 0;

    // print(aDeck);
    

 deque<char> myFirstDeck, mySecondDeck;

  for(size_t i = 0; i < 26; i++)
    myFirstDeck.push_back(i +'A');

  for(size_t i = 0; i < 10; i++)
    mySecondDeck.push_front(i + '0');

  cout << "Size of myFirstDeck and mySecondDeck: ";
  cout << myFirstDeck.size() << " " << mySecondDeck.size() << endl;
  cout << "myFirstDeck: ";

  for(auto i : myFirstDeck)
    cout << i;
  cout << endl << "mySecondDeck: ";

  for(auto i : mySecondDeck)
    cout << i;
  cout << "\n\n";

  // swap deque elements using member function.
  myFirstDeck.swap(mySecondDeck);

  cout << "Size of myFirstDeck and mySecondDeck after first swap: ";
  cout << myFirstDeck.size() << " " << mySecondDeck.size() << endl;

  cout << "myFirstDeck after first swap: ";
  for(auto c : myFirstDeck)
    cout << c;
  cout << endl;

  cout << "mySecondDeck after first swap: ";

  for(char i : mySecondDeck)
    cout << i;
  cout << "\n\n";

  swap(myFirstDeck, mySecondDeck);


    return 0;
}


