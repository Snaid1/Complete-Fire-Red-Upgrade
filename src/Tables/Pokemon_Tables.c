#include "../defines_battle.h"
#include "../../include/pokedex.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"
/*
pokemon_tables.c
	set up tables for pokemon species including:
		-alternate species
		-ban lists
		-move tables by species
		-etc...
		
tables to edit:
	gAlternateSpeciesSizeTable
	gTelekinesisBanList
	gSkyBattleBannedSpeciesList
	gUltraBeastList
	gDeerlingForms
	gSawsbuckForms
	gVivillonForms
	gFlabebeForms
	gFloetteForms
	gFlorgesForms
	gFurfrouForms
	gPikachuCapForms
	gSetPerfectXIvList
	gRandomizerBanList
	gRandomizerAbilityBanList
	
	gBattleTowerStandardSpeciesBanList
	gGSCup_LegendarySpeciesList
	gSmogonOU_SpeciesBanList
	gSmogonOUDoubles_SpeciesBanList
	gSmogonOU_AbilityBanList
	gSmogonOUDoubles_AbilityBanList
	gBattleTowerStandard_ItemBanList
	gSmogonOU_ItemBanList
	gSmogonOUDoubles_ItemBanList
	gSmogonOUDoubles_MoveBanList
	gSmogon_MoveBanList
	gSmogonLittleCup_SpeciesList
	gSmogonLittleCup_MoveBanList
	gSmogonLittleCup_ItemBanList
	gMiddleCup_SpeciesList
	gMiddleCup_AbilityBanList
	gMiddleCup_ItemBanList
	gSmogonMonotype_SpeciesBanList
	gSmogonMonotype_AbilityBanList
	gSmogonMonotype_ItemBanList
	gSmogonCamomons_SpeciesBanList
	gSmogonAverageMons_SpeciesBanList
	gSmogonAverageMons_ItemBanList
	gSmogonAverageMons_MoveBanList
	gSmogonAverageMons_AbilityBanList
	gSmogon350Cup_SpeciesBanList
	gSmogon350Cup_ItemBanList
	gSmogon350Cup_AbilityBanList
	gSmogonScalemons_SpeciesBanList
	gSmogonScalemons_ItemBanList
	gSmogonScalemons_AbilityBanList
	gSmogonBenjaminButterfree_SpeciesBanList


*/

#define ALTERNATE_SIZE(species, height, weight) {species, height * 10, weight * 10}

const struct AlternateSize gAlternateSpeciesSizeTable[] =
{
	ALTERNATE_SIZE(SPECIES_VENUSAUR_MEGA, 2.4, 155.5),
	ALTERNATE_SIZE(SPECIES_CHARIZARD_MEGA_Y, 1.7, 100.5),
	ALTERNATE_SIZE(SPECIES_CHARIZARD_MEGA_X, 1.7, 110.5),
	ALTERNATE_SIZE(SPECIES_BLASTOISE_MEGA, 1.6, 101.1),
	ALTERNATE_SIZE(SPECIES_BEEDRILL_MEGA, 1.4, 40.5),
	ALTERNATE_SIZE(SPECIES_PIDGEOT, 2.2, 50.5),
	ALTERNATE_SIZE(SPECIES_RATTATA_A, 0.3, 3.8),
	ALTERNATE_SIZE(SPECIES_RATICATE_A, 0.7, 25.5),
	ALTERNATE_SIZE(SPECIES_RAICHU_A, 0.7, 21.0),
	ALTERNATE_SIZE(SPECIES_SANDSHREW_A, 0.7, 40.0),
	ALTERNATE_SIZE(SPECIES_SANDSLASH_A, 1.2, 55.0),
	ALTERNATE_SIZE(SPECIES_DIGLETT_A, 0.2, 1.0),
	ALTERNATE_SIZE(SPECIES_DUGTRIO_A, 0.7, 66.6),
	ALTERNATE_SIZE(SPECIES_PERSIAN_A, 1.1, 33.0),
	ALTERNATE_SIZE(SPECIES_ALAKAZAM_MEGA, 1.2, 105.8),
	ALTERNATE_SIZE(SPECIES_GEODUDE_A, 0.4, 20.3),
	ALTERNATE_SIZE(SPECIES_GRAVELER_A, 1.0, 110.0),
	ALTERNATE_SIZE(SPECIES_GOLEM_A, 1.7, 316.0),
	ALTERNATE_SIZE(SPECIES_SLOWBRO_MEGA, 2.0, 120.0),
	ALTERNATE_SIZE(SPECIES_GRIMER_A, 0.7, 42.0),
	ALTERNATE_SIZE(SPECIES_MUK_A, 1.0, 52.0),
	ALTERNATE_SIZE(SPECIES_GENGAR_MEGA, 1.4, 40.5),
	ALTERNATE_SIZE(SPECIES_EXEGGUTOR_A, 10.9, 415.6),
	ALTERNATE_SIZE(SPECIES_MAROWAK_A, 1.0, 34.0),
	ALTERNATE_SIZE(SPECIES_KANGASKHAN_MEGA, 2.2, 100.0),
	ALTERNATE_SIZE(SPECIES_PINSIR_MEGA, 1.7, 59.0),
	ALTERNATE_SIZE(SPECIES_GYARADOS_MEGA, 6.5, 305.0),
	ALTERNATE_SIZE(SPECIES_AERODACTYL_MEGA, 2.1, 79.0),
	ALTERNATE_SIZE(SPECIES_MEWTWO_MEGA_Y, 1.5, 33.0),
	ALTERNATE_SIZE(SPECIES_MEWTWO_MEGA_X, 2.3, 127.0),
	ALTERNATE_SIZE(SPECIES_STEELIX_MEGA, 10.5, 740.0),
	ALTERNATE_SIZE(SPECIES_SCIZOR_MEGA, 2.0, 125.0),
	ALTERNATE_SIZE(SPECIES_HERACROSS_MEGA, 1.7, 62.5),
	ALTERNATE_SIZE(SPECIES_HOUNDOOM_MEGA, 1.9, 49.5),
	ALTERNATE_SIZE(SPECIES_TYRANITAR_MEGA, 2.5, 255.0),
	ALTERNATE_SIZE(SPECIES_SCEPTILE_MEGA, 1.9, 55.2),
	ALTERNATE_SIZE(SPECIES_SWAMPERT_MEGA, 1.9, 102.0),
	ALTERNATE_SIZE(SPECIES_SABLEYE_MEGA, 0.5, 161.0),
	ALTERNATE_SIZE(SPECIES_MAWILE_MEGA, 1.0, 23.5),
	ALTERNATE_SIZE(SPECIES_AGGRON_MEGA, 2.2, 395.0),
	ALTERNATE_SIZE(SPECIES_MANECTRIC_MEGA, 1.8, 44.0),
	ALTERNATE_SIZE(SPECIES_SHARPEDO_MEGA, 2.5, 130.3),
	ALTERNATE_SIZE(SPECIES_CAMERUPT_MEGA, 2.5, 320.5),
	ALTERNATE_SIZE(SPECIES_ALTARIA_MEGA, 1.5, 20.6),
	ALTERNATE_SIZE(SPECIES_BANETTE_MEGA, 1.2, 13.0),
	ALTERNATE_SIZE(SPECIES_ABSOL_MEGA, 1.2, 49.0),
	ALTERNATE_SIZE(SPECIES_GLALIE_MEGA, 2.1, 350.2),
	ALTERNATE_SIZE(SPECIES_SALAMENCE_MEGA, 1.8, 112.6),
	ALTERNATE_SIZE(SPECIES_METAGROSS_MEGA, 2.5, 942.9),
	ALTERNATE_SIZE(SPECIES_LATIAS_MEGA, 1.8, 52.0),
	ALTERNATE_SIZE(SPECIES_LATIOS_MEGA, 2.3, 70.0),
	ALTERNATE_SIZE(SPECIES_KYOGRE_PRIMAL, 9.8, 430.0),
	ALTERNATE_SIZE(SPECIES_GROUDON_PRIMAL, 5.0, 999.7),
	ALTERNATE_SIZE(SPECIES_RAYQUAZA_MEGA, 10.8, 392.0),
	ALTERNATE_SIZE(SPECIES_LOPUNNY_MEGA, 1.3, 28.3),
	ALTERNATE_SIZE(SPECIES_LUCARIO_MEGA, 1.3, 57.5),
	ALTERNATE_SIZE(SPECIES_ABOMASNOW_MEGA, 2.7, 185.0),
	ALTERNATE_SIZE(SPECIES_GALLADE_MEGA, 1.6, 56.4),
	ALTERNATE_SIZE(SPECIES_GIRATINA_ORIGIN, 6.9, 650.0),
	ALTERNATE_SIZE(SPECIES_SHAYMIN_SKY, 0.4, 5.2),
	ALTERNATE_SIZE(SPECIES_AUDINO_MEGA, 1.5, 32.0),
	ALTERNATE_SIZE(SPECIES_TORNADUS_THERIAN, 1.4, 63.0),
	ALTERNATE_SIZE(SPECIES_THUNDURUS_THERIAN, 3.0, 61.0),
	ALTERNATE_SIZE(SPECIES_LANDORUS_THERIAN, 1.3, 68.0),
	ALTERNATE_SIZE(SPECIES_KYUREM_BLACK, 3.3, 325.0),
	ALTERNATE_SIZE(SPECIES_KYUREM_WHITE, 3.6, 325.0),
	ALTERNATE_SIZE(SPECIES_PUMPKABOO_M, 0.4, 5.0),
	ALTERNATE_SIZE(SPECIES_PUMPKABOO_L, 0.5, 7.5),
	ALTERNATE_SIZE(SPECIES_PUMPKABOO_XL, 0.8, 15.0),
	ALTERNATE_SIZE(SPECIES_GOURGEIST_M, 0.9, 12.5),
	ALTERNATE_SIZE(SPECIES_GOURGEIST_L, 1.1, 14.0),
	ALTERNATE_SIZE(SPECIES_GOURGEIST_XL, 1.7, 39.0),
	ALTERNATE_SIZE(SPECIES_ZYGARDE_10, 1.2, 33.5),
	ALTERNATE_SIZE(SPECIES_ZYGARDE_COMPLETE, 4.5, 610.0),
	ALTERNATE_SIZE(SPECIES_DIANCIE_MEGA, 1.1, 27.8),
	ALTERNATE_SIZE(SPECIES_HOOPA_UNBOUND, 6.5, 490.0),
	ALTERNATE_SIZE(SPECIES_LYCANROC_N, 1.1, 25.0),
	ALTERNATE_SIZE(SPECIES_WISHIWASHI_S, 8.2, 78.6),
	ALTERNATE_SIZE(SPECIES_MINIOR_RED, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_BLUE, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_ORANGE, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_YELLOW, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_INDIGO, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_GREEN, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_VIOLET, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_NECROZMA_DAWN_WINGS, 4.2, 350.0),
	ALTERNATE_SIZE(SPECIES_NECROZMA_DUSK_MANE, 3.8, 460.0),
	ALTERNATE_SIZE(SPECIES_NECROZMA_ULTRA, 7.5, 230.0),
	ALTERNATE_SIZE(SPECIES_TABLES_TERMIN, 0, 0),
};

//The move Telekinesis don't affect these Pokemon
const species_t gTelekinesisBanList[] =
{
	SPECIES_DIGLETT,
	SPECIES_DUGTRIO,
	SPECIES_DIGLETT_A,
	SPECIES_DUGTRIO_A,
	SPECIES_SANDYGAST,
	SPECIES_PALOSSAND,
	SPECIES_GENGAR_MEGA,
	SPECIES_TABLES_TERMIN
};

const species_t gSkyBattleBannedSpeciesList[] =
{
#ifndef UNBOUND
	SPECIES_SPEAROW,
	SPECIES_FARFETCHD,
	SPECIES_HOOTHOOT,
	SPECIES_NATU,
	SPECIES_MURKROW,
	SPECIES_DELIBIRD,
	SPECIES_TAILLOW,
	SPECIES_STARLY,
	SPECIES_CHATOT,
	SPECIES_SHAYMIN_SKY,
	SPECIES_PIDOVE,
	SPECIES_ARCHEN,
	SPECIES_DUCKLETT,
	SPECIES_RUFFLET,
	SPECIES_VULLABY,
	SPECIES_FLETCHLING,
	SPECIES_HAWLUCHA,
	SPECIES_ROWLET,
	SPECIES_PIKIPEK,
#endif
	SPECIES_GENGAR,
	SPECIES_SILVALLY_FLYING,
	SPECIES_DODUO,
	SPECIES_DODRIO,
	SPECIES_TABLES_TERMIN
};

//For the purposes of the Beast Ball
const species_t gUltraBeastList[] =
{
	SPECIES_NIHILEGO,
	SPECIES_BUZZWOLE,
	SPECIES_PHEROMOSA,
	SPECIES_XURKITREE,
	SPECIES_CELESTEELA,
	SPECIES_KARTANA,
	SPECIES_GUZZLORD,
	SPECIES_POIPOLE,
	SPECIES_NAGANADEL,
	SPECIES_STAKATAKA,
	SPECIES_BLACEPHALON,
	SPECIES_TABLES_TERMIN
};

const species_t gDeerlingForms[] =
{
	SPECIES_DEERLING,
	SPECIES_DEERLING_SUMMER,
	SPECIES_DEERLING_AUTUMN,
	SPECIES_DEERLING_WINTER,
	//No termin here
};

const u8 gNumDeerlingForms = ARRAY_COUNT(gDeerlingForms);

const species_t gSawsbuckForms[] =
{
	SPECIES_SAWSBUCK,
	SPECIES_SAWSBUCK_SUMMER,
	SPECIES_SAWSBUCK_AUTUMN,
	SPECIES_SAWSBUCK_WINTER,
	//No termin here
};

const u8 gNumSawsbuckForms = ARRAY_COUNT(gSawsbuckForms);

const species_t gVivillonForms[] =
{
	SPECIES_VIVILLON,
	SPECIES_VIVILLON_ARCHIPELAGO,
	SPECIES_VIVILLON_CONTINENTAL,
	SPECIES_VIVILLON_ELEGANT,
	SPECIES_VIVILLON_GARDEN,
	SPECIES_VIVILLON_FANCY,
	SPECIES_VIVILLON_HIGH_PLAINS,
	SPECIES_VIVILLON_ICY_SNOW,
	SPECIES_VIVILLON_JUNGLE,
	SPECIES_VIVILLON_MARINE,
	SPECIES_VIVILLON_MODERN,
	SPECIES_VIVILLON_MONSOON,
	SPECIES_VIVILLON_OCEAN,
	SPECIES_VIVILLON_POKEBALL,
	SPECIES_VIVILLON_POLAR,
	SPECIES_VIVILLON_RIVER,
	SPECIES_VIVILLON_SANDSTORM,
	SPECIES_VIVILLON_SAVANNA,
	SPECIES_VIVILLON_SUN,
	SPECIES_VIVILLON_TUNDRA,
	//No termin here
};

const u8 gNumVivillonForms = ARRAY_COUNT(gVivillonForms);

const species_t gFlabebeForms[] =
{
	SPECIES_FLABEBE,
	SPECIES_FLABEBE_BLUE,
	SPECIES_FLABEBE_ORANGE,
	SPECIES_FLABEBE_YELLOW,
	SPECIES_FLABEBE_WHITE,
	//No termin here
};

const u8 gNumFlabebeForms = ARRAY_COUNT(gFlabebeForms);

const species_t gFloetteForms[] =
{
	SPECIES_FLOETTE,
	SPECIES_FLOETTE_BLUE,
	SPECIES_FLOETTE_ORANGE,
	SPECIES_FLOETTE_YELLOW,
	SPECIES_FLOETTE_WHITE,
	//No termin here
};

const u8 gNumFloetteForms = ARRAY_COUNT(gFloetteForms);

const species_t gFlorgesForms[] =
{
	SPECIES_FLORGES,
	SPECIES_FLORGES_BLUE,
	SPECIES_FLORGES_ORANGE,
	SPECIES_FLORGES_YELLOW,
	SPECIES_FLORGES_WHITE,
	//No termin here
};

const u8 gNumFlorgesForms = ARRAY_COUNT(gFlorgesForms);

const species_t gFurfrouForms[] =
{
	SPECIES_FURFROU,
	SPECIES_FURFROU_HEART,
	SPECIES_FURFROU_DIAMOND,
	SPECIES_FURFROU_STAR,
	SPECIES_FURFROU_PHAROAH,
	SPECIES_FURFROU_KABUKI,
	SPECIES_FURFROU_LA_REINE,
	SPECIES_FURFROU_MATRON,
	SPECIES_FURFROU_DANDY,
	SPECIES_FURFROU_DEBUTANTE,
	//No termin here
};

const u8 gNumFurfrouForms = ARRAY_COUNT(gFurfrouForms);

const species_t gPikachuCapForms[] =
{
	SPECIES_PIKACHU_CAP_ORIGINAL,
	SPECIES_PIKACHU_CAP_HOENN,
	SPECIES_PIKACHU_CAP_SINNOH,
	SPECIES_PIKACHU_CAP_UNOVA,
	SPECIES_PIKACHU_CAP_KALOS,
	SPECIES_PIKACHU_CAP_ALOLA,
	SPECIES_PIKACHU_CAP_PARTNER,
	//No termin here
};

const u8 gNumPikachuCapForms = ARRAY_COUNT(gPikachuCapForms);

const species_t gBattleTowerStandardSpeciesBanList[] =
{
	SPECIES_MEWTWO,
	SPECIES_MEW,
	SPECIES_LUGIA,
	SPECIES_HO_OH,
	SPECIES_CELEBI,
	SPECIES_KYOGRE,
	SPECIES_GROUDON,
	SPECIES_RAYQUAZA,
	SPECIES_JIRACHI,
	SPECIES_DEOXYS,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_DIALGA,
	SPECIES_PALKIA,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_PHIONE,
	SPECIES_MANAPHY,
	SPECIES_DARKRAI,
	SPECIES_SHAYMIN,
	SPECIES_SHAYMIN_SKY,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_VICTINI,
	SPECIES_RESHIRAM,
	SPECIES_ZEKROM,
	SPECIES_KYUREM,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_KELDEO,
	SPECIES_KELDEO_RESOLUTE,
	SPECIES_MELOETTA,
	SPECIES_MELOETTA_PIROUETTE,
	SPECIES_GENESECT,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_DIANCIE,
	SPECIES_HOOPA,
	SPECIES_HOOPA_UNBOUND,
	SPECIES_VOLCANION,
	SPECIES_ZYGARDE,
	SPECIES_ZYGARDE_10,
	SPECIES_COSMOG,
	SPECIES_COSMOEM,
	SPECIES_SOLGALEO,
	SPECIES_LUNALA,
	SPECIES_MAGEARNA,
	SPECIES_MAGEARNA_P,
	SPECIES_MARSHADOW,
	SPECIES_NECROZMA,
	SPECIES_NECROZMA_DUSK_MANE,
	SPECIES_NECROZMA_DAWN_WINGS,
	SPECIES_ZERAORA,
	SPECIES_MELTAN,
	SPECIES_MELMETAL,
	SPECIES_TABLES_TERMIN
};

const species_t gGSCup_LegendarySpeciesList[] =
{
	SPECIES_MEWTWO,
	SPECIES_LUGIA,
	SPECIES_HO_OH,
	SPECIES_GROUDON,
	SPECIES_KYOGRE,
	SPECIES_RAYQUAZA,
	SPECIES_DIALGA,
	SPECIES_PALKIA,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_RESHIRAM,
	SPECIES_ZEKROM,
	SPECIES_KYUREM,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_ZYGARDE,
	SPECIES_ZYGARDE_10,
	SPECIES_SOLGALEO,
	SPECIES_LUNALA,
	SPECIES_NECROZMA,
	SPECIES_NECROZMA_DUSK_MANE,
	SPECIES_NECROZMA_DAWN_WINGS,
	SPECIES_TABLES_TERMIN
};

const species_t gSmogonOU_SpeciesBanList[] =
{
	SPECIES_AEGISLASH,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_BLAZIKEN,
	SPECIES_DARKRAI,
	SPECIES_DEOXYS,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_DIALGA,
	SPECIES_GENESECT,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_GROUDON,
	SPECIES_HO_OH,
	SPECIES_KYOGRE,
	SPECIES_KYUREM_WHITE,
	SPECIES_LANDORUS,
	SPECIES_LUGIA,
	SPECIES_LUNALA,
	SPECIES_MARSHADOW,
	SPECIES_MEWTWO,
	SPECIES_NAGANADEL,
	SPECIES_NECROZMA_DUSK_MANE,
	SPECIES_NECROZMA_DAWN_WINGS,
	SPECIES_PALKIA,
	SPECIES_PHEROMOSA,
	SPECIES_RAYQUAZA,
	SPECIES_RESHIRAM,
	SPECIES_SHAYMIN_SKY,
	SPECIES_SOLGALEO,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_ZEKROM,
	SPECIES_ZYGARDE,
	SPECIES_TABLES_TERMIN
};

const species_t gSmogonOUDoubles_SpeciesBanList[] =
{
	SPECIES_SNORLAX,
	SPECIES_MEWTWO,
	SPECIES_LUGIA,
	SPECIES_HO_OH,
	SPECIES_KYOGRE,
	SPECIES_GROUDON,
	SPECIES_RAYQUAZA,
	SPECIES_JIRACHI,
	SPECIES_DIALGA,
	SPECIES_PALKIA,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_RESHIRAM,
	SPECIES_ZEKROM,
	SPECIES_KYUREM_WHITE,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_SOLGALEO,
	SPECIES_LUNALA,
	SPECIES_MAGEARNA,
	SPECIES_MARSHADOW,
	SPECIES_TABLES_TERMIN
};

const ability_t gSmogonOU_AbilityBanList[] =
{
	ABILITY_ARENATRAP,
	ABILITY_SHADOWTAG,
	ABILITY_POWERCONSTRUCT,
	ABILITY_MOODY,
	ABILITY_TABLES_TERMIN
};

const ability_t gSmogonOUDoubles_AbilityBanList[] =
{
	ABILITY_POWERCONSTRUCT,
	ABILITY_MOODY,
	ABILITY_TABLES_TERMIN
};

const item_t gBattleTowerStandard_ItemBanList[] =
{
	#ifdef OLD_SOUL_DEW_EFFECT
	ITEM_SOUL_DEW,
	#endif
	ITEM_TABLES_TERMIN
};

const item_t gSmogonOU_ItemBanList[] =
{
	ITEM_BLAZIKENITE,
	ITEM_GENGARITE,
	ITEM_LUCARIONITE,
	ITEM_KANGASKHANITE,
	ITEM_METAGROSSITE,
	ITEM_SALAMENCITE,
	ITEM_RED_ORB,
	ITEM_BLUE_ORB,
	#ifdef OLD_SOUL_DEW_EFFECT
	ITEM_SOUL_DEW,
	#endif
	ITEM_TABLES_TERMIN
};

const item_t gSmogonOUDoubles_ItemBanList[] =
{
	ITEM_GENGARITE,
	ITEM_EEVIUM_Z,
	ITEM_KANGASKHANITE,
	ITEM_RED_ORB,
	ITEM_BLUE_ORB,
	#ifdef OLD_SOUL_DEW_EFFECT
	ITEM_SOUL_DEW,
	#endif
	ITEM_TABLES_TERMIN
};

const move_t gSmogonOUDoubles_MoveBanList[] =
{
	MOVE_DARKVOID,
	MOVE_SWAGGER,
	MOVE_TABLES_TERMIN
};

const move_t gSmogon_MoveBanList[] =
{
	MOVE_DOUBLETEAM,
	MOVE_MINIMIZE,
	MOVE_FISSURE,
	MOVE_GUILLOTINE,
	MOVE_HORNDRILL,
	MOVE_SHEERCOLD,
	MOVE_TABLES_TERMIN
};

const species_t gSmogonLittleCup_SpeciesList[] =
{
	SPECIES_ABRA,
	SPECIES_AMAURA,
	SPECIES_ANORITH,
	SPECIES_ARCHEN,
	SPECIES_ARON,
	SPECIES_AXEW,
	SPECIES_AZURILL,
	SPECIES_BAGON,
	SPECIES_BALTOY,
	SPECIES_BARBOACH,
	SPECIES_BELDUM,
	SPECIES_BELLSPROUT,
	SPECIES_BERGMITE,
	SPECIES_BIDOOF,
	SPECIES_BINACLE,
	SPECIES_BLITZLE,
	SPECIES_BONSLY,
	SPECIES_BOUNSWEET,
	SPECIES_BRONZOR,
	SPECIES_BUDEW,
	SPECIES_BUIZEL,
	SPECIES_BULBASAUR,
	SPECIES_BUNEARY,
	SPECIES_BUNNELBY,
	SPECIES_BURMY,
	SPECIES_BURMY_SANDY,
	SPECIES_BURMY_TRASH,
	SPECIES_CACNEA,
	SPECIES_CARVANHA,
	SPECIES_CATERPIE,
	SPECIES_CHARMANDER,
	SPECIES_CHERUBI,
	SPECIES_CHESPIN,
	SPECIES_CHIKORITA,
	SPECIES_CHIMCHAR,
	SPECIES_CHINCHOU,
	SPECIES_CHINGLING,
	SPECIES_CLAMPERL,
	SPECIES_CLAUNCHER,
	SPECIES_CLEFFA,
	SPECIES_COMBEE,
	SPECIES_CORPHISH,
	SPECIES_COSMOG,
	SPECIES_COTTONEE,
	SPECIES_CRABRAWLER,
	SPECIES_CRANIDOS,
	SPECIES_CROAGUNK,
	SPECIES_CUBCHOO,
	SPECIES_CUBONE,
	SPECIES_CUBONE_A,
	SPECIES_CYNDAQUIL,
	SPECIES_DARUMAKA,
	SPECIES_DEERLING,
	SPECIES_DEERLING_SUMMER,
	SPECIES_DEERLING_AUTUMN,
	SPECIES_DEERLING_WINTER,
	SPECIES_DEINO,
	SPECIES_DEWPIDER,
	SPECIES_DIGLETT,
	SPECIES_DIGLETT_A,
	SPECIES_DODUO,
	SPECIES_DRATINI,
	SPECIES_DRILBUR,
	SPECIES_DROWZEE,
	SPECIES_DUCKLETT,
	SPECIES_DUSKULL,
	SPECIES_DWEBBLE,
	SPECIES_EEVEE,
	SPECIES_EKANS,
	SPECIES_ELECTRIKE,
	SPECIES_ELEKID,
	SPECIES_ELGYEM,
	SPECIES_ESPURR,
	SPECIES_EXEGGCUTE,
	SPECIES_EXEGGCUTE_A,
	SPECIES_FEEBAS,
	SPECIES_FENNEKIN,
	SPECIES_FERROSEED,
	SPECIES_FINNEON,
	SPECIES_FLABEBE,
	SPECIES_FLABEBE_BLUE,
	SPECIES_FLABEBE_ORANGE,
	SPECIES_FLABEBE_YELLOW,
	SPECIES_FLABEBE_WHITE,
	SPECIES_FLETCHLING,
	SPECIES_FOMANTIS,
	SPECIES_FOONGUS,
	SPECIES_FRILLISH,
	SPECIES_FROAKIE,
	SPECIES_GASTLY,
	SPECIES_GEODUDE,
	SPECIES_GEODUDE_A,
	SPECIES_GIBLE,
	SPECIES_GLAMEOW,
	SPECIES_GOLDEEN,
	SPECIES_GOLETT,
	SPECIES_GOOMY,
	SPECIES_GRIMER,
	SPECIES_GRIMER_A,
	SPECIES_GROWLITHE,
	SPECIES_GRUBBIN,
	SPECIES_GULPIN,
	SPECIES_HAPPINY,
	SPECIES_HELIOPTILE,
	SPECIES_HIPPOPOTAS,
	SPECIES_HONEDGE,
	SPECIES_HOOTHOOT,
	SPECIES_HOPPIP,
	SPECIES_HORSEA,
	SPECIES_HOUNDOUR,
	SPECIES_IGGLYBUFF,
	SPECIES_INKAY,
	SPECIES_JANGMO_O,
	SPECIES_JOLTIK,
	SPECIES_KABUTO,
	SPECIES_KARRABLAST,
	SPECIES_KLINK,
	SPECIES_KOFFING,
	SPECIES_KRABBY,
	SPECIES_KRICKETOT,
	SPECIES_LARVESTA,
	SPECIES_LARVITAR,
	SPECIES_LEDYBA,
	SPECIES_LICKITUNG,
	SPECIES_LILEEP,
	SPECIES_LILLIPUP,
	SPECIES_LITLEO,
	SPECIES_LITTEN,
	SPECIES_LITWICK,
	SPECIES_LOTAD,
	SPECIES_MACHOP,
	SPECIES_MAGBY,
	SPECIES_MAGIKARP,
	SPECIES_MAGNEMITE,
	SPECIES_MAKUHITA,
	SPECIES_MANKEY,
	SPECIES_MANTYKE,
	SPECIES_MAREANIE,
	SPECIES_MAREEP,
	SPECIES_MEOWTH,
	SPECIES_MEOWTH_A,
	SPECIES_MIENFOO,
	SPECIES_MIME_JR,
	SPECIES_MINCCINO,
	SPECIES_MORELULL,
	SPECIES_MUDBRAY,
	SPECIES_MUDKIP,
	SPECIES_MUNCHLAX,
	SPECIES_MUNNA,
	SPECIES_NATU,
	SPECIES_NIDORAN_F,
	SPECIES_NIDORAN_M,
	SPECIES_NINCADA,
	SPECIES_NOIBAT,
	SPECIES_NOSEPASS,
	SPECIES_NUMEL,
	SPECIES_ODDISH,
	SPECIES_OMANYTE,
	SPECIES_ONIX,
	SPECIES_OSHAWOTT,
	SPECIES_PANCHAM,
	SPECIES_PANPOUR,
	SPECIES_PANSAGE,
	SPECIES_PANSEAR,
	SPECIES_PARAS,
	SPECIES_PATRAT,
	SPECIES_PAWNIARD,
	SPECIES_PETILIL,
	SPECIES_PHANPY,
	SPECIES_PHANTUMP,
	SPECIES_PICHU,
	SPECIES_PIDGEY,
	SPECIES_PIDOVE,
	SPECIES_PIKIPEK,
	SPECIES_PINECO,
	SPECIES_PIPLUP,
	SPECIES_POLIWAG,
	SPECIES_PONYTA,
	SPECIES_POOCHYENA,
	SPECIES_POPPLIO,
	SPECIES_PSYDUCK,
	SPECIES_PUMPKABOO,
	SPECIES_PUMPKABOO_XL,
	SPECIES_PUMPKABOO_L,
	SPECIES_PUMPKABOO_M,
	SPECIES_PURRLOIN,
	SPECIES_RALTS,
	SPECIES_RATTATA,
	SPECIES_RATTATA_A,
	SPECIES_REMORAID,
	SPECIES_RHYHORN,
	SPECIES_RIOLU,
	SPECIES_ROCKRUFF,
	SPECIES_ROGGENROLA,
	SPECIES_ROWLET,
	SPECIES_RUFFLET,
	SPECIES_SALANDIT,
	SPECIES_SANDILE,
	SPECIES_SANDSHREW,
	SPECIES_SANDSHREW_A,
	SPECIES_SANDYGAST,
	SPECIES_SCATTERBUG,
	SPECIES_SCRAGGY,
	SPECIES_SEEDOT,
	SPECIES_SEEL,
	SPECIES_SENTRET,
	SPECIES_SEWADDLE,
	SPECIES_SHELLDER,
	SPECIES_SHELLOS,
	SPECIES_SHELLOS_EAST,
	SPECIES_SHELMET,
	SPECIES_SHIELDON,
	SPECIES_SHINX,
	SPECIES_SHROOMISH,
	SPECIES_SHUPPET,
	SPECIES_SKIDDO,
	SPECIES_SKITTY,
	SPECIES_SKORUPI,
	SPECIES_SKRELP,
	SPECIES_SLAKOTH,
	SPECIES_SLOWPOKE,
	SPECIES_SLUGMA,
	SPECIES_SMOOCHUM,
	SPECIES_SNIVY,
	SPECIES_SNORUNT,
	SPECIES_SNOVER,
	SPECIES_SNUBBULL,
	SPECIES_SOLOSIS,
	SPECIES_SPEAROW,
	SPECIES_SPHEAL,
	SPECIES_SPINARAK,
	SPECIES_SPOINK,
	SPECIES_SPRITZEE,
	SPECIES_SQUIRTLE,
	SPECIES_STARLY,
	SPECIES_STARYU,
	SPECIES_STUFFUL,
	SPECIES_STUNKY,
	SPECIES_SUNKERN,
	SPECIES_SURSKIT,
	SPECIES_SWABLU,
	SPECIES_SWINUB,
	SPECIES_TAILLOW,
	SPECIES_TEDDIURSA,
	SPECIES_TENTACOOL,
	SPECIES_TEPIG,
	SPECIES_TIMBURR,
	SPECIES_TIRTOUGA,
	SPECIES_TOGEPI,
	SPECIES_TOTODILE,
	SPECIES_TRAPINCH,
	SPECIES_TREECKO,
	SPECIES_TRUBBISH,
	SPECIES_TURTWIG,
	SPECIES_TYMPOLE,
	SPECIES_TYNAMO,
	SPECIES_TYROGUE,
	SPECIES_TYRUNT,
	SPECIES_VANILLITE,
	SPECIES_VENIPEDE,
	SPECIES_VENONAT,
	SPECIES_VOLTORB,
	SPECIES_VULLABY,
	SPECIES_VULPIX_A,
	SPECIES_WAILMER,
	SPECIES_WEEDLE,
	SPECIES_WHISMUR,
	SPECIES_WIMPOD,
	SPECIES_WINGULL,
	SPECIES_WOOBAT,
	SPECIES_WOOPER,
	SPECIES_WURMPLE,
	SPECIES_WYNAUT,
	SPECIES_YAMASK,
	SPECIES_YUNGOOS,
	SPECIES_ZIGZAGOON,
	SPECIES_ZORUA,
	SPECIES_ZUBAT,
	SPECIES_TABLES_TERMIN
};

const move_t gSmogonLittleCup_MoveBanList[] =
{
	MOVE_DRAGONRAGE,
	MOVE_SONICBOOM,
	MOVE_SWAGGER,
	MOVE_TABLES_TERMIN
};

const item_t gSmogonLittleCup_ItemBanList[] =
{
	ITEM_EEVIUM_Z,
	ITEM_TABLES_TERMIN
};

const species_t gMiddleCup_SpeciesList[] =
{
	SPECIES_IVYSAUR,
	SPECIES_CHARMELEON,
	SPECIES_WARTORTLE,
	SPECIES_METAPOD,
	SPECIES_KAKUNA,
	SPECIES_PIDGEOTTO,
	SPECIES_PIKACHU,
	SPECIES_PIKACHU_SURFING,
	SPECIES_PIKACHU_FLYING,
	SPECIES_PIKACHU_COSPLAY,
	SPECIES_PIKACHU_LIBRE,
	SPECIES_PIKACHU_POP_STAR,
	SPECIES_PIKACHU_ROCK_STAR,
	SPECIES_PIKACHU_BELLE,
	SPECIES_PIKACHU_PHD,
	SPECIES_PIKACHU_CAP_ORIGINAL,
	SPECIES_PIKACHU_CAP_HOENN,
	SPECIES_PIKACHU_CAP_SINNOH,
	SPECIES_PIKACHU_CAP_UNOVA,
	SPECIES_PIKACHU_CAP_KALOS,
	SPECIES_PIKACHU_CAP_ALOLA,
	SPECIES_PIKACHU_CAP_PARTNER,
	SPECIES_NIDORINA,
	SPECIES_NIDORINO,
	SPECIES_CLEFAIRY,
	SPECIES_JIGGLYPUFF,
	SPECIES_GOLBAT,
	SPECIES_GLOOM,
	SPECIES_POLIWHIRL,
//	SPECIES_KADABRA, //Banned
	SPECIES_MACHOKE,
	SPECIES_WEEPINBELL,
	SPECIES_GRAVELER,
	SPECIES_MAGNETON,
	SPECIES_HAUNTER,
	SPECIES_RHYDON,
//	SPECIES_CHANSEY, //Banned
	SPECIES_SEADRA,
	SPECIES_ELECTABUZZ,
	SPECIES_MAGMAR,
	SPECIES_PORYGON2,
	SPECIES_DRAGONAIR,
	SPECIES_BAYLEEF,
	SPECIES_QUILAVA,
	SPECIES_CROCONAW,
	SPECIES_TOGETIC,
	SPECIES_FLAAFFY,
	SPECIES_MARILL,
	SPECIES_SKIPLOOM,
	SPECIES_PILOSWINE,
	SPECIES_PUPITAR,
	SPECIES_GROVYLE,
//	SPECIES_COMBUSKEN, //Banned
	SPECIES_MARSHTOMP,
	SPECIES_SILCOON,
	SPECIES_CASCOON,
	SPECIES_LOMBRE,
	SPECIES_NUZLEAF,
	SPECIES_KIRLIA,
	SPECIES_VIGOROTH,
	SPECIES_LOUDRED,
	SPECIES_LAIRON,
	SPECIES_ROSELIA,
	SPECIES_VIBRAVA,
	SPECIES_DUSCLOPS,
	SPECIES_SEALEO,
	SPECIES_SHELGON,
	SPECIES_METANG,
	SPECIES_GROTLE,
	SPECIES_MONFERNO,
	SPECIES_PRINPLUP,
	SPECIES_STARAVIA,
	SPECIES_LUXIO,
	SPECIES_GABITE,
	SPECIES_SERVINE,
	SPECIES_PIGNITE,
	SPECIES_DEWOTT,
	SPECIES_HERDIER,
	SPECIES_TRANQUILL,
	SPECIES_BOLDORE,
	SPECIES_GURDURR,
	SPECIES_PALPITOAD,
	SPECIES_SWADLOON,
	SPECIES_WHIRLIPEDE,
	SPECIES_KROKOROK,
	SPECIES_GOTHORITA,
	SPECIES_DUOSION,
	SPECIES_VANILLISH,
	SPECIES_KLANG,
	SPECIES_EELEKTRIK,
	SPECIES_LAMPENT,
	SPECIES_FRAXURE,
	SPECIES_ZWEILOUS,
	SPECIES_QUILLADIN,
	SPECIES_BRAIXEN,
	SPECIES_FROGADIER,
	SPECIES_FLETCHINDER,
	SPECIES_SPEWPA,
	SPECIES_FLOETTE,
	SPECIES_FLOETTE_BLUE,
	SPECIES_FLOETTE_ORANGE,
	SPECIES_FLOETTE_YELLOW,
	SPECIES_FLOETTE_WHITE,
	//SPECIES_FLOETTE_ETERNAL, //Doesn't evolve!
	SPECIES_DOUBLADE,
	SPECIES_SLIGGOO,
	SPECIES_DARTRIX,
	SPECIES_TORRACAT,
	SPECIES_BRIONNE,
	SPECIES_TRUMBEAK,
	SPECIES_CHARJABUG,
	SPECIES_STEENEE,
	SPECIES_HAKAMO_O,
	SPECIES_COSMOEM,
	SPECIES_GRAVELER_A,
	SPECIES_TABLES_TERMIN
};

const ability_t gMiddleCup_AbilityBanList[] =
{
	ABILITY_CONTRARY,
	ABILITY_PROTEAN,
	ABILITY_TABLES_TERMIN
};

const species_t gMiddleCup_ItemBanList[] =
{
	ITEM_LIGHT_BALL,
	ITEM_TABLES_TERMIN
};

const species_t gSmogonMonotype_SpeciesBanList[] =
{
	SPECIES_AEGISLASH,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_BLAZIKEN,
	SPECIES_DARKRAI,
	SPECIES_DEOXYS,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DIALGA,
	SPECIES_GENESECT,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_GROUDON,
	SPECIES_HO_OH,
	SPECIES_HOOPA_UNBOUND,
	SPECIES_KARTANA,
	SPECIES_KYOGRE,
	SPECIES_KYUREM_WHITE,
	SPECIES_LUGIA,
	SPECIES_LUNALA,
	SPECIES_MAGEARNA,
	SPECIES_MARSHADOW,
	SPECIES_MEWTWO,
	SPECIES_NAGANADEL,
	SPECIES_NECROZMA_DAWN_WINGS,
	SPECIES_NECROZMA_DUSK_MANE,
	SPECIES_PALKIA,
	SPECIES_PHEROMOSA,
	SPECIES_RAYQUAZA,
	SPECIES_RESHIRAM,
	SPECIES_SHAYMIN_SKY,
	SPECIES_SOLGALEO,
	SPECIES_TAPU_LELE,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_ZEKROM,
	SPECIES_ZYGARDE,
	SPECIES_ZYGARDE_10,
	SPECIES_TABLES_TERMIN
};

const ability_t gSmogonMonotype_AbilityBanList[] =
{
	ABILITY_BATTLEBOND,
	ABILITY_TABLES_TERMIN
};

const item_t gSmogonMonotype_ItemBanList[] =
{
	ITEM_DAMP_ROCK,
	ITEM_GENGARITE,
	ITEM_KANGASKHANITE,
	ITEM_LUCARIONITE,
	ITEM_MAWILITE,
	ITEM_MEDICHAMITE,
	ITEM_METAGROSSITE,
	ITEM_SALAMENCITE,
	ITEM_SMOOTH_ROCK,
	ITEM_TERRAIN_EXTENDER,
	ITEM_RED_ORB,
	ITEM_BLUE_ORB,
	#ifdef OLD_SOUL_DEW_EFFECT
	ITEM_SOUL_DEW,
	#endif
	ITEM_TABLES_TERMIN
};

const species_t gSmogonCamomons_SpeciesBanList[] =
{
	SPECIES_DRAGONITE,
	SPECIES_KARTANA,
	SPECIES_KYUREM_BLACK,
	SPECIES_SHEDINJA,
	SPECIES_TABLES_TERMIN //+ OU Banned Pokemon
};

const species_t gSmogonAverageMons_SpeciesBanList[] =
{
	SPECIES_SMEARGLE,
	SPECIES_TABLES_TERMIN,
};

const item_t gSmogonAverageMons_ItemBanList[] =
{
	ITEM_THICK_CLUB,
	ITEM_DEEP_SEA_TOOTH,
	ITEM_LIGHT_BALL,
	ITEM_EVIOLITE,
	ITEM_MAWILITE,
	ITEM_MEDICHAMITE,
	ITEM_GENGARITE,
	ITEM_TABLES_TERMIN
};

const move_t gSmogonAverageMons_MoveBanList[] =
{
	MOVE_CHATTER,
	MOVE_BATONPASS,
	MOVE_TABLES_TERMIN
};

const u8 gSmogonAverageMons_AbilityBanList[] =
{
	ABILITY_HUGEPOWER,
	ABILITY_PUREPOWER,
	ABILITY_SHADOWTAG,
	ABILITY_ARENATRAP,
	ABILITY_TABLES_TERMIN
};

const species_t gSmogon350Cup_SpeciesBanList[] =
{
	SPECIES_RUFFLET,
	SPECIES_TABLES_TERMIN
};

const item_t gSmogon350Cup_ItemBanList[] =
{
	ITEM_DEEP_SEA_TOOTH,
	ITEM_LIGHT_BALL,
	ITEM_EVIOLITE,
	ITEM_EEVIUM_Z,
	ITEM_TABLES_TERMIN
};

const u8 gSmogon350Cup_AbilityBanList[] =
{
	ABILITY_SHADOWTAG,
	ABILITY_ARENATRAP,
	ABILITY_TABLES_TERMIN
};

const species_t gSmogonScalemons_SpeciesBanList[] =
{
	SPECIES_ABRA,
	SPECIES_CARVANHA,
	SPECIES_GASTLY,
	SPECIES_SHEDINJA,
	SPECIES_TABLES_TERMIN
};

const item_t gSmogonScalemons_ItemBanList[] =
{
	ITEM_DEEP_SEA_SCALE,
	ITEM_DEEP_SEA_TOOTH,
	ITEM_EEVIUM_Z,
	ITEM_EVIOLITE,
	ITEM_LIGHT_BALL,
	ITEM_THICK_CLUB,
	ITEM_MAWILITE,
	ITEM_MEDICHAMITE,
	ITEM_GENGARITE,
	ITEM_TABLES_TERMIN
};

const u8 gSmogonScalemons_AbilityBanList[] =
{
	ABILITY_SHADOWTAG,
	ABILITY_HUGEPOWER,
	ABILITY_ARENATRAP,
	ABILITY_TABLES_TERMIN
};

const species_t gSmogonBenjaminButterfree_SpeciesBanList[] =
{
	SPECIES_BLISSEY,
	SPECIES_TABLES_TERMIN //+ OU Banned Pokemon
};

#ifdef CREATE_WITH_X_PERFECT_IVS
const species_t gSetPerfectXIvList[] =
{
	SPECIES_ARTICUNO,
	SPECIES_ZAPDOS,
	SPECIES_MOLTRES,
	SPECIES_MEWTWO,
	SPECIES_MEW,
	SPECIES_RAIKOU,
	SPECIES_ENTEI,
	SPECIES_SUICUNE,
	SPECIES_LUGIA,
	SPECIES_HO_OH,
	SPECIES_CELEBI,
	SPECIES_REGIROCK,
	SPECIES_REGICE,
	SPECIES_REGISTEEL,
	SPECIES_LATIAS,
	SPECIES_LATIOS,
	SPECIES_KYOGRE,
	SPECIES_KYOGRE_PRIMAL,
	SPECIES_GROUDON,
	SPECIES_GROUDON_PRIMAL,
	SPECIES_RAYQUAZA,
	SPECIES_JIRACHI,
	SPECIES_DEOXYS,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_AZELF,
	SPECIES_MESPRIT,
	SPECIES_UXIE,
	SPECIES_DIALGA,
	SPECIES_DIALGA_PRIMAL,
	SPECIES_PALKIA,
	SPECIES_PALKIA_PRIMAL,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_CRESSELIA,
	SPECIES_HEATRAN,
	SPECIES_REGIGIGAS,
	SPECIES_PHIONE,
	SPECIES_MANAPHY,
	SPECIES_DARKRAI,
	SPECIES_SHAYMIN,
	SPECIES_SHAYMIN_SKY,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_VICTINI,
	SPECIES_COBALION,
	SPECIES_TERRAKION,
	SPECIES_VIRIZION,
	SPECIES_TORNADUS,
	SPECIES_TORNADUS_THERIAN,
	SPECIES_THUNDURUS,
	SPECIES_THUNDURUS_THERIAN,
	SPECIES_LANDORUS,
	SPECIES_LANDORUS_THERIAN,
	SPECIES_RESHIRAM,
	SPECIES_ZEKROM,
	SPECIES_KYUREM,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_KELDEO,
	SPECIES_KELDEO_RESOLUTE,
	SPECIES_MELOETTA,
	SPECIES_MELOETTA_PIROUETTE,
	SPECIES_GENESECT,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_DIANCIE,
	SPECIES_HOOPA,
	SPECIES_HOOPA_UNBOUND,
	SPECIES_VOLCANION,
	SPECIES_ZYGARDE,
	SPECIES_ZYGARDE_10,
	SPECIES_TYPE_NULL,
	SPECIES_SILVALLY,
	SPECIES_TAPU_KOKO,
	SPECIES_TAPU_LELE,
	SPECIES_TAPU_BULU,
	SPECIES_TAPU_FINI,
	SPECIES_COSMOG,
	SPECIES_COSMOEM,
	SPECIES_SOLGALEO,
	SPECIES_LUNALA,
	SPECIES_NIHILEGO,
	SPECIES_BUZZWOLE,
	SPECIES_PHEROMOSA,
	SPECIES_XURKITREE,
	SPECIES_CELESTEELA,
	SPECIES_KARTANA,
	SPECIES_GUZZLORD,
	SPECIES_POIPOLE,
	SPECIES_NAGANADEL,
	SPECIES_STAKATAKA,
	SPECIES_BLACEPHALON,
	SPECIES_MAGEARNA,
	SPECIES_MAGEARNA_P,
	SPECIES_MARSHADOW,
	SPECIES_NECROZMA,
	SPECIES_NECROZMA_DUSK_MANE,
	SPECIES_NECROZMA_DAWN_WINGS,
	SPECIES_ZERAORA,
	SPECIES_MELTAN,
	SPECIES_MELMETAL,
	SPECIES_TABLES_TERMIN
};
#endif

#ifdef POKEMON_RANDOMIZER_FLAG
const species_t gRandomizerSpeciesBanList[] =
{
	0xFC,
	0xFD,
	0xFE,
	0xFF,
	0x100,
	0x101,
	0x102,
	0x103,
	0x104,
	0x105,
	0x106,
	0x107,
	0x108,
	0x109,
	0x10A,
	0x10B,
	0x10C,
	0x10D,
	0x10E,
	0x10F,
	0x110,
	0x111,
	0x112,
	0x113,
	0x114,
	SPECIES_EGG,
	SPECIES_UNOWN_B,
	SPECIES_UNOWN_C,
	SPECIES_UNOWN_D,
	SPECIES_UNOWN_E,
	SPECIES_UNOWN_F,
	SPECIES_UNOWN_G,
	SPECIES_UNOWN_H,
	SPECIES_UNOWN_I,
	SPECIES_UNOWN_J,
	SPECIES_UNOWN_K,
	SPECIES_UNOWN_L,
	SPECIES_UNOWN_M,
	SPECIES_UNOWN_N,
	SPECIES_UNOWN_O,
	SPECIES_UNOWN_P,
	SPECIES_UNOWN_Q,
	SPECIES_UNOWN_R,
	SPECIES_UNOWN_S,
	SPECIES_UNOWN_T,
	SPECIES_UNOWN_U,
	SPECIES_UNOWN_V,
	SPECIES_UNOWN_W,
	SPECIES_UNOWN_X,
	SPECIES_UNOWN_Y,
	SPECIES_UNOWN_Z,
	SPECIES_UNOWN_EXCLAMATION,
	SPECIES_UNOWN_QUESTION,
	SPECIES_UNFEZANT_F,
	SPECIES_FRILLISH_F,
	SPECIES_JELLICENT_F,
	SPECIES_SHADOW_WARRIOR,
	SPECIES_ROTOM_HEAT,
	SPECIES_ROTOM_WASH,
	SPECIES_ROTOM_FROST,
	SPECIES_ROTOM_FAN,
	SPECIES_ROTOM_MOW,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_SHAYMIN_SKY,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_DARMANITANZEN,
	SPECIES_HIPPOPOTAS_F,
	SPECIES_HIPPOWDON_F,
	SPECIES_MELOETTA_PIROUETTE,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_CHERRIM_SUN,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_TORNADUS_THERIAN,
	SPECIES_THUNDURUS_THERIAN,
	SPECIES_LANDORUS_THERIAN,
	SPECIES_KELDEO_RESOLUTE,
	SPECIES_HOOPA_UNBOUND,
	SPECIES_PYROAR_FEMALE,
	SPECIES_MEOWSTIC_FEMALE,
	SPECIES_AEGISLASH_BLADE,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_ZYGARDE_CELL,
	SPECIES_ZYGARDE_CORE,
	SPECIES_ZYGARDE_10,
	SPECIES_ZYGARDE_COMPLETE,
	SPECIES_ASHGRENINJA,
	SPECIES_FURFROU_HEART,
	SPECIES_FURFROU_DIAMOND,
	SPECIES_FURFROU_STAR,
	SPECIES_FURFROU_PHAROAH,
	SPECIES_FURFROU_KABUKI,
	SPECIES_FURFROU_LA_REINE,
	SPECIES_FURFROU_MATRON,
	SPECIES_FURFROU_DANDY,
	SPECIES_FURFROU_DEBUTANTE,
	SPECIES_VENUSAUR_MEGA,
	SPECIES_CHARIZARD_MEGA_X,
	SPECIES_CHARIZARD_MEGA_Y,
	SPECIES_BLASTOISE_MEGA,
	SPECIES_BEEDRILL_MEGA,
	SPECIES_PIDGEOT_MEGA,
	SPECIES_ALAKAZAM_MEGA,
	SPECIES_SLOWBRO_MEGA,
	SPECIES_GENGAR_MEGA,
	SPECIES_KANGASKHAN_MEGA,
	SPECIES_PINSIR_MEGA,
	SPECIES_GYARADOS_MEGA,
	SPECIES_AERODACTYL_MEGA,
	SPECIES_MEWTWO_MEGA_X,
	SPECIES_MEWTWO_MEGA_Y,
	SPECIES_AMPHAROS_MEGA,
	SPECIES_STEELIX_MEGA,
	SPECIES_SCIZOR_MEGA,
	SPECIES_HERACROSS_MEGA,
	SPECIES_HOUNDOOM_MEGA,
	SPECIES_TYRANITAR_MEGA,
	SPECIES_SCEPTILE_MEGA,
	SPECIES_BLAZIKEN_MEGA,
	SPECIES_SWAMPERT_MEGA,
	SPECIES_GARDEVOIR_MEGA,
	SPECIES_SABLEYE_MEGA,
	SPECIES_MAWILE_MEGA,
	SPECIES_AGGRON_MEGA,
	SPECIES_MEDICHAM_MEGA,
	SPECIES_MANECTRIC_MEGA,
	SPECIES_SHARPEDO_MEGA,
	SPECIES_CAMERUPT_MEGA,
	SPECIES_ALTARIA_MEGA,
	SPECIES_BANETTE_MEGA,
	SPECIES_ABSOL_MEGA,
	SPECIES_GLALIE_MEGA,
	SPECIES_SALAMENCE_MEGA,
	SPECIES_METAGROSS_MEGA,
	SPECIES_LATIAS_MEGA,
	SPECIES_LATIOS_MEGA,
	SPECIES_GROUDON_PRIMAL,
	SPECIES_KYOGRE_PRIMAL,
	SPECIES_RAYQUAZA_MEGA,
	SPECIES_LOPUNNY_MEGA,
	SPECIES_GARCHOMP_MEGA,
	SPECIES_LUCARIO_MEGA,
	SPECIES_ABOMASNOW_MEGA,
	SPECIES_GALLADE_MEGA,
	SPECIES_AUDINO_MEGA,
	SPECIES_DIANCIE_MEGA,
	SPECIES_DIALGA_PRIMAL,
	SPECIES_PALKIA_PRIMAL,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_WISHIWASHI_S,
	SPECIES_SILVALLY_FIGHT,
	SPECIES_SILVALLY_FLYING,
	SPECIES_SILVALLY_POISON,
	SPECIES_SILVALLY_GROUND,
	SPECIES_SILVALLY_ROCK,
	SPECIES_SILVALLY_BUG,
	SPECIES_SILVALLY_GHOST,
	SPECIES_SILVALLY_STEEL,
	SPECIES_SILVALLY_FIRE,
	SPECIES_SILVALLY_WATER,
	SPECIES_SILVALLY_GRASS,
	SPECIES_SILVALLY_ELECTRIC,
	SPECIES_SILVALLY_PSYCHIC,
	SPECIES_SILVALLY_ICE,
	SPECIES_SILVALLY_DRAGON,
	SPECIES_SILVALLY_DARK,
	SPECIES_SILVALLY_FAIRY,
	SPECIES_MIMIKYU_BUSTED,
	SPECIES_MAGEARNA_P,
	SPECIES_NECROZMA_DUSK_MANE,
	SPECIES_NECROZMA_DAWN_WINGS,
	SPECIES_NECROZMA_ULTRA,
	SPECIES_PIKACHU_SURFING,
	SPECIES_PIKACHU_FLYING,
	SPECIES_PIKACHU_COSPLAY,
	SPECIES_PIKACHU_LIBRE,
	SPECIES_PIKACHU_POP_STAR,
	SPECIES_PIKACHU_ROCK_STAR,
	SPECIES_PIKACHU_BELLE,
	SPECIES_PIKACHU_PHD,
	SPECIES_PIKACHU_CAP_ORIGINAL,
	SPECIES_PIKACHU_CAP_HOENN,
	SPECIES_PIKACHU_CAP_SINNOH,
	SPECIES_PIKACHU_CAP_UNOVA,
	SPECIES_PIKACHU_CAP_KALOS,
	SPECIES_PIKACHU_CAP_ALOLA,
	SPECIES_PIKACHU_CAP_PARTNER,
	SPECIES_PICHU_SPIKY,
	SPECIES_XERNEAS_NATURAL,
	SPECIES_TABLES_TERMIN
};

#endif

#ifdef ABILITY_RANDOMIZER_FLAG

const ability_t gRandomizerAbilityBanList[] =
{
	ABILITY_CACOPHONY,
	ABILITY_BROKEN_1,
	ABILITY_BROKEN_2,
	ABILITY_TABLES_TERMIN
};

#endif
