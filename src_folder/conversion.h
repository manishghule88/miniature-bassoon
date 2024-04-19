#include<iostream>
using namespace std;

class Distance { // Distance class for performing all the action related to distance conversion. 
public:	// Access Specifier
    float mfValue = 0.0f;   // variable to store the output

    float meter_CentiMeter(float fNo) {
        mfValue = fNo * 100000;
        return mfValue;
    }

    float kiloMeter_Meter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    float meter_MilliMeter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    float microMeter_NanoMeter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    float nanoMeter_Mile(float fNo) {
        mfValue = fNo * 6.2137e-13;
        return mfValue;
    }

    float mile_Yard(float fNo) {
        mfValue = fNo * 1760;
        return mfValue;
    }

    float yard_Foot(float fNo) {
        mfValue = fNo * 3;
        return mfValue;
    }

    float foot_Inch(float fNo) {
        mfValue = fNo * 12;
        return mfValue;
    }

    float inch_NauticalMile(float fNo) {
        mfValue = fNo * 1.3715e-5;
        return mfValue;
    }

    float centiMeter_MilliMeter(float fNo) {
        mfValue = fNo * 10;
        return mfValue;
    }

    float milliMeter_MicroMeter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    float microMeter_Meter(float fNo) {
        mfValue = fNo * 1e-6;
        return mfValue;
    }

    float inch_Foot(float fNo) {
        mfValue = fNo * 0.0833333;
        return mfValue;
    }

    float mile_KiloMeter(float fNo) {
        mfValue = fNo * 1.60934;
        return mfValue;
    }

    float foot_Meter(float fNo) {
        mfValue = fNo * 0.3048;
        return mfValue;
    }

    float centiMeter_Meter(float fNo) {
        mfValue = fNo * 0.01;
        return mfValue;
    }

    float meter_KiloMeter(float fNo) {
        mfValue = fNo * 100;
        return mfValue;
    }

    float milliMeter_Meter(float fNo) {
        mfValue = fNo * 0.001;
        return mfValue;
    }

    float mile_NanoMeter(float fNo) {
        mfValue = fNo * 1.609e+12;
        return mfValue;
    }

    float meter_Foot(float fNo) {
        mfValue = fNo * 3.28084;
        return mfValue;
    }

    float nanoMeter_MicroMeter(float fNo) {
        mfValue = fNo * 0.001;
        return mfValue;
    }

    float centiMeter_Foot(float fNo) {
        mfValue = fNo * 0.0328084;
        return mfValue;
    }

    float kiloMeter_NauticalMile(float fNo) {
        mfValue = fNo * 0.539957;
        return mfValue;
    }

    float foot_KiloMeter(float fNo) {
        mfValue = fNo * 0.0003048;
        return mfValue;
    }

    float nanoMeter_MilliMeter(float fNo) {
        mfValue = fNo * 1e-6;
        return mfValue;
    }
};

// All the Currencies Functions and their optimization are present in this class.
class Currencies
{
public:	// Access Specifier
    float mfValue = 0.0f;   // variable to store the output

    float indian_Rupee_US_Dollar(float fNo) {
        mfValue = fNo * 0.01199;
        return mfValue;
    }

    float indianRupee_Euro(float fNo) {
        mfValue = fNo * 0.01125;
        return mfValue;
    }

    float hongKongDollar_IndianRupee(float fNo) {
        mfValue = fNo * 10.64932;
        return mfValue;
    }

    float newZelandDollar_PakRupee(float fNo) {
        mfValue = fNo * 165.43907;
        return mfValue;
    }

    float sudanesePound_SrilankanRupee(float fNo) {
        mfValue = fNo * 0.51051644;
        return mfValue;
    }

    float mexicanPeso_LiberianDollar(float fNo) {
        mfValue = fNo * 11.649468;
        return mfValue;
    }

    float australianDollar_BrazilanReal(float fNo) {
        mfValue = fNo * 3.3243471;
        return mfValue;
    }

    float bitcoin_IndianRupee(float fNo) {
        mfValue = fNo * 5,475,123.52;
        return mfValue;
    }

    float singaporeDollar_MexicanPeso(float fNo) {
        mfValue = fNo * 12.191175;
        return mfValue;
    }

    float russianRuble_UnitedDollar(float fNo) {
        mfValue = fNo * 0.010712397;
        return mfValue;
    }

    float swissFranc_Euro(float fNo) {
        mfValue = fNo * 0.010712397;
        return mfValue;
    }

    float britishPoundSterling_SouthAfricaRand(float fNo) {
        mfValue = fNo * 23.440272;
        return mfValue;
    }

    float japaneseYen_SouthKoreanWon(float fNo) {
        mfValue = fNo * 8.9929386;
        return mfValue;
    }

    float southKoreanWon_IndianRupee(float fNo) {
        mfValue = fNo * 0.060298262;
        return mfValue;
    }

    float swedishKrona_ThaiBaht(float fNo) {
        mfValue = fNo * 3.3839408;
        return mfValue;
    }

    float indonesianRupiah_TurkishLira(float fNo) {
        mfValue = fNo * 0.0020139406;
        return mfValue;
    }

    float egyptianPound_MalaysianRinggit(float fNo) {
        mfValue = fNo * 0.10037469;
        return mfValue;
    }

    float bahrainiDinar_CubanPeso(float fNo) {
       mfValue = fNo * 63.778598;
        return mfValue;
    }

    float afghanAfghani_GuernseyPound(float fNo) {
        mfValue = fNo * 0.011240689;
        return mfValue;
    }

    float britishPound_RomanianLeu(float fNo) {
        mfValue = fNo * 5.8195567;
        return mfValue;
    }

    float norwegianKrone_BulgarianLev(float fNo) {
        mfValue = fNo * 0.16849891;
        return mfValue;
    }

    float polishZolty_TaiwanNewDollar(float fNo) {
        mfValue = fNo * 8.053549;
        return mfValue;
    }

    float brazilianRral_IndianRupee(float fNo) {
        mfValue = fNo * 16.309971;
        return mfValue;
    }

    float australianDollar_IsraeliNewShekels(float fNo) {
        mfValue = fNo * 2.4181496;
        return mfValue;
    }

    float hongKongDollar_DanishKorner(float fNo) {
        mfValue = fNo * 0.89392459;
        return mfValue;
    }
};

void check_Distance(Distance dobj); // function call
void check_Currencies(Currencies cobj); // function call

