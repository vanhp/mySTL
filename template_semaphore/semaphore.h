#include <mutex>
#include <condition_variable>

/**
 * Make up for the lack of a std::semaphore in C++.
 */
class semaphore {
public:
  explicit semaphore (int i);

  /**
   * Implement the semaphore "P" operation.
   * wait until count > 0, then acguire it
   * then decrement the count atomically
   */
  void acquire();

  /**
   * Implement the semaphore "V" operation.
   * atomically increment the count of semaphore
   * release one of waiting on thread
   */
  void release();

private:
  std::mutex m_; //mutually exclude 
  std::condition_variable cond_; // variable wake up  on a condition
  int n_;
};
