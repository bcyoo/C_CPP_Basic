// CH_08
// 비교 연산자

// 구문
// if, else

// CH_09
//switch
// 삼항 연산자

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

    return 0;
}