#ifndef BEE_SETTINGS_H
#define BEE_SETTINGS_H

#define BEE_RCU_VID (0x005D)
#define BEE_RCU_PID (0x0001)
#define BEE_RCU_VERSION (0x0000)

#define BEE_VOICEKEY_LEN 8

#define BEE_VOICEKEY_REPORTID (0x01)

unsigned char BEE_VOICE_KEYDOWN_DATA[BEE_VOICEKEY_LEN] = {0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char BEE_VOICE_KEYUP_DATA[BEE_VOICEKEY_LEN] = {0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

//msbc
#define BEE_MSBC_VOICEDATA_REPORTID     (0x5A)
#define BEE_MSBC_VOICECMD_REPORTID      (0x5A)


#define BEE_MSBC_ATT_FRAME_SIZE         120
#define BEE_MSBC_FRAME_SIZE             60
#define BEE_MSBC_DECODE_INPUT_SIZE      58
#define BEE_MSBC_DECODE_OUTPUT_SIZE     240

//sbc
#define BEE_SBC_VOICEDATA_REPORTID      (0x5B)
#define BEE_SBC_VOICECMD_REPORTID       (0x5B)

#define BEE_SBC_ATT_FRAME_SIZE          72
#define BEE_SBC_FRAME_SIZE              36

#define BEE_SBC_DECODE_INPUT_SIZE      36
#define BEE_SBC_DECODE_OUTPUT_SIZE     256

#endif