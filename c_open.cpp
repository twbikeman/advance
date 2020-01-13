#include <stdio.h>
#include <stdlib.h>


#define ITERATE_LIST_BEGIN(listptr, current) { \
  printf("%s %s\n", listptr, current);
#define ITERATE_LIST_END }

int main() {
  FILE * fp;
  fp = fopen("mymytest", "w+");
  ITERATE_LIST_BEGIN("test", "good")
  ITERATE_LIST_END
  fprintf(fp, "%s\n", "123");
  fclose(fp);
  return 0;
}
