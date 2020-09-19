#include "decoder1bit2bit3bitls3bitss.h"

namespace pcars {

Decoder1bit2bit3bitls3bitss::Decoder1bit2bit3bitls3bitss() {
	add(&lsb3bit_);
	add(&thirtytwo_);
	add(&sixteen_);
	add(&eight_);
}

void Decoder1bit2bit3bitls3bitss::decode(const PCars_Data &data, unsigned int &position) {
	DecoderComposite::decode(data, position);
	++position;
}

///	(00X00000)
bool Decoder1bit2bit3bitls3bitss::thirytwo_bit() const {
    return thirtytwo_.boolean();
}

///	(000X0000)
bool Decoder1bit2bit3bitls3bitss::sixteen_bit() const {
    return sixteen_.boolean();
}

///	(0000X000)
bool Decoder1bit2bit3bitls3bitss:: eight_bit() const {
    return eight_.boolean();
}

unsigned int Decoder1bit2bit3bitls3bitss::ls3bits() const {
	return lsb3bit_.ls3bits();
}


}

