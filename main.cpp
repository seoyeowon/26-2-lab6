#include "holiday.h"

int main(){
    const int n{4};
    using namespace Seoyeowon2649020;
    holiday a[4];
    a[0] = holiday{"Christmas", dayOfYear{12, 25}, false};
    a[0].print();
    a[1];
    a[2].input(); a[2].print();
    a[3];
}