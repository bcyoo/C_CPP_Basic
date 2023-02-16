// 자료형
// 연산자

int main()
{
    // 8 bit = 1 byte
    // 1024 byte = 1 KB
    // 1024 kb = 1 MB
    // 1024 mb = 1 GB
    // 1024 gb = 1 TB

    // 1byte = 256가지 2^8, 0~255까지 표현가능
    // 
    // 자료형 (크기 단위, byte)
    // 정수형 : char(1), short(2), int(4), long(4), long long(8)
    // 실수형 : float(4), double(8)
    // i: 변수명

    int i = 0;
    unsigned char c = 0; // unsigned 추가할 경우 1byte 양의 정수 자료형
    // 1byte char는 0 ~ 255까지 양수만 표현 가능
    c = 0; 
    c = 255;

    char c1 = 0;
    // 1byte로 양수, 음수 둘다 표현
    // -128 ~ 0 ~ 127까지 256개 표현가능
    // 0 x x x x x x x 경우 0 ~ 127
    // 1 x x x x x x x 경우 -1 ~ -128
    c1 = -1;

    // 음의 정수 찾기 (2의 보수법)
    // 대응되는 양수의 부호를 반전 후, 1을 더한다 -> 음수 찾기
    // eg 0000 0010 의 음수찾기는
    // eg 반전 1111 1101 + 0000 0001(1)을 더해서 하게서 0이 되면 그게 음의 정수 
    // 답은 1111 1110이 -2


    // 부동소수점
    // 21.8125
    // 10101.11010  16 8 4 2 1 , 0.5 0.25 0.125 0.0625
    
    int a = 4 + 4.0;
    // 정수표현 방식과 실수 표현방식은 다름
    // 실수 표현 방식은 정밀도에 의존
    // double(8) type은 float(4) type 보다 더 정확한 소수점까지 표현이 가능.

    // 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로  type 변환 필요

    float f = 10.2415f + (float)20; // 실수끼리의 연산

    
    // 연산자 
    // +, -, *, /, %(피연산자가 정수인 경우)
    // ++, -- // 한 단계 증가 또는 감소

    int data = 10 + 10;

    // data = data + 20;
    data += 20;

    data = 10 / 3;
    data = 10 % 3;
    data = (int)(10.f / 3.f);

    data++;
    data--;

    ++data; // 전치
    data++; // 후치

    data = 0;
    a = 10;
    // data = a++; // 후치일 경우 가장 마지막에 연산 // data = 10
    data = ++a; // 전치는 대입연산자 보다 먼저 수행 // data = 11

    //논리 연산자
    // true, false, !, &&(and), ||(or)

    // true : 0이 아닌 값 1
    // false : 0

    // int truefalse = true; // 1
    // int truefalse = false; // 0

    bool truefalse = false;
    
    bool IsTrue = 100; // IsTrue = true(1)

    IsTrue = true;
    IsTrue = !IsTrue; // IsTrue = false

    int iTrue = 0;
    iTrue = !iTrue; // iTrue = 1

    iTrue = 100 && 200; // iTrue = 1 (true)
    iTrue = 0 && 200; // iTrue = 0 (false)

    iTrue = 0 || 300; //iTrue = 1 (true)
    iTrue = 0 || 0; //iTrue = 0 (false)

    return 0;
}