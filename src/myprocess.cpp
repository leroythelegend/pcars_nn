#include "myprocess.h"

#include "packettelemetrydatav1.h"
#include "packettelemetrydata.h"

#include <iostream>

using namespace std;

namespace pcars
{

    void MyProcessV1::playing(PacketPtr & packet)
    {
        if (packet->type() == "PacketTelemetryDataV1") {
            PacketTelemetryDataV1 * p = dynamic_cast<PacketTelemetryDataV1 *>(packet.get());
            cout << "Build Version                 : " << p->build_version()                 << endl;
            cout << "Sequence Number               : " << p->sequence_number()               << endl;
            cout << "Packet Type                   : " << p->packet_type()                   << endl;
            cout << "Session State                 : " << p->session_state()                 << endl;
            cout << "Game State                    : " << p->game_state()                    << endl;
            cout << "Viewed Participant Index      : " << p->viewed_participant_index()      << endl;
            cout << "Number of Participants        : " << p->num_participants()              << endl;
            cout << "Unfiltered Throttle           : " << p->unfiltered_throttle()           << endl;
            cout << "Unfiltered Brake              : " << p->unfiltered_brake()              << endl;
            cout << "Unfiltered Steering           : " << p->unfiltered_steering()           << endl;
            cout << "Unfiltered Clutch             : " << p->unfiltered_clutch()             << endl;
            cout << "Race State Flags              : " << p->race_state_flags()              << endl;
            cout << "Laps in Event                 : " << p->laps_in_event()                 << endl;
            cout << "Best Lap Time                 : " << p->best_lap_time()                 << endl;
            cout << "last Lap Time                 : " << p->last_lap_time()                 << endl;
            cout << "Current Time                  : " << p->current_time()                  << endl;
            cout << "Split Time Ahead              : " << p->split_time_ahead()              << endl;
            cout << "Split Time Behind             : " << p->split_time_behind()             << endl;
            cout << "Split Time                    : " << p->split_time()                    << endl;
            cout << "Event Time Remaining          : " << p->event_time_remaining()          << endl;
            cout << "Personal Fastest Lap Time     : " << p->personal_fastest_lap_time()     << endl;
            cout << "World Fastest Lap Time        : " << p->world_fastest_lap_time()        << endl;
            cout << "Current Sector1 Time          : " << p->current_sector1_time()          << endl;
            cout << "Current Sector2 Time          : " << p->current_sector2_time()          << endl;
            cout << "Current Sector3 Time          : " << p->current_sector3_time()          << endl;
            cout << "Fastest Sector1 Time          : " << p->fastest_sector1_time()          << endl;
            cout << "Fastest Sector2 Time          : " << p->fastest_sector2_time()          << endl;
            cout << "Fastest Sector3 Time          : " << p->fastest_sector3_time()          << endl;
            cout << "Personal Fastest Sector1 Time : " << p->personal_fastest_sector1_time() << endl;
            cout << "Personal Fastest Sector2 Time : " << p->personal_fastest_sector2_time() << endl;
            cout << "Personal Fastest Sector3 Time : " << p->personal_fastest_sector3_time() << endl;
            cout << "World Fastest Sector1 Time    : " << p->world_fastest_sector1_time()    << endl;
            cout << "World Fastest Sector2 Time    : " << p->world_fastest_sector2_time()    << endl;
            cout << "World Fastest Sector3 Time    : " << p->world_fastest_sector3_time()    << endl;
            cout << "Joy Pad                       : " << p->joy_pad()                       << endl;
            cout << "Flag Reason                   : " << p->flag_reason()                   << endl;
            cout << "Flag Colour                   : " << p->flag_colour()                   << endl;
            cout << "Pit Mode                      : " << p->pit_mode()                      << endl;
            cout << "Pit Schedule                  : " << p->pit_schedule()                  << endl;
            cout << "Oil Temp Celsius              : " << p->oil_temp_celsius()              << endl;
            cout << "Oil Pressure KPA              : " << p->oil_pressure_kpa()              << endl;
            cout << "Water Temp Celsius            : " << p->water_temp_celsius()            << endl;
            cout << "Water Pressure KPA            : " << p->water_pressure_kpa()            << endl;
            cout << "Fuel Pressure KPA             : " << p->fuel_pressure_kpa()             << endl;
            cout << "Car Flags                     : " << p->car_flags()                     << endl;
            cout << "Fuel Capacity                 : " << p->fuel_capacity()                 << endl;
            cout << "Brake                         : " << p->brake()                         << endl;
            cout << "Throttle                      : " << p->throttle()                      << endl;
            cout << "Clutch                        : " << p->clutch()                        << endl;
            cout << "Steering                      : " << p->steering()                      << endl;
            cout << "Fuel Level                    : " << p->fuel_level()                    << endl;
            cout << "Speed                         : " << p->speed()                         << endl;
            cout << "RPM                           : " << p->rpm()                           << endl;
            cout << "Max RPM                       : " << p->max_rpm()                       << endl;
            cout << "Number of Gears               : " << p->num_gears()                     << endl;
            cout << "Gear                          : " << p->gear()                          << endl;
            cout << "Boost Amount                  : " << p->boost_amount()                  << endl;
            cout << "Enforced Pit Stop Lap         : " << p->enforced_pit_stop_lap()         << endl;
            cout << "Crash State                   : " << p->crash_state()                   << endl;
            cout << "Odometer KM                   : " << p->odometer_km()                   << endl;
            cout << "Orientation 1                 : " << p->orientation().at(0)             << endl;
            cout << "Orientation 2                 : " << p->orientation().at(1)             << endl;
            cout << "Orientation 3                 : " << p->orientation().at(2)             << endl;
            cout << "Local Velocity 1              : " << p->local_velocity().at(0)          << endl;
            cout << "Local Velocity 2              : " << p->local_velocity().at(1)          << endl;
            cout << "Local Velocity 3              : " << p->local_velocity().at(2)          << endl;
            cout << "World Velocity 1              : " << p->world_velocity().at(0)          << endl;
            cout << "World Velocity 2              : " << p->world_velocity().at(1)          << endl;
            cout << "World Velocity 3              : " << p->world_velocity().at(2)          << endl;
            cout << "Angular Velocity 1            : " << p->angular_velocity().at(0)        << endl;
            cout << "Angular Velocity 2            : " << p->angular_velocity().at(1)        << endl;
            cout << "Angular Velocity 3            : " << p->angular_velocity().at(2)        << endl;	
            cout << "Local Acceleration 1          : " << p->local_acceleration().at(0)      << endl;
            cout << "Local Acceleration 2          : " << p->local_acceleration().at(1)      << endl;    
            cout << "Local Acceleration 3          : " << p->local_acceleration().at(2)      << endl;    
            cout << "World Acceleration 1          : " << p->world_acceleration().at(0)      << endl;
            cout << "World Acceleration 2          : " << p->world_acceleration().at(1)      << endl;    
            cout << "World Acceleration 3          : " << p->world_acceleration().at(2)      << endl; 
            cout << "Extents Centre 1              : " << p->extents_centre().at(0)          << endl;
            cout << "Extents Centre 2              : " << p->extents_centre().at(1)          << endl;    
            cout << "Extents Centre 3              : " << p->extents_centre().at(2)          << endl; 
            cout << "Tyre Flags 1                  : " << p->tyre_flags().at(0)              << endl;
            cout << "Tyre Flags 2                  : " << p->tyre_flags().at(1)              << endl;
            cout << "Tyre Flags 3                  : " << p->tyre_flags().at(2)              << endl;
            cout << "Tyre Flags 4                  : " << p->tyre_flags().at(3)              << endl;
            cout << "Terrain 1                     : " << p->terrain().at(0)                 << endl;
            cout << "Terrain 2                     : " << p->terrain().at(1)                 << endl;
            cout << "Terrain 3                     : " << p->terrain().at(2)                 << endl;
            cout << "Terrain 4                     : " << p->terrain().at(3)                 << endl;
            cout << "Tyre Y 1                      : " << p->tyre_y().at(0)                  << endl;
            cout << "Tyre Y 2                      : " << p->tyre_y().at(1)                  << endl;
            cout << "Tyre Y 3                      : " << p->tyre_y().at(2)                  << endl;
            cout << "Tyre Y 4                      : " << p->tyre_y().at(3)                  << endl;
            cout << "Tyre RPS 1                    : " << p->tyre_rps().at(0)                << endl;
            cout << "Tyre RPS 2                    : " << p->tyre_rps().at(1)                << endl;
            cout << "Tyre RPS 3                    : " << p->tyre_rps().at(2)                << endl;
            cout << "Tyre RPS 4                    : " << p->tyre_rps().at(3)                << endl;
            cout << "Tyre Slip Speed 1             : " << p->tyre_slip_speed().at(0)         << endl;
            cout << "Tyre Slip Speed 2             : " << p->tyre_slip_speed().at(1)         << endl;
            cout << "Tyre Slip Speed 3             : " << p->tyre_slip_speed().at(2)         << endl;
            cout << "Tyre Slip Speed 4             : " << p->tyre_slip_speed().at(3)         << endl;
            cout << "Tyre Temp 1                   : " << p->tyre_temp().at(0)               << endl;
            cout << "Tyre Temp 2                   : " << p->tyre_temp().at(1)               << endl;
            cout << "Tyre Temp 3                   : " << p->tyre_temp().at(2)               << endl;
            cout << "Tyre Temp 4                   : " << p->tyre_temp().at(3)               << endl;
            cout << "Tyre Grip 1                   : " << p->tyre_grip().at(0)               << endl;
            cout << "Tyre Grip 2                   : " << p->tyre_grip().at(1)               << endl;
            cout << "Tyre Grip 3                   : " << p->tyre_grip().at(2)               << endl;
            cout << "Tyre Grip 4                   : " << p->tyre_grip().at(3)               << endl;
            cout << "Tyre Height Above Ground 1    : " << p->tyre_height_above_ground().at(0)<< endl;
            cout << "Tyre Height Above Ground 2    : " << p->tyre_height_above_ground().at(1)<< endl;
            cout << "Tyre Height Above Ground 3    : " << p->tyre_height_above_ground().at(2)<< endl;
            cout << "Tyre Height Above Ground 4    : " << p->tyre_height_above_ground().at(3)<< endl;
            cout << "Tyre Lateral Stiffness 1      : " << p->tyre_lateral_stiffness().at(0)  << endl;
            cout << "Tyre Lateral Stiffness 2      : " << p->tyre_lateral_stiffness().at(1)  << endl;
            cout << "Tyre Lateral Stiffness 3      : " << p->tyre_lateral_stiffness().at(2)  << endl;
            cout << "Tyre Lateral Stiffness 4      : " << p->tyre_lateral_stiffness().at(3)  << endl;
            cout << "Tyre Wear 1                   : " << p->tyre_wear().at(0)               << endl;
            cout << "Tyre Wear 2                   : " << p->tyre_wear().at(1)               << endl;
            cout << "Tyre Wear 3                   : " << p->tyre_wear().at(2)               << endl;
            cout << "Tyre Wear 4                   : " << p->tyre_wear().at(3)               << endl;
            cout << "Brake Damage 1                : " << p->brake_damage().at(0)            << endl;
            cout << "Brake Damage 2                : " << p->brake_damage().at(1)            << endl;
            cout << "Brake Damage 3                : " << p->brake_damage().at(2)            << endl;
            cout << "Brake Damage 4                : " << p->brake_damage().at(3)            << endl;
            cout << "Suspension Damage 1           : " << p->suspension_damage().at(0)       << endl;
            cout << "Suspension Damage 2           : " << p->suspension_damage().at(1)       << endl;
            cout << "Suspension Damage 3           : " << p->suspension_damage().at(2)       << endl;
            cout << "Suspension Damage 4           : " << p->suspension_damage().at(3)       << endl;
            cout << "Brake Temp Celsius 1          : " << p->brake_temp_celsius().at(0)      << endl;
            cout << "Brake Temp Celsius 2          : " << p->brake_temp_celsius().at(1)      << endl;
            cout << "Brake Temp Celsius 3          : " << p->brake_temp_celsius().at(2)      << endl;
            cout << "Brake Temp Celsius 4          : " << p->brake_temp_celsius().at(3)      << endl;


        }

        packets_.push_back(packet);
    }

    void MyProcessV1::menu(PacketPtr &)
    {
            if (packets_.size()) {
                cout << "Num Packets " << packets_.size() << endl;
            }
            packets_.clear();
    }

    void MyProcessV2::playing(PacketPtr & packet)
    {
        if (packet->type() == "PacketTelemetryData") {
            PacketTelemetryData * p = dynamic_cast<PacketTelemetryData *>(packet.get());

            cout << "Viewed Participant Index : " << p->viewed_participant_index()      << endl;
            cout << "Unfiltered Throttle      : " << p->unfiltered_throttle()           << endl;
            cout << "Unfiltered Brake         : " << p->unfiltered_brake()              << endl;
            cout << "Unfiltered Steering      : " << p->unfiltered_steering()           << endl;
            cout << "Unfiltered Clutch        : " << p->unfiltered_clutch()             << endl;
        }

        packets_.push_back(packet);
    }

    void MyProcessV2::menu(PacketPtr &)
    {
            if (packets_.size()) {
                cout << "Num Packets " << packets_.size() << endl;
            }
            packets_.clear();
    }

}