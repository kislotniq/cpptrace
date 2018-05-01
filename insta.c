#include <stdio.h>

void __cyg_profile_func_enter (void *, void *) __attribute__((no_instrument_function));
void __cyg_profile_func_exit (void *, void *) __attribute__((no_instrument_function));

void __cyg_profile_func_enter (void *this_fn,
                               void *call_site) {
  printf("Function ENTER at: %p called from: %p\n", this_fn, call_site);
}

void __cyg_profile_func_exit  (void *this_fn,
                               void *call_site) {
  printf("Function EXIT at: %p called from: %p\n", this_fn, call_site);
}
