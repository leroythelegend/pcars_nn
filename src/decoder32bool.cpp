#include "decoder32bool.h"

#include "exception.h"

#include <iostream>

using namespace std;

namespace pcars {

Decoder32bool::Decoder32bool() {
}

void Decoder32bool::decode(const PCars_Data & data, Position & position) {
    boolean_ = (data.at(position) & 0x20);
}

bool Decoder32bool::boolean() const {
    return boolean_;
}

}

