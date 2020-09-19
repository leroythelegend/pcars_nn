#ifndef PCARS_DECODER_1BIT_2BIT_3BIT_LS3BIT_H_
#define PCARS_DECODER_1BIT_2BIT_3BIT_LS3BIT_H_

#include "decodercomposite.h"

#include "decoderls3bits.h"
#include "decoder32bool.h"
#include "decoder16bool.h"
#include "decoder8bool.h"

namespace pcars {

	///
	///	Decodes sequence of bits in byte
	///

	class Decoder1bit2bit3bitls3bitss: public DecoderComposite {
	public:

		Decoder1bit2bit3bitls3bitss();
		virtual ~Decoder1bit2bit3bitls3bitss() noexcept = default;

		void decode(const PCars_Data &, Position &) override;

		///	(00X00000)
		bool thirytwo_bit() const;
		///	(000X0000)
		bool sixteen_bit() const;
		///	(0000X000)
		bool eight_bit() const;
		/// Get 3 Least significant bits  (00000XXX)
		unsigned int ls3bits() const;

	private:
		DecoderLS3bits lsb3bit_;
		Decoder32bool thirtytwo_;
		Decoder16bool sixteen_;
		Decoder8bool eight_;

	};

}

#endif

