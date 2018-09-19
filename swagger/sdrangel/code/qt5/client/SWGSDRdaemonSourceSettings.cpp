/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.2.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSDRdaemonSourceSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSDRdaemonSourceSettings::SWGSDRdaemonSourceSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSDRdaemonSourceSettings::SWGSDRdaemonSourceSettings() {
    api_address = nullptr;
    m_api_address_isSet = false;
    api_port = 0;
    m_api_port_isSet = false;
    data_address = nullptr;
    m_data_address_isSet = false;
    data_port = 0;
    m_data_port_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    file_record_name = nullptr;
    m_file_record_name_isSet = false;
}

SWGSDRdaemonSourceSettings::~SWGSDRdaemonSourceSettings() {
    this->cleanup();
}

void
SWGSDRdaemonSourceSettings::init() {
    api_address = new QString("");
    m_api_address_isSet = false;
    api_port = 0;
    m_api_port_isSet = false;
    data_address = new QString("");
    m_data_address_isSet = false;
    data_port = 0;
    m_data_port_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    file_record_name = new QString("");
    m_file_record_name_isSet = false;
}

void
SWGSDRdaemonSourceSettings::cleanup() {
    if(api_address != nullptr) { 
        delete api_address;
    }

    if(data_address != nullptr) { 
        delete data_address;
    }



    if(file_record_name != nullptr) { 
        delete file_record_name;
    }
}

SWGSDRdaemonSourceSettings*
SWGSDRdaemonSourceSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSDRdaemonSourceSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&api_address, pJson["apiAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&api_port, pJson["apiPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&data_address, pJson["dataAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&data_port, pJson["dataPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&file_record_name, pJson["fileRecordName"], "QString", "QString");
    
}

QString
SWGSDRdaemonSourceSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSDRdaemonSourceSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(api_address != nullptr && *api_address != QString("")){
        toJsonValue(QString("apiAddress"), api_address, obj, QString("QString"));
    }
    if(m_api_port_isSet){
        obj->insert("apiPort", QJsonValue(api_port));
    }
    if(data_address != nullptr && *data_address != QString("")){
        toJsonValue(QString("dataAddress"), data_address, obj, QString("QString"));
    }
    if(m_data_port_isSet){
        obj->insert("dataPort", QJsonValue(data_port));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_correction_isSet){
        obj->insert("iqCorrection", QJsonValue(iq_correction));
    }
    if(file_record_name != nullptr && *file_record_name != QString("")){
        toJsonValue(QString("fileRecordName"), file_record_name, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGSDRdaemonSourceSettings::getApiAddress() {
    return api_address;
}
void
SWGSDRdaemonSourceSettings::setApiAddress(QString* api_address) {
    this->api_address = api_address;
    this->m_api_address_isSet = true;
}

qint32
SWGSDRdaemonSourceSettings::getApiPort() {
    return api_port;
}
void
SWGSDRdaemonSourceSettings::setApiPort(qint32 api_port) {
    this->api_port = api_port;
    this->m_api_port_isSet = true;
}

QString*
SWGSDRdaemonSourceSettings::getDataAddress() {
    return data_address;
}
void
SWGSDRdaemonSourceSettings::setDataAddress(QString* data_address) {
    this->data_address = data_address;
    this->m_data_address_isSet = true;
}

qint32
SWGSDRdaemonSourceSettings::getDataPort() {
    return data_port;
}
void
SWGSDRdaemonSourceSettings::setDataPort(qint32 data_port) {
    this->data_port = data_port;
    this->m_data_port_isSet = true;
}

qint32
SWGSDRdaemonSourceSettings::getDcBlock() {
    return dc_block;
}
void
SWGSDRdaemonSourceSettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGSDRdaemonSourceSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGSDRdaemonSourceSettings::setIqCorrection(qint32 iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}

QString*
SWGSDRdaemonSourceSettings::getFileRecordName() {
    return file_record_name;
}
void
SWGSDRdaemonSourceSettings::setFileRecordName(QString* file_record_name) {
    this->file_record_name = file_record_name;
    this->m_file_record_name_isSet = true;
}


bool
SWGSDRdaemonSourceSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(api_address != nullptr && *api_address != QString("")){ isObjectUpdated = true; break;}
        if(m_api_port_isSet){ isObjectUpdated = true; break;}
        if(data_address != nullptr && *data_address != QString("")){ isObjectUpdated = true; break;}
        if(m_data_port_isSet){ isObjectUpdated = true; break;}
        if(m_dc_block_isSet){ isObjectUpdated = true; break;}
        if(m_iq_correction_isSet){ isObjectUpdated = true; break;}
        if(file_record_name != nullptr && *file_record_name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

