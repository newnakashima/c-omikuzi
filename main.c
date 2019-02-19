#include <stdlib.h>
#include "omikuzi.h"

int main(int argc, char *argv[]) {
    int result;

    make_seed();
    result = rand() % 6;
#ifdef DEBUG
    printf("%d\n", result);
#endif
    do_omikuzi(result);

    return 0;
}

