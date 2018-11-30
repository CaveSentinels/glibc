#ifndef MALLOC_MASSERT_H
#define MALLOC_MASSERT_H

#ifdef NDEBUG
# define assert(expr) ((void) 0)
#else
# define assert(expr) \
  ((expr)								      \
   ? ((void) 0)								      \
   : __malloc_assert (#expr, __FILE__, __LINE__, __func__))

extern const char *__progname;

void __malloc_assert (
    const char *assertion, const char *file, unsigned int line,
    const char *function
);

#endif

#endif  /* MALLOC_MASSERT_H */