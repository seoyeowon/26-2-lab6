#pragma once
#include "dayOfYear.h"
//프라이빗 확인
namespace Seoyeowon2649020{
    class holiday{
        dayOfYear date;
        bool parkingEnforcement;
    public:
        holiday(dayOfYear d0 = dayOfYear{1, 1}, bool p0 = false): date{d0}, parkingEnforcement{p0}{}
        //holiday(int m, int d, bool p): date{m, d}, parkingEnforcement{p}

        void print() const{
            date.print();
            if (parkingEnforcement)
                std::cout << "Parking laws will be enforced.\n";
            else
                std::cout << "Parking laws will not be enforced.\n";
        } 

        const dayOfYear& getDate() const { return date; }
        void setDate(const dayOfYear& d){ date = d; }
    };
}