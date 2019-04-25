#pragma once
/*
 * Windows implementation of gnu's getopt functions
 */

#define no_argument             0
#define required_argument       1
#define optional_argument       2

#ifdef __cplusplus
extern "C" {
#endif

  extern int opterr;	/* if error message should be printed */
  extern int optind;	/* index into parent argv vector */
  extern int optopt;	/* character checked for validity */
  extern int optreset;	/* reset getopt */
  extern char *optarg;	/* argument associated with option */

  struct option 
  {
    const char *name;
    int  has_arg;
    int *flag;
    int val;
  };

  int getopt(int argc, char * const *argv, const char *optstring);
  int getopt_long(int argc, char *const *argv, const char *optstring, const struct option *longopts, int *longindex);

#ifdef __cplusplus
}
#endif
