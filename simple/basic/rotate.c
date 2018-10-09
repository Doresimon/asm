#include "stdio.h"

int rotate_right(int t, int b){

    __asm__ volatile(
            "movl %1, %%ecx\n\t"
            "rorl %%cl, %0"
            :"+r"(t)      /* 输出 */
            :"r"(b) /* 输入 */
            :"%ecx","%cl" /* watch */
     );

    return t;
}

int rotate_left(int t, int b){
    __asm__ volatile(
            "movl %1, %%ecx\n\t"
            "roll %%cl, %0"
            :"+r"(t)      /* 输出 */
            :"r"(b) /* 输入 */
            :"%ecx","%cl" /* watch */
     );

    return t;
}

void main(){
    int t = 1;
    int b = 4;

    printf("%#x\n", rotate_right(t,b));
    printf("%#x\n", rotate_left(t,b));
}