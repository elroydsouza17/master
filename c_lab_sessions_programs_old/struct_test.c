


#include <stdio.h>
struct Test1 {
    int a;
    int c;
    char d;
    char b;
};

// #pragma pack(1)
struct Test {
    int a:2;//[1:0]
    int f:1;//[2:2]
    int e:2;//[4:3]
    int g:2;//[6:5] 
    short int c;
    char b;
    char d;
};

int main() {
    struct Test st = {0};
    st.b = 4;
    st.c = 0xA1B2;
    printf("size of struct Test1: %lu\n", sizeof(struct Test1));
    printf("size of struct Test: %lu, size of short int: %lu\n", sizeof(st), sizeof(short int));

    int len = sizeof(st);

    for(int i = 0; i < len; i++) {
        printf("data[%d]: %x\n", i, ((unsigned char *)&st)[i]);
    }

    return 0;
}
