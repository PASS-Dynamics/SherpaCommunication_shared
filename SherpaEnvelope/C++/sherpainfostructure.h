#ifndef SHERPAINFOSTRUCTURE_H
#define SHERPAINFOSTRUCTURE_H

#include "sherpalib.h"
#include <boost/thread.hpp>
#include <json/single_include/nlohmann/json.hpp>
using json = nlohmann::json;


#include "SherpaEnvelope.hpp"
#include "AcoustincHailer.hpp"
#include "Attitude.hpp"
#include "CamOptions.hpp"
#include "Diagnostic.hpp"
#include "JoystickInput.hpp"
#include "LaserDazzer.hpp"
#include "PostionControl.hpp"
#include "PrimaryVideo.hpp"
#include "SearchLigth.hpp"
#include "StatusInfo.hpp"
#include "TrackPreset.hpp"
#include "WeatherForecast.hpp"
#include "MotorDriver.hpp"




class SherpaEnvelopeEnv : public SherpaEnvelope {
public:
    json to_json() {
        json j = json{
        {"Type", this->type},
        {"Status", this->status},
        {"Error", this->error},
        {"Timestamp", this->timestamp},
        {"Id", this->id},
        {"Payload", this->payload}};

        return j;
    }

    void from_json(const json& j) {
        j.at("Type").get_to(this->type);
        j.at("Status").get_to(this->status);
        j.at("Error").get_to(this->error);
        j.at("Timestamp").get_to(this->timestamp);
        j.at("Id").get_to(this->id);
        j.at("Payload").get_to(this->payload);
    }

};


class AcoustincHailerEnv : public AcoustincHailer {
public:
    json to_json() {
        json j = json{{"Mic", this->Mic}, {"Mute", this->Mute}, {"Volume", this->Volume}, {"AcousticBeamAperture", this->AcousticBeamAperture}};
        return j;
    }

    void from_json(const json& j) {
        j.at("Mic").get_to(this->Mic);
        j.at("Mute").get_to(this->Mute);
        j.at("Volume").get_to(this->Volume);
        j.at("AcousticBeamAperture").get_to(this->AcousticBeamAperture);
    }
};



class AttitudeEnv : public Attitude {
public:
    json to_json() {
        json j = json{{"Rool", this->Rool}, {"Pitch", this->Pitch}, {"Hdg", this->Hdg}};
        return j;
    }

    void from_json(const json& j) {
        j.at("Rool").get_to(this->Rool);
        j.at("Pitch").get_to(this->Pitch);
        j.at("Hdg").get_to(this->Hdg);
    }
};


class JoystickInputEnv : public JoystickInput {
public:
    json to_json() {
        json j = json{{"X", this->X}, {"Y", this->Y}, {"Z", this->Z}};
        return j;
    }

    void from_json(const json& j) {
        j.at("X").get_to(this->X);
        j.at("Y").get_to(this->Y);
        j.at("Z").get_to(this->Z);
    }
};

class MotorDriverEnv : public MotorDriver {
public:
    json to_json() {
        json j = json{{"cmd", this->cmd}, {"enable", this->enable}, {"errors", this->errors}, {"status", this->status}};
        return j;
    }

    void from_json(const json& j) {
        j.at("cmd").get_to(this->cmd);
        j.at("enable").get_to(this->enable);
        j.at("errors").get_to(this->errors);
        j.at("status").get_to(this->status);
    }
};



class SherpaInfoStructure
{
public:
    SherpaInfoStructure(){};


    AcoustincHailer AcoustincHailer_Instance;
    Attitude Attitude_Instance;
    CamOptions CamOptions_Instance;
    Diagnostic Diagnostic_Instance;
    JoystickInput JoystickInput_Instance;
    LaserDazzer LaserDazzer_Instance;
    PostionControl PostionControl_Instance;
    PrimaryVideo PrimaryVideo_Instance;
    //RealTimeInfo RealTimeInfo_Instance;
    SearchLight SearchLigth_Instance;
    StatusInfo StatusInfo_Instance;
    TrackPreset TrackPreset_Instance;
    WeatherForecast WeatherForecast_Instance;
    MotorDriver MotorDriver_Instance;


};

#endif // SHERPAINFOSTRUCTURE_H
