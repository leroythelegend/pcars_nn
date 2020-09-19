#include "decoder8bool.h"

#include "exception.h"

#include <iostream>

using namespace std;

namespace pcars {

Decoder8bool::Decoder8bool() {
}

void Decoder8bool::decode(const PCars_Data & data, Position & position) {
    boolean_ = (data.at(position) & 0x08);
}

bool Decoder8bool::boolean() const {
    return boolean_;
}

}

