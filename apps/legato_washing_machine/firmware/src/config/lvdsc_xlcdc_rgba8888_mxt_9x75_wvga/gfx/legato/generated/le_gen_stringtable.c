#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   24
 *****************************************************************************/

/*****************************************************************************
 * string table data
 * 
 * this table contains the raw character data for each string
 * 
 * unsigned short - number of indices in the table
 * unsigned short - number of languages in the table
 * 
 * index array (size = number of indices * number of languages
 * 
 * for each index in the array:
 *   unsigned byte - the font ID for the index
 *   unsigned byte[3] - the offset of the string codepoint data in
 *                      the table
 * 
 * string data is found by jumping to the index offset from the start
 * of the table
 * 
 * string data entry:
 *     unsigned short - length of the string in bytes (encoding dependent)
 *     codepoint data - the string data
 ****************************************************************************/

const uint8_t stringTable_data[344] =
{
    0x18,0x00,0x01,0x00,0x01,0x64,0x00,0x00,0x01,0x70,0x00,0x00,0x01,0x76,0x00,0x00,
    0x01,0x86,0x00,0x00,0x01,0x90,0x00,0x00,0x01,0x9A,0x00,0x00,0x01,0xA0,0x00,0x00,
    0x01,0xA6,0x00,0x00,0x01,0xB2,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xCC,0x00,0x00,
    0x01,0xD4,0x00,0x00,0x01,0xDC,0x00,0x00,0x01,0xE4,0x00,0x00,0x01,0xEA,0x00,0x00,
    0x01,0xF4,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x06,0x01,0x00,0x01,0x0E,0x01,0x00,
    0x00,0x18,0x01,0x00,0x01,0x28,0x01,0x00,0x01,0x36,0x01,0x00,0x01,0x48,0x01,0x00,
    0x01,0x4E,0x01,0x00,0x0A,0x00,0x53,0x6F,0x69,0x6C,0x20,0x4C,0x65,0x76,0x65,0x6C,
    0x04,0x00,0x57,0x61,0x72,0x6D,0x0E,0x00,0x45,0x78,0x74,0x72,0x61,0x0A,0x52,0x69,
    0x6E,0x73,0x65,0x20,0x4F,0x6E,0x07,0x00,0x42,0x65,0x64,0x64,0x69,0x6E,0x67,0x00,
    0x08,0x00,0x53,0x6F,0x75,0x6E,0x64,0x0A,0x4F,0x6E,0x04,0x00,0x57,0x6F,0x6F,0x6C,
    0x03,0x00,0x48,0x6F,0x74,0x00,0x09,0x00,0x4C,0x6F,0x61,0x64,0x0A,0x48,0x69,0x67,
    0x68,0x00,0x0B,0x00,0x50,0x72,0x65,0x57,0x61,0x73,0x68,0x0A,0x4F,0x66,0x66,0x00,
    0x0A,0x00,0x50,0x72,0x65,0x57,0x61,0x73,0x68,0x0A,0x4F,0x6E,0x06,0x00,0x53,0x70,
    0x6F,0x72,0x74,0x73,0x06,0x00,0x4E,0x6F,0x72,0x6D,0x61,0x6C,0x05,0x00,0x53,0x54,
    0x41,0x52,0x54,0x00,0x04,0x00,0x43,0x6F,0x6C,0x64,0x07,0x00,0x4F,0x70,0x74,0x69,
    0x6F,0x6E,0x73,0x00,0x09,0x00,0x53,0x6F,0x75,0x6E,0x64,0x0A,0x4F,0x66,0x66,0x00,
    0x04,0x00,0x48,0x69,0x67,0x68,0x06,0x00,0x4D,0x65,0x64,0x69,0x75,0x6D,0x07,0x00,
    0x50,0x72,0x6F,0x67,0x72,0x61,0x6D,0x00,0x0E,0x00,0x43,0x79,0x63,0x6C,0x65,0x20,
    0x43,0x6F,0x6D,0x70,0x6C,0x65,0x74,0x65,0x0B,0x00,0x54,0x65,0x6D,0x70,0x65,0x72,
    0x61,0x74,0x75,0x72,0x65,0x00,0x0F,0x00,0x45,0x78,0x74,0x72,0x61,0x0A,0x52,0x69,
    0x6E,0x73,0x65,0x20,0x4F,0x66,0x66,0x00,0x03,0x00,0x4C,0x6F,0x77,0x00,0x08,0x00,
    0x4C,0x6F,0x61,0x64,0x0A,0x4C,0x6F,0x77,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&NotoSans_Bold,
    (leFont*)&buttonFont,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        344, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_soil;
leTableString string_WarmTemp;
leTableString string_XtraRinseOn;
leTableString string_BedProg;
leTableString string_SoundOn;
leTableString string_WoolProg;
leTableString string_HotTemp;
leTableString string_LoadHigh;
leTableString string_preWashOff;
leTableString string_preWashOn;
leTableString string_SportsProg;
leTableString string_NormalProg;
leTableString string_Start;
leTableString string_ColdTemp;
leTableString string_options;
leTableString string_SoundOff;
leTableString string_HighSoilLevel;
leTableString string_MediumSoilLevel;
leTableString string_program;
leTableString string_cycle_complete;
leTableString string_temperature;
leTableString string_XtraRinseOff;
leTableString string_LowSoilLevel;
leTableString string_LoadLow;

void initializeStrings(void)
{
    leTableString_Constructor(&string_soil, stringID_soil);
    leTableString_Constructor(&string_WarmTemp, stringID_WarmTemp);
    leTableString_Constructor(&string_XtraRinseOn, stringID_XtraRinseOn);
    leTableString_Constructor(&string_BedProg, stringID_BedProg);
    leTableString_Constructor(&string_SoundOn, stringID_SoundOn);
    leTableString_Constructor(&string_WoolProg, stringID_WoolProg);
    leTableString_Constructor(&string_HotTemp, stringID_HotTemp);
    leTableString_Constructor(&string_LoadHigh, stringID_LoadHigh);
    leTableString_Constructor(&string_preWashOff, stringID_preWashOff);
    leTableString_Constructor(&string_preWashOn, stringID_preWashOn);
    leTableString_Constructor(&string_SportsProg, stringID_SportsProg);
    leTableString_Constructor(&string_NormalProg, stringID_NormalProg);
    leTableString_Constructor(&string_Start, stringID_Start);
    leTableString_Constructor(&string_ColdTemp, stringID_ColdTemp);
    leTableString_Constructor(&string_options, stringID_options);
    leTableString_Constructor(&string_SoundOff, stringID_SoundOff);
    leTableString_Constructor(&string_HighSoilLevel, stringID_HighSoilLevel);
    leTableString_Constructor(&string_MediumSoilLevel, stringID_MediumSoilLevel);
    leTableString_Constructor(&string_program, stringID_program);
    leTableString_Constructor(&string_cycle_complete, stringID_cycle_complete);
    leTableString_Constructor(&string_temperature, stringID_temperature);
    leTableString_Constructor(&string_XtraRinseOff, stringID_XtraRinseOff);
    leTableString_Constructor(&string_LowSoilLevel, stringID_LowSoilLevel);
    leTableString_Constructor(&string_LoadLow, stringID_LoadLow);
}
