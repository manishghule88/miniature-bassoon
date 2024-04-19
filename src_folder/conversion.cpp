#include "conversion.h"

// All the Distance related Functions calls are and return value are present in this function.
void check_Distance(Distance dobj) {
    int Perfrom = 0;    // variable to store the conversion type
    float GetValue = 0.0f;  // variable to store the value of distance
    float fRet = 0.0f;  // variable to store the final result

    cout << endl;
   
    cout << "Select the Conversion Type " << endl;
    cin >> Perfrom;

    if (Perfrom == 0) {
        return;
    }

    cout << "Enter the Distance to Convert :" << endl;
    cin >> GetValue;

    switch (Perfrom) {
    case 1:
        fRet = dobj.meter_CentiMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " Meter = " << fRet << " CentiMeter " << endl;
        break;
        
    case 2:
        fRet = dobj.kiloMeter_Meter(GetValue);
        cout << " The Conversion of the " << GetValue << " KiloMeter = " << fRet << "Meter" << endl;
        break;

    case 3:
        fRet = dobj.meter_MilliMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " Meter = " << fRet << " MilliMeter " << endl;
        break;

    case 4:
        fRet = dobj.microMeter_NanoMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " MicroMeter = " << fRet << " NanoMeter " << endl;
        break;

    case 5:
        fRet = dobj.nanoMeter_Mile(GetValue);
        cout << " The Conversion of the " << GetValue << " NanoMeter = " << fRet << " Mile " << endl;
        break;

    case 6:
        fRet = dobj.mile_Yard(GetValue);
        cout << " The Conversion of the " << GetValue << " Mile = " << fRet << " Yard " << endl;
        break;

    case 7:
        fRet = dobj.yard_Foot(GetValue);
        cout << " The Conversion of the " << GetValue << " Yard = " << fRet << " Foot " << endl;
        break;

    case 8:
        fRet = dobj.foot_Inch(GetValue);
        cout << " The Conversion of the " << GetValue << " Foot = " << fRet << " Inch " << endl;
        break;

    case 9:
        fRet = dobj.inch_NauticalMile(GetValue);
        cout << " The Conversion of the " << GetValue << " Inch = " << fRet << " NauticalMile " << endl;
        break;

    case 10:
        fRet = dobj.centiMeter_MilliMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " CentiMeter = " << fRet << " MilliMeter " << endl;
        break;

    case 11:
        fRet = dobj.milliMeter_MicroMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " MilliMeter = " << fRet << " MicroMeter " << endl;
        break;

    case 12:
        fRet = dobj.microMeter_Meter(GetValue);
        cout << " The Conversion of the " << GetValue << " MicroMeter = " << fRet << " Meter " << endl;
        break;

    case 13:
        fRet = dobj.inch_Foot(GetValue);
        cout << " The Conversion of the " << GetValue << " Inch = " << fRet << " Foot " << endl;
        break;

    case 14:
        fRet = dobj.mile_KiloMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " Mile = " << fRet << " KiloMeter " << endl;
        break;

    case 15:
        fRet = dobj.foot_Meter(GetValue);
        cout << " The Conversion of the " << GetValue << " Foot = " << fRet << " Meter " << endl;
        break;

    case 16:
        fRet = dobj.centiMeter_Meter(GetValue);
        cout << " The Conversion of the " << GetValue << " CentiMeter = " << fRet << " Meter " << endl;
        break;

    case 17:
        fRet = dobj.meter_KiloMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " Meter = " << fRet << " KiloMeter " << endl;
        break;

    case 18:
        fRet = dobj.milliMeter_Meter(GetValue);
        cout << " The Conversion of the " << GetValue << " MilliMeter = " << fRet << " Meter " << endl;
        break;

    case 19:
        fRet = dobj.mile_NanoMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " Mile = " << fRet << " NanoMeter " << endl;
        break;

    case 20:
        fRet = dobj.meter_Foot(GetValue);
        cout << " The Conversion of the " << GetValue << " Meter = " << fRet << " Foot " << endl;
        break;

    case 21:
        fRet = dobj.nanoMeter_MicroMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " NanoMeter = " << fRet << " MicroMeter " << endl;
        break;

    case 22:
        fRet = dobj.centiMeter_Foot(GetValue);
        cout << " The Conversion of the " << GetValue << " CentiMeter = " << fRet << " Foot " << endl;
        break;

    case 23:
        fRet = dobj.kiloMeter_NauticalMile(GetValue);
        cout << " The Conversion of the " << GetValue << " KiloMeter = " << fRet << " NauticalMile " << endl;
        break;

    case 24:
        fRet = dobj.foot_KiloMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " Foot = " << fRet << " KiloMeter " << endl;
        break;

    case 25:
        fRet = dobj.nanoMeter_MilliMeter(GetValue);
        cout << " The Conversion of the " << GetValue << " NanoMeter = " << fRet << " MilliMeter " << endl;
        break;

    default:
        cout << " Invalid Choice " << endl;
    }
}

// All the Currencies related Functions calls are and return value are present in this function.
void check_Currencies(Currencies cobj) {
    int Perfrom1 = 0;   // variable to store the conversion type
    float GetValue = 0.0f;  // variable to store the value of distance
    float fRet = 0.0f;  // variable to store the final result


    cout << endl;

 
        cout << "Select the Conversion Type " << endl;
        cin >> Perfrom1;

        if (Perfrom1 == 0) {
            return;
        }

        cout << "Enter the Amount to Convert :" << endl;
        cin >> GetValue;

        switch (Perfrom1) {
        case 1:
            fRet = cobj.indian_Rupee_US_Dollar(GetValue);
            cout << " The Conversion of the " << GetValue << " Indian Rupee = " << fRet << " Dollar " << endl;
            break;

        case 2:
            fRet = cobj.indianRupee_Euro(GetValue);
            cout << " The Conversion of the " << GetValue << " Indian Rupee = " << fRet << " Euro " << endl;
            break;

        case 3:
            fRet = cobj.hongKongDollar_IndianRupee(GetValue);
            cout << " The Conversion of the " << GetValue << " Hong Kong Dollar = " << fRet << " Indian Rupee " << endl;
            break;

        case 4:
            fRet = cobj.newZelandDollar_PakRupee(GetValue);
            cout << " The Conversion of the " << GetValue << " New Zeland Dollar = " << fRet << " Pakistani Rupee " << endl;
            break;

        case 5:
            fRet = cobj.sudanesePound_SrilankanRupee(GetValue);
            cout << " The Conversion of the " << GetValue << " Sudanese Pound = " << fRet << " Srilankan Rupee " << endl;
            break;

        case 6:
            fRet = cobj.mexicanPeso_LiberianDollar(GetValue);
            cout << " The Conversion of the " << GetValue << " Mexican Peso = " << fRet << " Liberian Dollar " << endl;
            break;

        case 7:
            fRet = cobj.australianDollar_BrazilanReal(GetValue);
            cout << " The Conversion of the " << GetValue << " Australian Dollar = " << fRet << " Brazilan Real " << endl;
            break;

        case 8:
            fRet = cobj.bitcoin_IndianRupee(GetValue);
            cout << " The Conversion of the " << GetValue << " BitCoin = " << fRet << " Indian Rupee " << endl;
            break;

        case 9:
            fRet = cobj.singaporeDollar_MexicanPeso(GetValue);
            cout << " The Conversion of the " << GetValue << " Singapore Dollar = " << fRet << " Mexican Peso " << endl;
            break;

        case 10:
            fRet = cobj.russianRuble_UnitedDollar(GetValue);
            cout << " The Conversion of the " << GetValue << " Russian Ruble = " << fRet << " US Dollar " << endl;
            break;

        case 11:
            fRet = cobj.swissFranc_Euro(GetValue);
            cout << " The Conversion of the " << GetValue << " Swiss Franc = " << fRet << " Euro " << endl;
            break;

        case 12:
            fRet = cobj.britishPoundSterling_SouthAfricaRand(GetValue);
            cout << " The Conversion of the " << GetValue << " British Pound Sterling = " << fRet << " South Africa Rand " << endl;
            break;

        case 13:
            fRet = cobj.japaneseYen_SouthKoreanWon(GetValue);
            cout << " The Conversion of the " << GetValue << " Japanese Yen = " << fRet << " South Korean Won " << endl;
            break;

        case 14:
            fRet = cobj.southKoreanWon_IndianRupee(GetValue);
            cout << " The Conversion of the " << GetValue << " South Korean Won = " << fRet << " Indian Rupee " << endl;
            break;

        case 15:
            fRet = cobj.swedishKrona_ThaiBaht(GetValue);
            cout << " The Conversion of the " << GetValue << " Swedish Krona = " << fRet << " Thai Baht " << endl;
            break;

        case 16:
            fRet = cobj.indonesianRupiah_TurkishLira(GetValue);
            cout << " The Conversion of the " << GetValue << " IndonesianRupiah = " << fRet << " TurkishLira " << endl;
            break;

        case 17:
            fRet = cobj.egyptianPound_MalaysianRinggit(GetValue);
            cout << " The Conversion of the " << GetValue << " EgyptianPound = " << fRet << " MalaysianRinggit " << endl;
            break;

        case 18:
            fRet = cobj.bahrainiDinar_CubanPeso(GetValue);
            cout << " The Conversion of the " << GetValue << " BahrainiDinar = " << fRet << " Cuban Peso " << endl;
            break;

        case 19:
            fRet = cobj.afghanAfghani_GuernseyPound(GetValue);
            cout << " The Conversion of the " << GetValue << " Afghan Afghani = " << fRet << " Guernsey Pound " << endl;
            break;

        case 20:
            fRet = cobj.britishPound_RomanianLeu(GetValue);
            cout << " The Conversion of the " << GetValue << " British Pound = " << fRet << " Romanian Leu " << endl;
            break;

        case 21:
            fRet = cobj.norwegianKrone_BulgarianLev(GetValue);
            cout << " The Conversion of the " << GetValue << " Norwegian Krone = " << fRet << " Bulgarian Lev " << endl;
            break;

        case 22:
            fRet = cobj.polishZolty_TaiwanNewDollar(GetValue);
            cout << " The Conversion of the " << GetValue << " Polish Zolty = " << fRet << " Taiwan New Dollar " << endl;
            break;

        case 23:
            fRet = cobj.brazilianRral_IndianRupee(GetValue);
            cout << " The Conversion of the " << GetValue << " Brazilian Real = " << fRet << " Indian Rupee " << endl;
            break;

        case 24:
            fRet = cobj.australianDollar_IsraeliNewShekels(GetValue);
            cout << " The Conversion of the " << GetValue << " Australian Dollar = " << fRet << " Israeli New Shekels " << endl;
            break;

        case 25:
            fRet = cobj.hongKongDollar_DanishKorner(GetValue);
            cout << " The Conversion of the " << GetValue << " Hong Kong Dollar = " << fRet << " Danish Korner " << endl;
            break;

        default:
            cout << " Invalid Choice " << endl;
        }
}
