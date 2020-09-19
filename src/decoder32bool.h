#ifndef PCARS_DECODER_32_BOOL_H_
#define PCARS_DECODER_32_BOOL_H_

#include "decoder.h"

#include <string>

namespace pcars {

	/// \class Decoder32bool
	/// \brief Decode bit 32 to bool

	class Decoder32bool : public Decoder {
	public:
		/// Constructor
		Decoder32bool();
		/// Destructor
		virtual ~Decoder32bool() {}

		/// \brief Decode PCars Data at Position
		///
		///		Decodes PCars Data at position in Data
		///
		/// \param PCars_Data: data to be decoded
		/// \param Postion: position in data to be decoded
		/// \return void
		/// \throw nothing

		void decode(const PCars_Data &, Position &) override;

		/// \brief Get vector of strings
		///
		///
		/// \return value
		/// \throw nothing

		bool boolean() const;

	private:
		bool boolean_;
	};

}

#endif

