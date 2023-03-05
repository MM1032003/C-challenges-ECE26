#include <stdbool.h>
#include <math.h>

bool is_square(int n) {

    float sqrt_num  = sqrt(n);
    int int_portion     = (int)sqrt_num;
    float float_point   = sqrt_num - int_portion;

    if (float_point == 0) {
        return true;
    }else {
        return false;
    }
}
