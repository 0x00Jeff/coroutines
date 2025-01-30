#ifndef COROUTINE_H_
#define COROUTINE_H_

// TODO: document the API
// TODO: consider making coroutine.h an stb-style single header library

void coroutine_init(void);
void coroutine_finish(void);
void coroutine_yield(void);
void coroutine_go(void (*f)(void*), void *arg);
size_t coroutine_id(void);
size_t coroutine_alive(void);

#endif // COROUTINE_H_
