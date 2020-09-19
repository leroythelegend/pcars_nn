#ifndef PCARS_DECODER_8_BOOL_H_
#define PCARS_DECODER_8_BOOL_H_

#include "decoder.h"

#include <string>

namespace pcars {

	/// \class Decoder8bool
	/// \brief Decode bit 16 to bool

	class Decoder8bool : public Decoder {
	public:
		/// Constructor
		Decoder8bool();
		/// Destructor
		virtual ~Decoder8bool() {}

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

