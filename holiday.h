#pragma once
#include "dayOfYear.h"
#include <string>

namespace Seoyeowon2649020{
    class holiday{
        std::string name;
        dayOfYear date;
        bool parkingEnforcement;
    public:
        holiday(const std::string& n = "no name yet", dayOfYear d0 = dayOfYear{1, 1}, bool p0 = false):
            name{n}, date{d0}, parkingEnforcement{p0}{}
        //holiday(int m, int d, bool p): date{m, d}, parkingEnforcement{p}

        void print() const{
            std::cout << name << ": ";
            date.print();
            if (parkingEnforcement)
                std::cout << "Parking laws will be enforced.\n";
            else
                std::cout << "Parking laws will not be enforced.\n";
        }

        friend std::ostream& operator<<(std::ostream& os, const holiday& h){
            os << h.name << ": ";
            os << h.date;
            if (h.parkingEnforcement)
                os  << "Parking laws will be enforced.\n";
            else
                os << "Parking laws will not be enforced.\n";
            return os;
        }

        friend std::istream& operator>>(std::istream& is, holiday& h){
            std::cout << "Enter holiday name: ";
            std::getline(is >> std::ws, h.name);
            is >> h.date;
            std::cout << "Enter parking law enforcement: (1(true) or 0(false)): ";
            is >> h.parkingEnforcement;
            return is;
        }

        void input(){
            std::cout << "Enter holiday name: ";
            std::getline(std::cin >> std::ws, name);
            date.input();
            std::cout << "Enter parking law enforcement: (1(true) or 0(false)): ";
            std::cin >> parkingEnforcement;
        }


        const std::string& getName() const {return name;}
        const dayOfYear& getDate() const { return date; }
        void setName(const std::string& n) {name = n;}
        void setDate(const dayOfYear& d){ date = d; }
        void setParkingEnforcement(bool p) {parkingEnforcement = p;}
    };
}