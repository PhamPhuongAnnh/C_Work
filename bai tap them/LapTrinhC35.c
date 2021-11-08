//
//#include <stdio.h>
//int value_1;
//void KhoiTaoGiaTri()
//{
//    value_1 = 1;
//}
//
//int main ()
//{
//    int value_2 = 200, value_3;
//    init();
//
//    if(value_1 < value_2)
//    {
//        value_1 += 100;
//        value_3 = 3;
//    }
//    return 0;
//}

#include <stdio.h>
int main()
{
    int x = 1,y =0;
    y += (++x) +5;
    printf("x = %d\ny = %d",x,y);
    return 0;
}
