#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

char unseis[][10] = {
    "大吉",
    "中吉",
    "吉",
    "小吉",
    "凶",
    "大凶",
};

void make_seed() {
    struct timeval tv;

    gettimeofday(&tv, NULL);
    srand(tv.tv_sec + tv.tv_usec);
}

void do_omikuzi(int result) {
    char* unsei;
    unsei = unseis[result];
    printf("あなたの今日の運勢は %s です！\n", unsei);
}

