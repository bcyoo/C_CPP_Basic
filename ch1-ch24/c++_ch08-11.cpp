// CH_08
// 비교 연산자

// 구문
// if, else

// CH_09
//switch
// 삼항 연산자

// CH_10 
// 비트연산자
// #define 상수명 상수

// 0x 할 경우 16진수
#define HUNGRY  0x001  
#define THIRSTY 0x002
#define TIRED   0x004
#define FIRE    0x008

#define COLD    0x010
#define POISON  0x020
#define POISON  0x040
#define POISON  0x080

#define POISON  0x100
#define POISON  0x200
#define POISON  0x400
#define POISON  0x800

int main()
{
    int data = 0;

    // CH_08
    // 비교 연산자 ==, !=, <, >, <=, >=
    // ==>> true, false

    // 구문
    // if, else
    if (100 && 200) // 0, 1인 경우
    {
        // true일 경우
        data = 100;
    }

    /////////////////////
    if (data == 100) {

    }
    else {

    }

    // else if
    // if (data == 100)
    // {

    // }
    // else if () {

    // }
    // else if () {

    // }
    // else if () {

    // }
    // else {

    // }

    // CH_09
    int iTest = 10;
    switch (iTest) {
    case 10:

        break;
    case 20:

        break;
    case 30:
    
        break;
    default:
    
        break;
    }

    int iTest = 10;
    if (iTest == 10) {

    }
    else if (iTest == 20) {

    }
    else if (iTest == 30) {

    }

    //////////////<
    int iTest = 10;
    switch (iTest) {
    case 10:
    case 20:
    case 30:
    default:
        break;
    }

    if (iTest == 10 || iTest == 20 || iTest == 30) {

    }
    else {

    }
    /////////////>

    //삼항 연산자
    // :?
    iTest == 20 ? iTest = 100 : iTest = 200; // iTest가 true일 경우 iTest ==100, fasle일 경우 iTest = 200;

    // 같은 의미
    if (iTest == 20) {
        iTest = 100;
    }
    else {
        iTest = 200;
    }

    // CH_10
    // 비트 연산자
    //Shift <<, >> 비트를 한칸씩 자리 옮김

    //unsigned 경우 양의 정수 1byte
    unsigned char byte = 1;

    byte = byte << 1; 
    byte <<= 1; // 2^n 배수
    byte >>= 1; // 2^n 나눈 몫

    
    // 비트, &(and), |(or), ^(xor), ~(역), xor : 같으면 0, 틀리면 1
    // 비트 단위로 연산
    // & : 둘 다 1인 경우 1
    // | : 둘 중 하나로 1이면 1
    // ^ : 같으면 0, 틀리면 1
    // ~ 1은 0으로, 0은 1로


    // CH_11 // 인강 다시보기
    // int 4 byte = 32bit

    // 0000 
    unsigned int iStatus = 0; 

    // 0001
    // 원래 상태를 그대로 반영하고 1bit에 |gkq
    iStatus |= HUNGRY; //#define HUNGRY 1 = 1 비트 자리에 or
    
    // 0010
    iStatus |= THIRSTY; //#define THIRSTY 1 = 2 비트 자리에 or
    
    // 0100
    iStatus |= TIRED; //#define TIRED 1 = 4 비트 자리에 or

    if (iStatus & THIRSTY) {
        // 궁금한 비트 자리의 1일 경우 ture
    }

    // 특정 자리 비트 제거 (조건체크 x)
    iStatus &= ~THIRSTY;
    // eg : iStatus = 1111 1101 0010
    //      &                            
    //      ~THRISTY = 1111 1111 1101 (THIRSTY = 0000 0000 0010)
    //      == 1111 1101 0000

    return 0;
}




