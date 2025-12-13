#include "constants/moves.h"

static const u16 sNoneSignatureLearnset[] = {
    MOVE_UNAVAILABLE,
};

// #if P_FAMILY_
// static const u16 s SignatureLearnset[] = {
    // MOVE_UNAVAILABLE,
// };
// #endif

#if P_FAMILY_MEOWTH
static const u16 sMeowthSignatureLearnset[] = {
    MOVE_PAY_DAY,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_ABRA
static const u16 sAbraSignatureLearnset[] = {
    MOVE_KINESIS,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_EXEGGCUTE
static const u16 sExeggcuteSignatureLearnset[] = {
    MOVE_BARRAGE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_CUBONE
static const u16 sCuboneSignatureLearnset[] = {
    MOVE_BONEMERANG,
    MOVE_BONE_CLUB,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_CHANSEY
static const u16 sChanseySignatureLearnset[] = {
    MOVE_SOFTBOILED,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_JYNX
static const u16 sJynxSignatureLearnset[] = {
    MOVE_LOVELY_KISS,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_PORYGON
static const u16 sPorygonSignatureLearnset[] = {
    MOVE_CONVERSION,
    MOVE_CONVERSION_2,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_DELIBIRD
static const u16 sDelibirdSignatureLearnset[] = {
    MOVE_PRESENT,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_LUGIA
static const u16 sLugiaSignatureLearnset[] = {
    MOVE_AEROBLAST,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_BUNEARY
static const u16 sBunearySignatureLearnset[] = {
    MOVE_FRUSTRATION,
    MOVE_RETURN,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_PIKACHU
static const u16 sPikachuSignatureLearnset[] = {
    MOVE_VOLT_TACKLE,
    MOVE_PIKA_PAPOW,
    MOVE_SPLISHY_SPLASH,
    MOVE_ZIPPY_ZAP,
    MOVE_FLOATY_FALL,
    MOVE_SURF,
    MOVE_FLY,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_LATIAS
static const u16 sLatiasSignatureLearnset[] = {
    MOVE_MIST_BALL,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_LATIOS
static const u16 sLatiosSignatureLearnset[] = {
    MOVE_LUSTER_PURGE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_KYOGRE
static const u16 sKyogreSignatureLearnset[] = {
    MOVE_ORIGIN_PULSE,
    MOVE_WATER_SPOUT,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_GROUDON
static const u16 sGroudonSignatureLearnset[] = {
    MOVE_PRECIPICE_BLADES,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_RAYQUAZA
static const u16 sRayquazaSignatureLearnset[] = {
    MOVE_DRAGON_ASCENT,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_JIRACHI
static const u16 sJirachiSignatureLearnset[] = {
    MOVE_DOOM_DESIRE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_AUDINO
static const u16 sAudinoSignatureLearnset[] = {
    MOVE_SECRET_POWER,
    MOVE_REFRESH,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_COMBEE
static const u16 sCombeeSignatureLearnset[] = {
    MOVE_ATTACK_ORDER,
    MOVE_DEFEND_ORDER,
    MOVE_HEAL_ORDER,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_CHATOT
static const u16 sChatotSignatureLearnset[] = {
    MOVE_CHATTER,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_DIALGA
static const u16 sDialgaSignatureLearnset[] = {
    MOVE_ROAR_OF_TIME,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_PALKIA
static const u16 sPalkiaSignatureLearnset[] = {
    MOVE_SPACIAL_REND,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_HEATRAN
static const u16 sHeatranSignatureLearnset[] = {
    MOVE_MAGMA_STORM,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_REGIGIGAS
static const u16 sRegigigasSignatureLearnset[] = {
    MOVE_CRUSH_GRIP,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_GIRATINA
static const u16 sGiratinaSignatureLearnset[] = {
    MOVE_SHADOW_FORCE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_CRESSELIA
static const u16 sCresseliaSignatureLearnset[] = {
    MOVE_LUNAR_DANCE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_DARKRAI
static const u16 sDarkraiSignatureLearnset[] = {
    MOVE_DARK_VOID,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_SHAYMIN
static const u16 sShayminSignatureLearnset[] = {
    MOVE_SEED_FLARE,
    MOVE_UNAVAILABLE,
};
#endif

// #if P_FAMILY_ARCEUS
// static const u16 sArceusSignatureLearnset[] = {
    // MOVE_,
    // MOVE_UNAVAILABLE,
// };
// #endif

#if P_FAMILY_YVELTAL
static const u16 sYveltalSignatureLearnset[] = {
    MOVE_FOCUS_BLAST,
    MOVE_OBLIVION_WING,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_XERNEAS
static const u16 sXerneasSignatureLearnset[] = {
    MOVE_GEOMANCY,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_ZYGARDE
static const u16 sZygardeSignatureLearnset[] = {
    MOVE_CORE_ENFORCER,
    MOVE_THOUSAND_ARROWS,
    MOVE_LANDS_WRATH,
    MOVE_UNAVAILABLE,
};
#endif


#if P_FAMILY_MEWTWO
static const u16 sMewtwoSignatureLearnset[] = {
    MOVE_PSYSTRIKE,
    MOVE_UNAVAILABLE,
};
#endif

static const u16 sGrassStarterSignatureLearnset[] = {
	MOVE_GRASS_PLEDGE,
	MOVE_FRENZY_PLANT,
	MOVE_SOLAR_BEAM,
	MOVE_UNAVAILABLE,
};

static const u16 sFireStarterSignatureLearnset[] = {
    MOVE_FIRE_PLEDGE,
	MOVE_BLAST_BURN,
	MOVE_UNAVAILABLE,
};

static const u16 sWaterStarterSignatureLearnset[] = {
    MOVE_WATER_PLEDGE,
	MOVE_HYDRO_CANNON,
	MOVE_UNAVAILABLE,
};

#if P_FAMILY_VICTINI
static const u16 sVictiniSignatureLearnset[] = {
    MOVE_SEARING_SHOT,
    MOVE_V_CREATE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_TEPIG
static const u16 sTepigSignatureLearnset[] = {
    // MOVE_FLAR,
    MOVE_HEAT_CRASH,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_OSHAWOTT
static const u16 sOshawottSignatureLearnset[] = {
    MOVE_RAZOR_SHELL,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_PANPOUR
static const u16 sPanpourSignatureLearnset[] = {
    MOVE_SCALD,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_KLINK
static const u16 sKlinkSignatureLearnset[] = {
    MOVE_SHIFT_GEAR,
    MOVE_GEAR_GRIND,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_BOUFFALANT
static const u16 sBouffalantSignatureLearnset[] = {
    MOVE_HEAD_CHARGE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_RESHIRAM
static const u16 sReshiramSignatureLearnset[] = {
    MOVE_BLUE_FLARE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_ZEKROM
static const u16 sZekromSignatureLearnset[] = {
    MOVE_BOLT_STRIKE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_KYUREM
static const u16 sKyuremSignatureLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};

static const u16 sKyuremWhiteSignatureLearnset[] = {
    MOVE_GLACIATE,
    MOVE_ICE_BURN,
	MOVE_BLUE_FLARE,
    MOVE_FUSION_FLARE,
    MOVE_UNAVAILABLE,
};

static const u16 sKyuremBlackSignatureLearnset[] = {
    MOVE_GLACIATE,
    MOVE_FREEZE_SHOCK,
	MOVE_FUSION_BOLT,
	MOVE_BOLT_STRIKE,
    MOVE_UNAVAILABLE,
};
#endif

// #if P_FAMILY_KELDEO
// static const u16 sKeldeoSignatureLearnset[] = {
    // MOVE_SECRET_SWORD,
    // MOVE_UNAVAILABLE,
// };
// #endif

#if P_FAMILY_GENESECT
static const u16 sGenesectSignatureLearnset[] = {
    MOVE_TECHNO_BLAST,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_SCATTERBUG
static const u16 sScatterbugSignatureLearnset[] = {
    MOVE_POWDER,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_HONEDGE
static const u16 sHonedgeSignatureLearnset[] = {
    MOVE_KINGS_SHIELD,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_HAWLUCHA
static const u16 sHawluchaSignatureLearnset[] = {
    MOVE_FLYING_PRESS,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_KLEFKI
static const u16 sKlefkiSignatureLearnset[] = {
    MOVE_FAIRY_LOCK,
    MOVE_CRAFTY_SHIELD,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_PHANTUMP
static const u16 sPhantumpSignatureLearnset[] = {
    MOVE_FORESTS_CURSE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_PUMPKABOO
static const u16 sPumpkabooSignatureLearnset[] = {
    MOVE_TRICK_OR_TREAT,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_DIANCIE
static const u16 sDiancieSignatureLearnset[] = {
    MOVE_DIAMOND_STORM,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_HOOPA
static const u16 sHoopaSignatureLearnset[] = {
    MOVE_HYPERSPACE_HOLE,
    MOVE_HYPERSPACE_FURY,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_VOLCANION
static const u16 sVolcanionSignatureLearnset[] = {
    MOVE_SCALD,
    MOVE_STEAM_ERUPTION,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_CUBONE
static const u16 sAlolanMarowakSignatureLearnset[] = {
    MOVE_SHADOW_BONE,
	MOVE_BONEMERANG,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_EEVEE
static const u16 sEeveeSignatureLearnset[] = {
    MOVE_SPARKLY_SWIRL,
    MOVE_FREEZY_FROST,
    MOVE_SAPPY_SEED,
    MOVE_GLITZY_GLOW,
    MOVE_BADDY_BAD,
    MOVE_SIZZLY_SLIDE,
    MOVE_BUZZY_BUZZ,
    MOVE_BOUNCY_BUBBLE,
    MOVE_VEEVEE_VOLLEY,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_SPINARAK
static const u16 sSpinarakSignatureLearnset[] = {
    MOVE_TOXIC_THREAD,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_SANDILE
static const u16 sSandileSignatureLearnset[] = {
    MOVE_POWER_TRIP,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_HEATMOR
static const u16 sHeatmorSignatureLearnset[] = {
    MOVE_FIRE_LASH,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_ROWLET
static const u16 sRowletSignatureLearnset[] = {
    MOVE_SPIRIT_SHACKLE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_LITTEN
static const u16 sLittenSignatureLearnset[] = {
    MOVE_THROAT_CHOP,
    MOVE_DARKEST_LARIAT,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_POPPLIO
static const u16 sPopplioSignatureLearnset[] = {
    MOVE_SPARKLING_ARIA,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_PIKIPEK
static const u16 sPikipekSignatureLearnset[] = {
    MOVE_BEAK_BLAST,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_CRABRAWLER
static const u16 sCrabrawlerSignatureLearnset[] = {
    MOVE_POWER_UP_PUNCH,
    MOVE_ICE_HAMMER,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_ORICORIO
static const u16 sOricorioSignatureLearnset[] = {
    MOVE_REVELATION_DANCE,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_CUTIEFLY
static const u16 sCutieflySignatureLearnset[] = {
    MOVE_POLLEN_PUFF,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_ROCKRUFF
static const u16 sRockruffSignatureLearnset[] = {
    MOVE_ACCELEROCK,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_MAREANIE
static const u16 sMareanieSignatureLearnset[] = {
    MOVE_BANEFUL_BUNKER,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_MORELULL
static const u16 sMorelullSignatureLearnset[] = {
    MOVE_STRENGTH_SAP,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_BOUNSWEET
static const u16 sBounsweetSignatureLearnset[] = {
    MOVE_TROP_KICK,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_COMFEY
static const u16 sComfeySignatureLearnset[] = {
    MOVE_FLORAL_HEALING,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_ORANGURU
static const u16 sOranguruSignatureLearnset[] = {
    MOVE_INSTRUCT,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_WIMPOD
static const u16 sGolisopodSignatureLearnset[] = {
    MOVE_FIRST_IMPRESSION,
    MOVE_JET_PUNCH,
    MOVE_UNAVAILABLE,
};
#endif

#if P_FAMILY_SANDYGAST
static const u16 sSandygastSignatureLearnset[] = {
    MOVE_SHORE_UP,
    MOVE_UNAVAILABLE,
};
#endif


