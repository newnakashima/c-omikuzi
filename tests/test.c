#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../omikuzi.h"

void test_make_seed();
void test_do_omikuzi();
int main(int argc, char *argv[]) {
    test_make_seed();
    test_do_omikuzi();
    printf("テストOK.\n");
}

void test_make_seed() {
    int i;
    int one_count = 0;
    for (i = 0; i < 100; i++) {
        srand(1); // srand(1)の場合、次のランダム値は必ず1になる
        make_seed();
        if (rand() % 6 == 1) {
            one_count++;
        }
    }
    assert(one_count != 100);
}

void test_do_omikuzi() {
    char buf[8192];
    setvbuf(stdout, buf, _IOFBF, sizeof(buf));
    do_omikuzi(0);
    assert(strcmp(buf, "あなたの今日の運勢は 大吉 です！\n") == 0);
    fflush(stdout);
    buf[0] = '\0';
    do_omikuzi(1);
    assert(strcmp(buf, "あなたの今日の運勢は 中吉 です！\n") == 0);
    fflush(stdout);
}
