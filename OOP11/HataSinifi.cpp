#include "HataSinifi.h" // icinde iostream var

using namespace std;

HataSinifi::HataSinifi(string _hataMesaji) {
    hataMesaji = _hataMesaji;
}

string HataSinifi::getHataMesaji() {
    return hataMesaji;
}

