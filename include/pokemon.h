#ifndef GUARD_POKEMON_H
#define GUARD_POKEMON_H

#include "contest_effect.h"
#include "sprite.h"
#include "constants/battle.h"
#include "constants/cries.h"
#include "constants/form_change_types.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/regions.h"
#include "constants/region_map_sections.h"
#include "constants/trainers.h"

#define GET_BASE_SPECIES_ID(speciesId) (GetFormSpeciesId(speciesId, 0))
#define FORM_SPECIES_END (0xffff)

// Property labels for Get(Box)MonData / Set(Box)MonData
enum MonData {
    MON_DATA_PERSONALITY,
    MON_DATA_STATUS,
    MON_DATA_OT_ID,
    MON_DATA_LANGUAGE,
    MON_DATA_SANITY_IS_BAD_EGG,
    MON_DATA_SANITY_HAS_SPECIES,
    MON_DATA_SANITY_IS_EGG,
    MON_DATA_OT_NAME,
    MON_DATA_MARKINGS,
    MON_DATA_CHECKSUM,
    MON_DATA_HP,
    MON_DATA_IS_SHINY,
    MON_DATA_HIDDEN_NATURE,
    MON_DATA_HP_LOST,
    MON_DATA_DAYS_SINCE_FORM_CHANGE,
    MON_DATA_ENCRYPT_SEPARATOR,
    MON_DATA_NICKNAME,
    MON_DATA_NICKNAME10,
    MON_DATA_SPECIES,
    MON_DATA_HELD_ITEM,
    MON_DATA_MOVE1,
    MON_DATA_MOVE2,
    MON_DATA_MOVE3,
    MON_DATA_MOVE4,
    MON_DATA_PP1,
    MON_DATA_PP2,
    MON_DATA_PP3,
    MON_DATA_PP4,
    MON_DATA_PP_BONUSES,
    MON_DATA_COOL,
    MON_DATA_BEAUTY,
    MON_DATA_CUTE,
    MON_DATA_EXP,
    MON_DATA_HP_EV,
    MON_DATA_ATK_EV,
    MON_DATA_DEF_EV,
    MON_DATA_SPEED_EV,
    MON_DATA_SPATK_EV,
    MON_DATA_SPDEF_EV,
    MON_DATA_FRIENDSHIP,
    MON_DATA_SMART,
    MON_DATA_POKERUS,
    MON_DATA_MET_LOCATION,
    MON_DATA_MET_LEVEL,
    MON_DATA_MET_GAME,
    MON_DATA_POKEBALL,
    MON_DATA_HP_IV,
    MON_DATA_ATK_IV,
    MON_DATA_DEF_IV,
    MON_DATA_SPEED_IV,
    MON_DATA_SPATK_IV,
    MON_DATA_SPDEF_IV,
    MON_DATA_IS_EGG,
    MON_DATA_ABILITY_NUM,
    MON_DATA_TOUGH,
    MON_DATA_SHEEN,
    MON_DATA_OT_GENDER,
    MON_DATA_COOL_RIBBON,
    MON_DATA_BEAUTY_RIBBON,
    MON_DATA_CUTE_RIBBON,
    MON_DATA_SMART_RIBBON,
    MON_DATA_TOUGH_RIBBON,
    MON_DATA_LEVEL,
    MON_DATA_MAX_HP,
    MON_DATA_ATK,
    MON_DATA_DEF,
    MON_DATA_SPEED,
    MON_DATA_SPATK,
    MON_DATA_SPDEF,
    MON_DATA_MAIL,
    MON_DATA_SPECIES_OR_EGG,
    MON_DATA_IVS,
    MON_DATA_CHAMPION_RIBBON,
    MON_DATA_WINNING_RIBBON,
    MON_DATA_VICTORY_RIBBON,
    MON_DATA_ARTIST_RIBBON,
    MON_DATA_EFFORT_RIBBON,
    MON_DATA_MARINE_RIBBON,
    MON_DATA_LAND_RIBBON,
    MON_DATA_SKY_RIBBON,
    MON_DATA_COUNTRY_RIBBON,
    MON_DATA_NATIONAL_RIBBON,
    MON_DATA_EARTH_RIBBON,
    MON_DATA_WORLD_RIBBON,
    MON_DATA_MODERN_FATEFUL_ENCOUNTER,
    MON_DATA_KNOWN_MOVES,
    MON_DATA_RIBBON_COUNT,
    MON_DATA_RIBBONS,
    MON_DATA_ATK2,
    MON_DATA_DEF2,
    MON_DATA_SPEED2,
    MON_DATA_SPATK2,
    MON_DATA_SPDEF2,
    MON_DATA_HYPER_TRAINED_HP,
    MON_DATA_HYPER_TRAINED_ATK,
    MON_DATA_HYPER_TRAINED_DEF,
    MON_DATA_HYPER_TRAINED_SPEED,
    MON_DATA_HYPER_TRAINED_SPATK,
    MON_DATA_HYPER_TRAINED_SPDEF,
    MON_DATA_IS_SHADOW,
    MON_DATA_DYNAMAX_LEVEL,
    MON_DATA_GIGANTAMAX_FACTOR,
    MON_DATA_TERA_TYPE,
    MON_DATA_EVOLUTION_TRACKER,
};

struct BoxPokemon
{
    /*0x00*/ u32 personality;
    /*0x04*/ u32 otId;
    /*0x08*/ u8 nickname[min(10, POKEMON_NAME_LENGTH)];
             u8 pokerus:1;
             // u8 hasSpecies:1;
             u8 isEgg:1;
             u8 markings:4; // 15 combinations as per sAnims_MarkingCombo
    /*0x14*/ u8 otName[PLAYER_NAME_LENGTH];
    /*0x1B*/ u8 metLocation;    // better to not limit the number of map sections. this is actually used for friendship growth, too
    /*0x1C*/ u32 species:11;    // up to 2047 species. could probably go down to 10 bits...
             u32 heldItem:10;   // up to 1023 items. could probably be 9 bits if hold items are limited to IDs below 511
			u32 nickname11:8; // 11th character of nickname.
             u8 metLevel:1;
             u32 contestExp:9; // 0 - 510
    /*0x20*/ u32 experience:21;
			u16 nickname12:8; // 12th character of nickname.
             // u32 otGender:1;
    /*0x24*/ u32 move1:11;  // 1023 moves
			 u16 evolutionTracker1:5;
			 u16 evolutionTracker2:5;
             u32 move2:11;  // bits 11-20
             u32 move3:11;  // bits 21-30
    /*0x28*/ u16 move4:11;  // bits 31-40
    /*0x2A*/ u16 attackIV:2;    // 46-50
             u16 speedIV:2;     // 56-60
             u16 otherIV:2;   // 51-55
    /*0x2C*/ u8 ppBonuses;
    /*0x2D*/ u8 friendship;
    /*0x2E*/ u8 pokeball:6;
             u8 abilityNum:2;
    /*0x2F*/ u8 hpEV:6;
    /*0x30*/ u8 attackEV:6;
    /*0x31*/ u8 defenseEV:6;
    /*0x32*/ u8 speedEV:6;
    /*0x33*/ u8 spAttackEV:6;
    /*0x34*/ u8 spDefenseEV:6; 
			 u8 coolCV:2;
			 u8 toughCV:2;
			 u8 smartCV:2;
			 u8 cuteCV:2;
			 u8 beautyCV:2;
			 u8 hiddenNatureModifier:5; // remain 10 bits
			 u8 hiddenPower:5; // remain 10 bits
	/*0x35*/ u8 pp1:6;
             u8 pp2:6;
             u8 pp3:6;
			 u8 pp4:6;
			 u8 daysSinceFormChange:3; // 7 days.
			 u16 hpLost:14; // 16383 HP.
			u16 shinyModifier:1;
}; /* size = 0x3C (56) bytes */

struct Pokemon
{
    struct BoxPokemon box;
    u32 status;
    u8 level;
    u8 mail;
    u16 hp;
    u16 maxHP;
    u16 attack;
    u16 defense;
    u16 speed;
    u16 spAttack;
    u16 spDefense;
};

struct MonSpritesGfxManager
{
    bool32 active;
    void *spriteBuffer;
    u8 **spritePointers;
    struct SpriteTemplate *templates;
    struct SpriteFrameImage *frameImages;
};

#define UNPACK_VOLATILE_STRUCT(_enum, _fieldName, _typeMaxValue, ...) INVOKE_WITH_(UNPACK_VOLATILE_STRUCT_, _fieldName, UNPACK_B(_typeMaxValue));
#define UNPACK_VOLATILE_STRUCT_(_fieldName, _type, ...) _type FIRST(__VA_OPT__(_fieldName:BIT_SIZE(FIRST(__VA_ARGS__)),) _fieldName)

struct Volatiles
{
    VOLATILE_DEFINITIONS(UNPACK_VOLATILE_STRUCT)
    // Expands to:
    // u32 confusionTurns:3;
    // u32 flinched:1;
    // u32 uproarTurns:3;
    // u32 torment:1;
    // u32 bideTurns:2;
    // u32 lockConfusionTurns:2;
    // u32 multipleTurns:1;
    // u32 wrapped:1;
    // u32 powder:1;
    // u32 padding:1;
    // u32 infatuation:4; // one bit for each battler
    // u32 defenseCurl:1;
    // u32 transformed:1;
    // u32 recharge:1;
    // u32 rage:1;
    // u32 substitute:1;
    // u32 destinyBond:1;
    // u32 escapePrevention:1;
    // u32 nightmare:1;
    // u32 cursed:1;
    // u32 foresight:1;
    // u32 dragonCheer:1;
    // u32 focusEnergy:1;
};

struct BattlePokemon
{
    /*0x00*/ u16 species;
    /*0x02*/ u16 attack;
    /*0x04*/ u16 defense;
    /*0x06*/ u16 speed;
    /*0x08*/ u16 spAttack;
    /*0x0A*/ u16 spDefense;
    /*0x0C*/ u16 moves[MAX_MON_MOVES];
    /*0x14*/ u32 hpIV:5;
    /*0x14*/ u32 attackIV:5;
    /*0x15*/ u32 defenseIV:5;
    /*0x15*/ u32 speedIV:5;
    /*0x16*/ u32 spAttackIV:5;
    /*0x17*/ u32 spDefenseIV:5;
    /*0x17*/ u32 abilityNum:2;
    /*0x18*/ s8 statStages[NUM_BATTLE_STATS];
    /*0x20*/ u16 ability;
    /*0x22*/ u8 types[3];
    /*0x25*/ u8 pp[MAX_MON_MOVES];
    /*0x29*/ u16 hp;
    /*0x2B*/ u8 level;
    /*0x2C*/ u8 friendship;
    /*0x2D*/ u16 maxHP;
    /*0x2F*/ u16 item;
    /*0x31*/ u8 nickname[POKEMON_NAME_LENGTH + 1];
    /*0x3C*/ u8 ppBonuses;
    /*0x3D*/ u8 otName[PLAYER_NAME_LENGTH + 1];
    /*0x45*/ u32 experience;
    /*0x49*/ u32 personality;
    /*0x4D*/ u32 status1;
    /*0x51*/ struct Volatiles volatiles;
    /*0x5D*/ u32 otId;
    /*0x61*/ u8 metLevel;
    /*0x62*/ bool8 isShiny;
};

struct EvolutionParam
{
    u16 condition;
    u16 arg1;
    u16 arg2;
    u16 arg3;
};

struct Evolution
{
    u16 method;
    u16 param;
    u16 targetSpecies;
    const struct EvolutionParam *params;
};

struct SpeciesInfo /*0xC4*/
{
    u8 baseHP;
    u8 baseAttack;
    u8 baseDefense;
    u8 baseSpeed;
    u8 baseSpAttack;
    u8 baseSpDefense;
    u8 types[2];
    u8 catchRate;
    u8 forceTeraType;
    u16 expYield; // expYield was changed from u8 to u16 for the new Exp System.
    u16 evYield_HP:2;
    u16 evYield_Attack:2;
    u16 evYield_Defense:2;
    u16 evYield_Speed:2;
    u16 evYield_SpAttack:2;
    u16 evYield_SpDefense:2;
    u16 padding2:4;
    u16 itemCommon;
    u16 itemRare;
    u8 genderRatio;
    u8 eggCycles;
    u8 friendship;
    u8 growthRate;
    u8 eggGroups[2];
    u16 abilities[NUM_ABILITY_SLOTS]; // 3 abilities, no longer u8 because we have over 255 abilities now.
    u8 safariZoneFleeRate;

    // Pokédex data
    u8 categoryName[13];
    u8 speciesName[POKEMON_NAME_LENGTH + 1];
    enum PokemonCry cryId:16;
    enum NationalDexOrder natDexNum:16;
    u16 height; //in decimeters
    u16 weight; //in hectograms
    u16 pokemonScale;
    u16 pokemonOffset;
    u16 trainerScale;
    u16 trainerOffset;
    const u8 *description;
    enum BodyColor bodyColor:7;
    // Graphical Data
    u8 noFlip:1;
    u8 frontAnimDelay;
    u8 frontAnimId;
    u8 backAnimId;
    const union AnimCmd *const *frontAnimFrames;
    const u32 *frontPic;
    const u32 *backPic;
    const u16 *palette;
    const u16 *shinyPalette;
    const u8 *iconSprite;
#if P_GENDER_DIFFERENCES
    const u32 *frontPicFemale;
    const u32 *backPicFemale;
    const u16 *paletteFemale;
    const u16 *shinyPaletteFemale;
    const u8 *iconSpriteFemale;
#endif //P_GENDER_DIFFERENCES
#if P_FOOTPRINTS
    const u8 *footprint;
#endif
    // All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame the sprite's non-transparent pixels actually are.
    u8 frontPicSize; // The dimensions of this drawn pixel area.
    u8 frontPicYOffset; // The number of pixels between the drawn pixel area and the bottom edge.
    u8 backPicSize; // The dimensions of this drawn pixel area.
    u8 backPicYOffset; // The number of pixels between the drawn pixel area and the bottom edge.
#if P_GENDER_DIFFERENCES
    u8 frontPicSizeFemale; // The dimensions of this drawn pixel area.
    u8 backPicSizeFemale; // The dimensions of this drawn pixel area.
#endif //P_GENDER_DIFFERENCES
    u8 iconPalIndex:3;
#if P_GENDER_DIFFERENCES
    u8 iconPalIndexFemale:3;
#else
    u8 paddingF:3;
#endif //P_GENDER_DIFFERENCES
    u8 pokemonJumpType:2; // According to the clerk, the Pokémon allowed in Pokémon Jump are all <= 28 inches/71 cm, and do not only swim, burrow, or fly.
    u8 enemyMonElevation; // This determines how much higher above the usual position the enemy Pokémon is during battle. Species that float or fly have nonzero values.
    // Flags
    u32 isLegendary:1;
    u32 isMythical:1;
    u32 isUltraBeast:1;
    u32 isParadox:1;
    u32 isTotem:1;
    u32 isMegaEvolution:1;
    u32 isPrimalReversion:1;
    u32 isUltraBurst:1;
    u32 isGigantamax:1;
    u32 isTeraForm:1;
    u32 isAlolanForm:1;
    u32 isGalarianForm:1;
    u32 isHisuianForm:1;
    u32 isPaldeanForm:1;
    u32 cannotBeTraded:1;
    u32 perfectIVCount:3;   // This species will always generate with the specified amount of perfect IVs.
    u32 dexForceRequired:1; // This species will be taken into account for Pokédex ratings even if they have the "isMythical" flag set.
    u32 tmIlliterate:1;     // This species will be unable to learn the universal moves.
    u32 isFrontierBanned:1; // This species is not allowed to participate in Battle Frontier facilities.
    u32 padding4:11;
    // Shadow settings
    s8 enemyShadowXOffset; // This determines the X-offset for an enemy Pokémon's shadow during battle; negative values point left, positive values point right.
    s8 enemyShadowYOffset; // This determines the Y-offset for an enemy Pokémon's shadow during battle; negative values point up, positive values point down.
    u16 enemyShadowSize:3; // This determines the size of the shadow sprite used for an enemy Pokémon's front sprite during battle.
    u16 suppressEnemyShadow:1; // If set to true, then a shadow will not be drawn beneath an enemy Pokémon's front sprite during battle.
    u16 padding5:12;
    // Move Data
    const struct LevelUpMove *levelUpLearnset;
    const u16 *teachableLearnset;
    const u16 *eggMoveLearnset;
    const struct Evolution *evolutions;
    const u16 *formSpeciesIdTable;
    const struct FormChange *formChangeTable;
#if OW_POKEMON_OBJECT_EVENTS
    struct ObjectEventGraphicsInfo overworldData;
#if P_GENDER_DIFFERENCES
    struct ObjectEventGraphicsInfo overworldDataFemale;
#endif //P_GENDER_DIFFERENCES
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const void* overworldPalette;
    const void* overworldShinyPalette;
#if P_GENDER_DIFFERENCES
    const void* overworldPaletteFemale;
    const void* overworldShinyPaletteFemale;
#endif //P_GENDER_DIFFERENCES
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
};

struct Ability
{
    u8 name[ABILITY_NAME_LENGTH + 1];
    const u8 *description;
    s8 aiRating;
    u8 cantBeCopied:1; // cannot be copied by Role Play or Doodle
    u8 cantBeSwapped:1; // cannot be swapped with Skill Swap or Wandering Spirit
    u8 cantBeTraced:1; // cannot be copied by Trace - same as cantBeCopied except for Wonder Guard
    u8 cantBeSuppressed:1; // cannot be negated by Gastro Acid or Neutralizing Gas
    u8 cantBeOverwritten:1; // cannot be overwritten by Entrainment, Worry Seed or Simple Beam (but can be by Mummy) - same as cantBeSuppressed except for Truant
    u8 breakable:1; // can be bypassed by Mold Breaker and clones
    u8 failsOnImposter:1; // doesn't work on an Imposter mon; when can we actually use this?
};

enum {
    AFFINE_NONE,
    AFFINE_TURN_UP,
    AFFINE_TURN_UP_AND_DOWN,
    AFFINE_TURN_DOWN,
    AFFINE_TURN_DOWN_SLOW,
    AFFINE_TURN_DOWN_SLIGHT,
    AFFINE_TURN_UP_HIGH,
    AFFINE_UNUSED_1,
    AFFINE_UNUSED_2,
    AFFINE_UNUSED_3,
    NUM_MON_AFFINES,
};

// The animation the Pokémon does during the feeding scene depends on their nature.
// The below values are offsets into sMonPokeblockAnims of the animation data for that nature.
#define ANIM_HARDY   0
#define ANIM_LONELY  (ANIM_HARDY + 3)
#define ANIM_BRAVE   (ANIM_LONELY + 1)
#define ANIM_ADAMANT (ANIM_BRAVE + 1)
#define ANIM_NAUGHTY (ANIM_ADAMANT + 5)
#define ANIM_BOLD    (ANIM_NAUGHTY + 3)
#define ANIM_DOCILE  (ANIM_BOLD + 2)
#define ANIM_RELAXED (ANIM_DOCILE + 1)
#define ANIM_IMPISH  (ANIM_RELAXED + 2)
#define ANIM_LAX     (ANIM_IMPISH + 1)
#define ANIM_TIMID   (ANIM_LAX + 1)
#define ANIM_HASTY   (ANIM_TIMID + 5)
#define ANIM_SERIOUS (ANIM_HASTY + 2)
#define ANIM_JOLLY   (ANIM_SERIOUS + 1)
#define ANIM_NAIVE   (ANIM_JOLLY + 1)
#define ANIM_MODEST  (ANIM_NAIVE + 4)
#define ANIM_MILD    (ANIM_MODEST + 3)
#define ANIM_QUIET   (ANIM_MILD + 1)
#define ANIM_BASHFUL (ANIM_QUIET + 2)
#define ANIM_RASH    (ANIM_BASHFUL + 3)
#define ANIM_CALM    (ANIM_RASH + 3)
#define ANIM_GENTLE  (ANIM_CALM + 1)
#define ANIM_SASSY   (ANIM_GENTLE + 1)
#define ANIM_CAREFUL (ANIM_SASSY + 1)
#define ANIM_QUIRKY  (ANIM_CAREFUL + 5)

// In palace double battles, Pokémon have a target preference depending on nature
#define PALACE_TARGET_STRONGER 0
#define PALACE_TARGET_WEAKER   1
#define PALACE_TARGET_RANDOM   2

struct NatureInfo
{
    const u8 *name;
    u8 statUp;
    u8 statDown;
    u8 backAnim;
    u8 pokeBlockAnim[2];
    u8 battlePalacePercents[4];
    u8 battlePalaceFlavorText;
    u8 battlePalaceSmokescreen;
    const u8 *natureGirlMessage;
};

#define SPINDA_SPOT_WIDTH 16
#define SPINDA_SPOT_HEIGHT 16

struct SpindaSpot
{
    u8 x, y;
    u16 image[SPINDA_SPOT_HEIGHT];
};

struct LevelUpMove
{
    u16 move;
    u16 level;
};

struct FormChange
{
    u16 method;
    u16 targetSpecies;
    u16 param1;
    u16 param2;
    u16 param3;
};

struct Fusion
{
    u16 fusionStorageIndex;
    u16 itemId;
    u16 targetSpecies1;
    u16 targetSpecies2;
    u16 fusingIntoMon;
    u16 fusionMove;
    u16 unfuseForgetMove;
};

extern const struct Fusion *const gFusionTablePointers[NUM_SPECIES];

#define NUM_UNOWN_FORMS 28

#define GET_UNOWN_LETTER(personality) ((   \
      (((personality) & 0x03000000) >> 18) \
    | (((personality) & 0x00030000) >> 12) \
    | (((personality) & 0x00000300) >> 6)  \
    | (((personality) & 0x00000003) >> 0)  \
) % NUM_UNOWN_FORMS)

#define GET_SHINY_VALUE(otId, personality) (HIHALF(otId) ^ LOHALF(otId) ^ HIHALF(personality) ^ LOHALF(personality))

extern u8 gPlayerPartyCount;
extern struct Pokemon gPlayerParty[PARTY_SIZE];
extern u8 gEnemyPartyCount;
extern struct Pokemon gEnemyParty[PARTY_SIZE];
extern struct SpriteTemplate gMultiuseSpriteTemplate;
extern u16 gFollowerSteps;
extern bool32 consumeItem;
extern u32 removeBagItem;
extern u32 removeBagItemCount;

extern const u16 gFacilityClassToPicIndex[];
extern const enum TrainerClassID gFacilityClassToTrainerClass[];
extern const struct SpeciesInfo gSpeciesInfo[];
extern const u32 gExperienceTables[][MAX_LEVEL + 1];
extern const u8 gPPUpGetMask[];
extern const u8 gPPUpClearMask[];
extern const u8 gPPUpAddValues[];
extern const u8 gStatStageRatios[MAX_STAT_STAGE + 1][2];
extern const u16 gUnionRoomFacilityClasses[];
extern const struct SpriteTemplate gBattlerSpriteTemplates[];
extern const u32 sExpCandyExperienceTable[];
extern const struct Ability gAbilitiesInfo[];
extern const struct NatureInfo gNaturesInfo[];
#if P_TUTOR_MOVES_ARRAY
extern const u16 gTutorMoves[];
#endif // P_TUTOR_MOVES_ARRAY

void ZeroBoxMonData(struct BoxPokemon *boxMon);
void ZeroMonData(struct Pokemon *mon);
void ZeroPlayerPartyMons(void);
void ZeroEnemyPartyMons(void);
void CreateMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateBoxMon(struct BoxPokemon *boxMon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 nature);
void CreateMonWithGenderNatureLetter(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 gender, u8 nature, u8 unownLetter);
void CreateMaleMon(struct Pokemon *mon, u16 species, u8 level);
void CreateMonWithIVsPersonality(struct Pokemon *mon, u16 species, u8 level, u32 ivs, u32 personality);
void CreateMonWithIVsOTID(struct Pokemon *mon, u16 species, u8 level, u8 *ivs, u32 otId);
void CreateMonWithEVSpread(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 evSpread);
void CreateBattleTowerMon(struct Pokemon *mon, struct BattleTowerPokemon *src);
void CreateBattleTowerMon_HandleLevel(struct Pokemon *mon, struct BattleTowerPokemon *src, bool8 lvl50);
void CreateApprenticeMon(struct Pokemon *mon, const struct Apprentice *src, u8 monId);
void CreateMonWithEVSpreadNatureOTID(struct Pokemon *mon, u16 species, u8 level, u8 nature, u8 fixedIV, u8 evSpread, u32 otId);
void ConvertPokemonToBattleTowerPokemon(struct Pokemon *mon, struct BattleTowerPokemon *dest);
bool8 ShouldIgnoreDeoxysForm(u8 caseId, u8 battler);
u16 GetUnionRoomTrainerPic(void);
enum TrainerClassID GetUnionRoomTrainerClass(void);
void CreateEnemyEventMon(void);
void CalculateMonStats(struct Pokemon *mon);
void BoxMonToMon(const struct BoxPokemon *src, struct Pokemon *dest);
u8 GetLevelFromMonExp(struct Pokemon *mon);
u8 GetLevelFromBoxMonExp(struct BoxPokemon *boxMon);
u16 GiveMoveToMon(struct Pokemon *mon, u16 move);
u16 GiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
u16 GiveMoveToBattleMon(struct BattlePokemon *mon, u16 move);
void SetMonMoveSlot(struct Pokemon *mon, u16 move, u8 slot);
void SetBattleMonMoveSlot(struct BattlePokemon *mon, u16 move, u8 slot);
void GiveMonInitialMoveset(struct Pokemon *mon);
void GiveBoxMonInitialMoveset(struct BoxPokemon *boxMon);
u16 MonTryLearningNewMoveAtLevel(struct Pokemon *mon, bool32 firstMove, u32 level);
u16 MonTryLearningNewMove(struct Pokemon *mon, bool8 firstMove);
void DeleteFirstMoveAndGiveMoveToMon(struct Pokemon *mon, u16 move);
void DeleteFirstMoveAndGiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
u8 CountAliveMonsInBattle(u8 caseId, u32 battler);
u8 GetDefaultMoveTarget(u8 battler);
u8 GetMonGender(struct Pokemon *mon);
u8 GetBoxMonGender(struct BoxPokemon *boxMon);
u8 GetGenderFromSpeciesAndPersonality(u16 species, u32 personality);
bool32 IsPersonalityFemale(u16 species, u32 personality);
u32 GetUnownSpeciesId(u32 personality);
void SetMultiuseSpriteTemplateToPokemon(u16 speciesTag, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainerBack(u16 trainerPicId, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainerFront(u16 trainerPicId, u8 battlerPosition);

/* GameFreak called Get(Box)MonData with either 2 or 3 arguments, for
 * type safety we have a Get(Box)MonData macro which dispatches to
 * either Get(Box)MonData2 or Get(Box)MonData3 based on the number of
 * arguments. The two functions are aliases of each other, but they
 * differ for matching purposes in the caller's codegen. */
#define GetMonData(...) CAT(GetMonData, NARG_8(__VA_ARGS__))(__VA_ARGS__)
#define GetBoxMonData(...) CAT(GetBoxMonData, NARG_8(__VA_ARGS__))(__VA_ARGS__)
u32 GetMonData3(struct Pokemon *mon, s32 field, u8 *data);
u32 GetMonData2(struct Pokemon *mon, s32 field);
u32 GetBoxMonData3(struct BoxPokemon *boxMon, s32 field, u8 *data);
u32 GetBoxMonData2(struct BoxPokemon *boxMon, s32 field);

void SetMonData(struct Pokemon *mon, s32 field, const void *dataArg);
void SetBoxMonData(struct BoxPokemon *boxMon, s32 field, const void *dataArg);
void CopyMon(void *dest, void *src, size_t size);
u8 GiveMonToPlayer(struct Pokemon *mon);
u8 CopyMonToPC(struct Pokemon *mon);
u8 CalculatePlayerPartyCount(void);
u8 CalculateEnemyPartyCount(void);
u8 CalculateEnemyPartyCountInSide(u32 battler);
u8 GetMonsStateToDoubles(void);
u8 GetMonsStateToDoubles_2(void);
u16 GetAbilityBySpecies(u16 species, u8 abilityNum);
u16 GetMonAbility(struct Pokemon *mon);
void CreateSecretBaseEnemyParty(struct SecretBase *secretBaseRecord);
u8 GetSecretBaseTrainerPicIndex(void);
enum TrainerClassID GetSecretBaseTrainerClass(void);
bool8 IsPlayerPartyAndPokemonStorageFull(void);
bool8 IsPokemonStorageFull(void);
const u8 *GetSpeciesName(u16 species);
const u8 *GetSpeciesCategory(u16 species);
const u8 *GetSpeciesPokedexDescription(u16 species);
u32 GetSpeciesHeight(u16 species);
u32 GetSpeciesWeight(u16 species);
u32 GetSpeciesType(u16 species, u8 slot);
u32 GetSpeciesAbility(u16 species, u8 slot);
u32 GetSpeciesBaseHP(u16 species);
u32 GetSpeciesBaseAttack(u16 species);
u32 GetSpeciesBaseDefense(u16 species);
u32 GetSpeciesBaseSpAttack(u16 species);
u32 GetSpeciesBaseSpDefense(u16 species);
u32 GetSpeciesBaseSpeed(u16 species);
const struct LevelUpMove *GetSpeciesLevelUpLearnset(u16 species);
const u16 *GetSpeciesTeachableLearnset(u16 species);
const u16 *GetSpeciesEggMoves(u16 species);
const struct Evolution *GetSpeciesEvolutions(u16 species);
const u16 *GetSpeciesFormTable(u16 species);
const struct FormChange *GetSpeciesFormChanges(u16 species);
u8 CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
void RemoveMonPPBonus(struct Pokemon *mon, u8 moveIndex);
void RemoveBattleMonPPBonus(struct BattlePokemon *mon, u8 moveIndex);
void PokemonToBattleMon(struct Pokemon *src, struct BattlePokemon *dst);
void CopyPartyMonToBattleData(u32 battler, u32 partyIndex);
bool8 ExecuteTableBasedItemEffect(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex);
bool8 PokemonUseItemEffects(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex, u8 usedByAI);
bool8 HealStatusConditions(struct Pokemon *mon, u32 healMask, u8 battler);
u8 GetItemEffectParamOffset(u32 battler, u16 itemId, u8 effectByte, u8 effectBit);
u8 *UseStatIncreaseItem(u16 itemId);
u8 GetNature(struct Pokemon *mon);
u8 GetNatureFromPersonality(u32 personality);
u32 GetGMaxTargetSpecies(u32 species);
bool32 DoesMonMeetAdditionalConditions(struct Pokemon *mon, const struct EvolutionParam *params, struct Pokemon *tradePartner, u32 partyId, bool32 *canStopEvo, enum EvoState evoState);
u32 GetEvolutionTargetSpecies(struct Pokemon *mon, enum EvolutionMode mode, u16 evolutionItem, struct Pokemon *tradePartner, bool32 *canStopEvo, enum EvoState evoState);
bool8 IsMonPastEvolutionLevel(struct Pokemon *mon);
u16 NationalPokedexNumToSpecies(enum NationalDexOrder nationalNum);
enum HoennDexOrder NationalToHoennOrder(enum NationalDexOrder nationalNum);
enum NationalDexOrder SpeciesToNationalPokedexNum(u16 species);
enum HoennDexOrder SpeciesToHoennPokedexNum(u16 species);
enum NationalDexOrder HoennToNationalOrder(enum HoennDexOrder hoennNum);
void DrawSpindaSpots(u32 personality, u8 *dest, bool32 isSecondFrame);
void EvolutionRenameMon(struct Pokemon *mon, u16 oldSpecies, u16 newSpecies);
u8 GetPlayerFlankId(void);
u16 GetLinkTrainerFlankId(u8 linkPlayerId);
s32 GetBattlerMultiplayerId(u16 id);
u8 GetTrainerEncounterMusicId(u16 trainerOpponentId);
u16 ModifyStatByNature(u8 nature, u16 stat, u8 statIndex);
void AdjustFriendship(struct Pokemon *mon, u8 event);
void MonGainEVs(struct Pokemon *mon, u16 defeatedSpecies);
u16 GetMonEVCount(struct Pokemon *mon);
void RandomlyGivePartyPokerus(struct Pokemon *party);
u8 CheckPartyPokerus(struct Pokemon *party, u8 selection);
u8 CheckPartyHasHadPokerus(struct Pokemon *party, u8 selection);
void UpdatePartyPokerusTime(u16 days);
void PartySpreadPokerus(struct Pokemon *party);
bool8 TryIncrementMonLevel(struct Pokemon *mon);
u8 CanLearnTeachableMove(u16 species, u16 move);
u8 GetMoveRelearnerMoves(struct Pokemon *mon, u16 *moves);
u8 GetLevelUpMovesBySpecies(u16 species, u16 *moves);
u8 GetNumberOfRelearnableMoves(struct Pokemon *mon);
u16 SpeciesToPokedexNum(u16 species);
bool32 IsSpeciesInHoennDex(u16 species);
u16 GetBattleBGM(void);
void PlayBattleBGM(void);
void PlayMapChosenOrBattleBGM(u16 songId);
void CreateTask_PlayMapChosenOrBattleBGM(u16 songId);
const u16 *GetMonFrontSpritePal(struct Pokemon *mon);
const u16 *GetMonSpritePalFromSpeciesAndPersonality(u16 species, bool32 isShiny, u32 personality);
const u16 *GetMonSpritePalFromSpecies(u16 species, bool32 isShiny, bool32 isFemale);
bool32 IsMoveHM(u16 move);
bool32 CannotForgetMove(u16 move);
bool8 IsMonSpriteNotFlipped(u16 species);
s8 GetMonFlavorRelation(struct Pokemon *mon, u8 flavor);
s8 GetFlavorRelationByPersonality(u32 personality, u8 flavor);
bool8 IsTradedMon(struct Pokemon *mon);
bool8 IsOtherTrainer(u32 otId, u8 *otName);
void MonRestorePP(struct Pokemon *mon);
void BoxMonRestorePP(struct BoxPokemon *boxMon);
void SetMonPreventsSwitchingString(void);
void SetWildMonHeldItem(void);
bool8 IsMonShiny(struct Pokemon *mon);
const u8 *GetTrainerPartnerName(void);
void BattleAnimateFrontSprite(struct Sprite *sprite, u16 species, bool8 noCry, u8 panMode);
void DoMonFrontSpriteAnimation(struct Sprite *sprite, u16 species, bool8 noCry, u8 panModeAnimFlag);
void PokemonSummaryDoMonAnimation(struct Sprite *sprite, u16 species, bool8 oneFrame);
void StopPokemonAnimationDelayTask(void);
void BattleAnimateBackSprite(struct Sprite *sprite, u16 species);
u8 GetOpposingLinkMultiBattlerId(bool8 rightSide, u8 multiplayerId);
u16 FacilityClassToPicIndex(u16 facilityClass);
u16 PlayerGenderToFrontTrainerPicId(u8 playerGender);
void HandleSetPokedexFlag(enum NationalDexOrder nationalNum, u8 caseId, u32 personality);
bool8 HasTwoFramesAnimation(u16 species);
struct MonSpritesGfxManager *CreateMonSpritesGfxManager(void);
void DestroyMonSpritesGfxManager(void);
u8 *MonSpritesGfxManager_GetSpritePtr(void);
u16 GetFormSpeciesId(u16 speciesId, u8 formId);
u8 GetFormIdFromFormSpeciesId(u16 formSpeciesId);
u32 GetFormChangeTargetSpecies(struct Pokemon *mon, enum FormChanges method, u32 arg);
u32 GetFormChangeTargetSpeciesBoxMon(struct BoxPokemon *boxMon, enum FormChanges method, u32 arg);
bool32 DoesSpeciesHaveFormChangeMethod(u16 species, enum FormChanges method);
u16 MonTryLearningNewMoveEvolution(struct Pokemon *mon, bool8 firstMove);
void RemoveIVIndexFromList(u8 *ivs, u8 selectedIv);
void TrySpecialOverworldEvo(void);
bool32 SpeciesHasGenderDifferences(u16 species);
bool32 TryFormChange(u32 monId, u32 side, enum FormChanges method);
void TryToSetBattleFormChangeMoves(struct Pokemon *mon, enum FormChanges method);
u32 GetMonFriendshipScore(struct Pokemon *pokemon);
u32 GetMonAffectionHearts(struct Pokemon *pokemon);
void UpdateMonPersonality(struct BoxPokemon *boxMon, u32 personality);
u8 CalculatePartyCount(struct Pokemon *party);
u16 SanitizeSpeciesId(u16 species);
bool32 IsSpeciesEnabled(u16 species);
enum PokemonCry GetCryIdBySpecies(u16 species);
u16 GetSpeciesPreEvolution(u16 species);
void HealPokemon(struct Pokemon *mon);
void HealBoxPokemon(struct BoxPokemon *boxMon);
void UpdateDaysPassedSinceFormChange(u16 days);
void TrySetDayLimitToFormChange(struct Pokemon *mon);
u32 CheckDynamicMoveType(struct Pokemon *mon, u32 move, u32 battler, enum MonState state);
uq4_12_t GetDynamaxLevelHPMultiplier(u32 dynamaxLevel, bool32 inverseMultiplier);
u32 GetRegionalFormByRegion(u32 species, u32 region);
bool32 IsSpeciesForeignRegionalForm(u32 species, u32 currentRegion);
u32 GetTeraTypeFromPersonality(struct Pokemon *mon);
bool8 ShouldSkipFriendshipChange(void);
struct Pokemon *GetSavedPlayerPartyMon(u32 index);
u8 *GetSavedPlayerPartyCount(void);
void SavePlayerPartyMon(u32 index, struct Pokemon *mon);
u32 IsSpeciesOfType(u32 species, u32 type);
u8 GetRealIV(u8 iv);

#endif // GUARD_POKEMON_H
