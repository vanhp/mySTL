#include "semaphore.h"

semaphore::semaphore (int i): n_(i) {}

/**
 * Implement the semaphore "P" operation.
 * get the lock first then if the count = 0 
 * wait enter only when count > 0 then decrement the count
 */
void 
semaphore::acquire () {
  std::unique_lock<std::mutex> lock (m_); // lock the acquire lock via RAII
  cond_.wait(lock, [this] { return n_ > 0; }); // enter only n>0 
  --n_;
}

/**
 * Implement the semaphore "V" operation.
 * get the lock then increment the count
 * then notify the one of waiting thread
 */
void 
semaphore::release () {
  std::unique_lock <std::mutex> lock (m_);
  ++n_;
  cond_.notify_one();
}
