#ifndef settings_h
#define settings_h

#include <stdint.h>
#include <stdbool.h>
#include "player.h"

#define num_settings 5
extern char *settingsappv;

typedef struct {
    uint8_t chunk_refresh;  // how many ticks to skip before asking for more frame data
    uint8_t entity_refresh; // .. .. entity data
    uint8_t packet_limit;   // max # of packets to recv() per tick
    uint24_t network_timeout;
} limiter_t;


typedef struct {
    bool savelogin;
    userinfo_t userinfo;
    limiter_t limits;
} settings_t;
extern settings_t settings;

void set_defaults(void);
bool write_settings(void);

enum SettingOpt {
    SAVE_CREDS,
    CHUNK_REF,
    ENTITY_REF,
    PACKET_LIMIT,
    NTWK_TIMEOUT
};


#endif
