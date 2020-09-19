#include "decoder16bool.h"

#include "exception.h"

#include <iostream>

using namespace std;

namespace pcars {

Decoder16bool::Decoder16bool() {
}

void Decoder16bool::decode(const PCars_Data & data, Position & position) {
    boolean_ = (data.at(position) & 0x10);
}

bool Decoder16bool::boolean() const {
    return boolean_;
}

}

