#include "expert_c_programming/intro/max_time.h"

#include <time.h>

// Fri Dec 31 9999 23:59:59 GMT+0000
#define MAX_TIME_VAL 253402300799

char *get_max_time(void) {
  time_t max_time = {MAX_TIME_VAL};
  return ctime(&max_time);
}
