#pragma once
#include <iostream>

class radnik{
    private:
        std::string ime_;
        std::string prezime_;
        int godine_;
        double plata_;
        std::string brojTel_;
    public:
      //seteri
        void setime(std::string ime){ime_ = ime;}
        void setprezime (std::string prezime){ prezime_ = prezime;}
        void setgodine (int godine ){godine_ = godine;}
        void setplata(double plata){plata_ = plata;}
        void setbrojTel(std::string brojTel){brojTel_ = brojTel;}

};