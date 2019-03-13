#include "telemetryv2.h"

#include <memory>
#include <vector>

#include "transportudp.h"
#include "capture.h"
#include "packetbase.h"
#include "packetparticipantvehiclenamesdata.h"
#include "packettelemetrydata.h"
#include "packetracedata.h"
#include "packetparticipantsdata.h"
#include "packettimingdata.h"
#include "packettimestatsdata.h"
#include "packetgamestate.h"
#include "gamestate.h"


using namespace pcars;
using namespace std;

namespace pcars
{
    void TelemetryV2::start(const std::shared_ptr<Process> & process)
    {
    
        TransportUDP transport(5606);

        Capture capture;

        capture.nextGameState(make_shared<GamePlayingStateV2>(process));

        while (true) {
            const PCars_Data data = transport.read(30000);
            PacketBase packetBase;
            Position pos = 0;
            packetBase.decode(data, pos);

            if (packetBase.packet_type() == 0 && data.size() == 559) {
                shared_ptr<Packet> packet = make_shared<PacketTelemetryData>();
                pos = 0;
                packet->decode(data, pos);
                capture.capturePacket(packet);
            }
            else if (packetBase.packet_type() == 1 && data.size() == 308) {
                shared_ptr<Packet> packet = make_shared<PacketRaceData>();
                pos = 0;
                packet->decode(data, pos);
                capture.capturePacket(packet);
            }
            else if (packetBase.packet_type() == 2 && data.size() == 1136) {
                shared_ptr<Packet> packet = make_shared<PacketParticipantsData>();
                pos = 0;
                packet->decode(data, pos);
                capture.capturePacket(packet);
            }
            else if (packetBase.packet_type() == 3 && data.size() == 1063) {
                shared_ptr<Packet> packet = make_shared<PacketTimingData>();
                pos = 0;
                packet->decode(data, pos);
                capture.capturePacket(packet);
            }
            else if (packetBase.packet_type() == 4 && data.size() == 24) {
                shared_ptr<Packet> packet = make_shared<PacketGameState>();
                pos = 0;
                packet->decode(data, pos);
                capture.capturePacket(packet);
            }
            else if (packetBase.packet_type() == 7 && data.size() == 1040) {
                shared_ptr<Packet> packet = make_shared<PacketTimeStatsData>();
                pos = 0;
                packet->decode(data, pos);
                capture.capturePacket(packet);
            }
            else if (packetBase.packet_type() == 8 && data.size() == 1164) {
                shared_ptr<Packet> packet = make_shared<PacketParticipantsVehicleNamesData>();
                pos = 0;
                packet->decode(data, pos);
                capture.capturePacket(packet);
            }
            // missing vehicle class names
        }
    }
}