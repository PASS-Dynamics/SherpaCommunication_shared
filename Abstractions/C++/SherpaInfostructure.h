#ifndef SHERPAINFOSTRUCTURE_H
#define SHERPAINFOSTRUCTURE_H

#include "sherpalib.h"
#include <json/single_include/nlohmann/json.hpp>
using json = nlohmann::json;


#include "SherpaEnvelope.hpp"
#include "AcoustincHailer.hpp"
#include "SherpaAttitude.hpp"
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



//SherpaEnvelopeType type;
//SherpaEnvelopeRequestType RequestType;
//SherpaEnvelopeStatus status = SherpaEnvelopeStatus::Ok;
//std::string error;
//uint64_t timestamp = 0;
//std::string id;
//std::string payload;


class SherpaEnvelopeEnv : public SherpaEnvelope {
public:
    json to_json() {
        json j = json{
        {"Type", this->type},
        {"RequestType", this->RequestType},
        {"Status", this->status},
        {"Error", this->error},
        {"Timestamp", this->timestamp},
        {"Id", this->id},
        {"Payload", this->payload}};

        return j;
    }

    void from_json(const json& j) {
        j.at("Type").get_to(this->type);
        j.at("RequestType").get_to(this->RequestType);
        j.at("Status").get_to(this->status);
        j.at("Error").get_to(this->error);
        j.at("Timestamp").get_to(this->timestamp);
        j.at("Id").get_to(this->id);
        j.at("Payload").get_to(this->payload);
    }

};

//***************************************************************************************************//

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

    void copy_to(AcoustincHailer* instance) {

		instance->AcousticBeamAperture = this->AcousticBeamAperture;
		instance->Mic = this->Mic;
		instance->Mute = this->Mute;
		instance->Volume = this->Volume;
	}

    void copy_from(AcoustincHailer* instance) {

        this->AcousticBeamAperture = instance->AcousticBeamAperture;
        this->Mic = instance->Mic;
        this->Mute = instance->Mute;
        this->Volume = instance->Volume;
    }
};
class SherpaAttitudeEnv : public SherpaAttitude {
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

    void copy_to(SherpaAttitude* instance) {

        instance->Hdg = this->Hdg;
        instance->Pitch = this->Pitch;
        instance->Rool = this->Rool;
    }

    void copy_from(SherpaAttitude* instance) {

        this->Hdg = instance->Hdg;
        this->Pitch = instance->Pitch;
        this->Rool = instance->Rool;
    }
};
class CamOptionsEnv : public CamOptions{
public:
    json to_json() {
        json j = json{ {"AutomaticBEamSync", this->AutomaticBEamSync}, {"CamRec", this->CamRec}, {"Zoom", this->Zoom} };
        return j;
    }

    void from_json(const json& j) {
        j.at("AutomaticBEamSync").get_to(this->AutomaticBEamSync);
        j.at("CamRec").get_to(this->CamRec);
        j.at("Zoom").get_to(this->Zoom);
    }

    void copy_to(CamOptions* instance) {

        instance->AutomaticBEamSync = this->AutomaticBEamSync;
        instance->CamRec = this->CamRec;
        instance->Zoom = this->Zoom;
    }

    void copy_from(CamOptions* instance) {

        this->AutomaticBEamSync = instance->AutomaticBEamSync;
        this->CamRec = instance->CamRec;
        this->Zoom = instance->Zoom;
    }
};
class DiagnosticEnv : public Diagnostic {
public:
    json to_json() {
        json j = json{ {"Messages", this->Messages} };
        return j;
    }

    void from_json(const json& j) {
        j.at("Messages").get_to(this->Messages);
    }

    void copy_to(Diagnostic* instance) {

        instance->Messages = this->Messages;
    }

    void copy_from(Diagnostic* instance) {

        this->Messages = instance->Messages;
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

    void copy_to(JoystickInput* instance) {

        instance->X = this->X;
        instance->Y = this->Y;
        instance->Z = this->Z;
    }

    void copy_from(JoystickInput* instance) {

        this->X = instance->X;
        this->Y = instance->Y;
        this->Z = instance->Z;
    }
};
class LaserDazzerEnv : public LaserDazzer {
public:
    json to_json() {
        json j = json{ {"Power", this->Power}, {"Strobo", this->Strobo} };
        return j;
    }

    void from_json(const json& j) {
        j.at("Power").get_to(this->Power);
        j.at("Strobo").get_to(this->Strobo);
    }

    void copy_to(LaserDazzer* instance) {

        instance->Power = this->Power;
        instance->Strobo = this->Strobo;
    }

    void copy_from(LaserDazzer* instance) {

        this->Power = instance->Power;
        this->Strobo = instance->Strobo;
    }
};
class PostionControlEnv : public PostionControl {
public:
    json to_json() {
        json j = json{ 
            {"Stabilization", this->Stabilization},
            {"GoToRestPosition", this->GoToRestPosition} ,
            {"GoToNextRefPosition", this->GoToNextRefPosition} ,
            {"Elevation", this->Elevation} ,
            {"PanSpeed", this->PanSpeed} ,
            {"TiltSpeed", this->TiltSpeed} ,
            {"Azimut", this->Azimut}
        };
        return j;
    }

    void from_json(const json& j) {
        j.at("Stabilization").get_to(this->Stabilization);
        j.at("GoToRestPosition").get_to(this->GoToRestPosition);
        j.at("GoToNextRefPosition").get_to(this->GoToNextRefPosition);
        j.at("Elevation").get_to(this->Elevation);
        j.at("PanSpeed").get_to(this->PanSpeed);
        j.at("TiltSpeed").get_to(this->TiltSpeed);
        j.at("Azimut").get_to(this->Azimut);
    }

    void copy_to(PostionControl* instance) {

        instance->Stabilization = this->Stabilization;
        instance->GoToRestPosition = this->GoToRestPosition;
        instance->GoToNextRefPosition = this->GoToNextRefPosition;
        instance->Elevation = this->Elevation;
        instance->PanSpeed = this->PanSpeed;
        instance->TiltSpeed = this->TiltSpeed;
        instance->Azimut = this->Azimut;
    }

    void copy_from(PostionControl* instance) {

        this->Stabilization = instance->Stabilization;
        this->GoToRestPosition = instance->GoToRestPosition;
        this->GoToNextRefPosition = instance->GoToNextRefPosition;
        this->Elevation = instance->Elevation;
        this->PanSpeed = instance->PanSpeed;
        this->TiltSpeed = instance->TiltSpeed;
        this->Azimut = instance->Azimut;
    }
};
class PrimaryVideoEnv : public PrimaryVideo {
public:
    json to_json() {
        json j = json{ {"Distance", this->Distance}, {"ObjectIdentified", this->ObjectIdentified}, {"ObjectIdentifiedAccuracy", this->ObjectIdentifiedAccuracy} };
        return j;
    }

    void from_json(const json& j) {
        j.at("Distance").get_to(this->Distance);
        j.at("ObjectIdentified").get_to(this->ObjectIdentified);
        j.at("ObjectIdentifiedAccuracy").get_to(this->ObjectIdentifiedAccuracy);
    }

    void copy_to(PrimaryVideo* instance) {

        instance->Distance = this->Distance;
        instance->ObjectIdentified = this->ObjectIdentified;
        instance->ObjectIdentifiedAccuracy = this->ObjectIdentifiedAccuracy;
    }

    void copy_from(PrimaryVideo* instance) {

        this->Distance = instance->Distance;
        this->ObjectIdentified = instance->ObjectIdentified;
        this->ObjectIdentifiedAccuracy = instance->ObjectIdentifiedAccuracy;
    }
};
class SearchLightEnv : public SearchLight {
public:
    json to_json() {
        json j = json{ {"Power", this->Power}, {"Intensity", this->Intensity}, {"BeamAperture", this->BeamAperture} };
        return j;
    }

    void from_json(const json& j) {
        j.at("Power").get_to(this->Power);
        j.at("Intensity").get_to(this->Intensity);
        j.at("BeamAperture").get_to(this->BeamAperture);
    }

    void copy_to(SearchLight* instance) {

        instance->Power = this->Power;
        instance->Intensity = this->Intensity;
        instance->BeamAperture = this->BeamAperture;
    }

    void copy_from(SearchLight* instance) {

        this->Power = instance->Power;
        this->Intensity = instance->Intensity;
        this->BeamAperture = instance->BeamAperture;
    }
};
class StatusInfoEnv : public StatusInfo {
public:
    json to_json() {
        json j = json{ 
            {"EmittingTrack", this->EmittingTrack}, 
            {"AudioTracking", this->AudioTracking}, 
            {"LaserDazzler", this->LaserDazzler} ,
            {"SearchLight", this->SearchLight} ,
            {"AhdEmission", this->AhdEmission} ,
        
        };
        return j;
    }

    void from_json(const json& j) {
        j.at("EmittingTrack").get_to(this->EmittingTrack);
        j.at("AudioTracking").get_to(this->AudioTracking);
        j.at("LaserDazzler").get_to(this->LaserDazzler);
        j.at("SearchLight").get_to(this->SearchLight);
        j.at("AhdEmission").get_to(this->AhdEmission);
    }

    void copy_to(StatusInfo* instance) {

        instance->EmittingTrack = this->EmittingTrack;
        instance->AudioTracking = this->AudioTracking;
        instance->LaserDazzler = this->LaserDazzler;
        instance->SearchLight = this->SearchLight;
        instance->AhdEmission = this->AhdEmission;
    }

    void copy_from(StatusInfo* instance) {

        this->EmittingTrack = instance->EmittingTrack;
        this->AudioTracking = instance->AudioTracking;
        this->LaserDazzler = instance->LaserDazzler;
        this->SearchLight = instance->SearchLight;
        this->AhdEmission = instance->AhdEmission;
    }
};
class TrackPresetEnv : public TrackPreset {
public:
    json to_json() {
        json j = json{
            {"Tracks", this->Tracks},
            {"EmittingTrack", this->EmittingTrack},
            {"Loop", this->Loop}
        };
        return j;
    }

    void from_json(const json& j) {
        j.at("Tracks").get_to(this->Tracks);
        j.at("EmittingTrack").get_to(this->EmittingTrack);
        j.at("Loop").get_to(this->Loop);
    }

    void copy_to(TrackPreset* instance) {

        instance->Tracks = this->Tracks;
        instance->EmittingTrack = this->EmittingTrack;
        instance->Loop = this->Loop;
    }

    void copy_from(TrackPreset* instance) {

        this->Tracks = instance->Tracks;
        this->EmittingTrack = instance->EmittingTrack;
        this->Loop = instance->Loop;
    }
};
class WeatherForecastEnv : public WeatherForecast {
public:
    json to_json() {
        json j = json{
            {"Date", this->Date},
            {"TemperatureC", this->TemperatureC},
            {"Summary", this->Summary}
        };
        return j;
    }

    void from_json(const json& j) {
        j.at("Date").get_to(this->Date);
        j.at("TemperatureC").get_to(this->TemperatureC);
        j.at("Summary").get_to(this->Summary);
    }

    void copy_to(WeatherForecast* instance) {

        instance->Date = this->Date;
        instance->TemperatureC = this->TemperatureC;
        instance->Summary = this->Summary;
    }

    void copy_from(WeatherForecast* instance) {

        this->Date = instance->Date;
        this->TemperatureC = instance->TemperatureC;
        this->Summary = instance->Summary;
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

    void copy_to(MotorDriver* instance) {

        instance->cmd = this->cmd;
        instance->enable = this->enable;
        instance->errors = this->errors;
        instance->status = this->status;
    }

    void copy_from(MotorDriver* instance) {

        this->cmd = instance->cmd;
        this->enable = instance->enable;
        this->errors = instance->errors;
        this->status = instance->status;
    }
};



class SherpaInfoStructure
{
public:
    SherpaInfoStructure(){};


    AcoustincHailer AcoustincHailer_Instance;
    SherpaAttitude SherpaAttitude_Instance;
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
