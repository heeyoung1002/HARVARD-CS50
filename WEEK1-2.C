#include <stdio.h>
#include <string.h>

int main(void){

    char answer[50];

    //string 같은 경우에 &를 쓰지는 않는다. 왜냐하면 처음요소의 주소 자체이기 때문이다.
    scanf("%s" , answer);
    printf("hello, %s", answer);

    return 0;
}