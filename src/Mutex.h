#ifndef _MELON_MUTEX_H_
#define _MELON_MUTEX_H_

#include <pthread.h>

namespace melon {
//todo: uncopybale
class Mutex {
public:
	Mutex();
	~Mutex();

	void lock();
	void unlock();
private:
	pthread_mutex_t mutex_;
};

class MutexGuard {
public:
	MutexGuard(Mutex& mutex);
	~MutexGuard();
private:
	Mutex& mutex_;
};

}
#endif

