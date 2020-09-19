#ifndef PCARS_PROCESSLAP_H_
#define PCARS_PROCESSLAP_H_

#include <memory>
#include <vector>

#include "process.h"

namespace pcars {

	/// \class Process Lap
	/// \brief Capture lap data

	class ProcessLap : public Process {
	public:

		ProcessLap() 
			: participants_{0},
              lapnumber_{0},
              capturelap_{false},
              startrecording_{false} {}
		/// Destructor
		virtual ~ProcessLap() {}

		/// \brief process playing packet
		///
		/// \param packet
		/// \return void
		/// \throw nothing

		void playing(PacketPtr &) override;

	private:
		int participants_;
        unsigned int lapnumber_;
        bool capturelap_;
        bool startrecording_;

		ProcessLap(const ProcessLap &) = delete;
		const ProcessLap &operator =(const ProcessLap &) = delete; 
	};
}

#endif
