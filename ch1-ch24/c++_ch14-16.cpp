#include <stdio.h> // 표준 입출력 header



int Add(int a, int b) {
    return a + b;
}

int main() {

// printf
printf("Integer int  %d \n", 10); //정수
printf("Float %f \n", 3.14f); //실수

for (int i = 0; i < 10; ++i) {
    printf("Output i : %d\n",i);
}
// scanf
// int iInput = 0;
// scanf_s("%d", &iInput);



// 함수가 사용하는 메모리 영역
// stack memory area

int iData = Add(100, 200);
iData = Add(300,  400);
iData = Add(222,  700);
iData = Add(333,  555);




return 0;

}

