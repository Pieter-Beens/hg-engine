#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 100

const char *monlist[] = 
{
    "SPECIES_NONE",
    "SPECIES_BULBASAUR",
    "SPECIES_IVYSAUR",
    "SPECIES_VENUSAUR",
    "SPECIES_CHARMANDER",
    "SPECIES_CHARMELEON",
    "SPECIES_CHARIZARD",
    "SPECIES_SQUIRTLE",
    "SPECIES_WARTORTLE",
    "SPECIES_BLASTOISE",
    "SPECIES_CATERPIE",
    "SPECIES_METAPOD",
    "SPECIES_BUTTERFREE",
    "SPECIES_WEEDLE",
    "SPECIES_KAKUNA",
    "SPECIES_BEEDRILL",
    "SPECIES_PIDGEY",
    "SPECIES_PIDGEOTTO",
    "SPECIES_PIDGEOT",
    "SPECIES_RATTATA",
    "SPECIES_RATICATE",
    "SPECIES_SPEAROW",
    "SPECIES_FEAROW",
    "SPECIES_EKANS",
    "SPECIES_ARBOK",
    "SPECIES_PIKACHU",
    "SPECIES_RAICHU",
    "SPECIES_SANDSHREW",
    "SPECIES_SANDSLASH",
    "SPECIES_NIDORAN_F",
    "SPECIES_NIDORINA",
    "SPECIES_NIDOQUEEN",
    "SPECIES_NIDORAN_M",
    "SPECIES_NIDORINO",
    "SPECIES_NIDOKING",
    "SPECIES_CLEFAIRY",
    "SPECIES_CLEFABLE",
    "SPECIES_VULPIX",
    "SPECIES_NINETALES",
    "SPECIES_JIGGLYPUFF",
    "SPECIES_WIGGLYTUFF",
    "SPECIES_ZUBAT",
    "SPECIES_GOLBAT",
    "SPECIES_ODDISH",
    "SPECIES_GLOOM",
    "SPECIES_VILEPLUME",
    "SPECIES_PARAS",
    "SPECIES_PARASECT",
    "SPECIES_VENONAT",
    "SPECIES_VENOMOTH",
    "SPECIES_DIGLETT",
    "SPECIES_DUGTRIO",
    "SPECIES_MEOWTH",
    "SPECIES_PERSIAN",
    "SPECIES_PSYDUCK",
    "SPECIES_GOLDUCK",
    "SPECIES_MANKEY",
    "SPECIES_PRIMEAPE",
    "SPECIES_GROWLITHE",
    "SPECIES_ARCANINE",
    "SPECIES_POLIWAG",
    "SPECIES_POLIWHIRL",
    "SPECIES_POLIWRATH",
    "SPECIES_ABRA",
    "SPECIES_KADABRA",
    "SPECIES_ALAKAZAM",
    "SPECIES_MACHOP",
    "SPECIES_MACHOKE",
    "SPECIES_MACHAMP",
    "SPECIES_BELLSPROUT",
    "SPECIES_WEEPINBELL",
    "SPECIES_VICTREEBEL",
    "SPECIES_TENTACOOL",
    "SPECIES_TENTACRUEL",
    "SPECIES_GEODUDE",
    "SPECIES_GRAVELER",
    "SPECIES_GOLEM",
    "SPECIES_PONYTA",
    "SPECIES_RAPIDASH",
    "SPECIES_SLOWPOKE",
    "SPECIES_SLOWBRO",
    "SPECIES_MAGNEMITE",
    "SPECIES_MAGNETON",
    "SPECIES_FARFETCHD",
    "SPECIES_DODUO",
    "SPECIES_DODRIO",
    "SPECIES_SEEL",
    "SPECIES_DEWGONG",
    "SPECIES_GRIMER",
    "SPECIES_MUK",
    "SPECIES_SHELLDER",
    "SPECIES_CLOYSTER",
    "SPECIES_GASTLY",
    "SPECIES_HAUNTER",
    "SPECIES_GENGAR",
    "SPECIES_ONIX",
    "SPECIES_DROWZEE",
    "SPECIES_HYPNO",
    "SPECIES_KRABBY",
    "SPECIES_KINGLER",
    "SPECIES_VOLTORB",
    "SPECIES_ELECTRODE",
    "SPECIES_EXEGGCUTE",
    "SPECIES_EXEGGUTOR",
    "SPECIES_CUBONE",
    "SPECIES_MAROWAK",
    "SPECIES_HITMONLEE",
    "SPECIES_HITMONCHAN",
    "SPECIES_LICKITUNG",
    "SPECIES_KOFFING",
    "SPECIES_WEEZING",
    "SPECIES_RHYHORN",
    "SPECIES_RHYDON",
    "SPECIES_CHANSEY",
    "SPECIES_TANGELA",
    "SPECIES_KANGASKHAN",
    "SPECIES_HORSEA",
    "SPECIES_SEADRA",
    "SPECIES_GOLDEEN",
    "SPECIES_SEAKING",
    "SPECIES_STARYU",
    "SPECIES_STARMIE",
    "SPECIES_MR_MIME",
    "SPECIES_SCYTHER",
    "SPECIES_JYNX",
    "SPECIES_ELECTABUZZ",
    "SPECIES_MAGMAR",
    "SPECIES_PINSIR",
    "SPECIES_TAUROS",
    "SPECIES_MAGIKARP",
    "SPECIES_GYARADOS",
    "SPECIES_LAPRAS",
    "SPECIES_DITTO",
    "SPECIES_EEVEE",
    "SPECIES_VAPOREON",
    "SPECIES_JOLTEON",
    "SPECIES_FLAREON",
    "SPECIES_PORYGON",
    "SPECIES_OMANYTE",
    "SPECIES_OMASTAR",
    "SPECIES_KABUTO",
    "SPECIES_KABUTOPS",
    "SPECIES_AERODACTYL",
    "SPECIES_SNORLAX",
    "SPECIES_ARTICUNO",
    "SPECIES_ZAPDOS",
    "SPECIES_MOLTRES",
    "SPECIES_DRATINI",
    "SPECIES_DRAGONAIR",
    "SPECIES_KARPONITE",
    "SPECIES_MEWTWO",
    "SPECIES_MEW",
    "SPECIES_CHIKORITA",
    "SPECIES_BAYLEEF",
    "SPECIES_MEGANIUM",
    "SPECIES_CYNDAQUIL",
    "SPECIES_QUILAVA",
    "SPECIES_TYPHLOSION",
    "SPECIES_TOTODILE",
    "SPECIES_CROCONAW",
    "SPECIES_FERALIGATR",
    "SPECIES_SENTRET",
    "SPECIES_FURRET",
    "SPECIES_HOOTHOOT",
    "SPECIES_NOCTOWL",
    "SPECIES_LEDYBA",
    "SPECIES_LEDIAN",
    "SPECIES_SPINARAK",
    "SPECIES_ARIADOS",
    "SPECIES_CROBAT",
    "SPECIES_CHINCHOU",
    "SPECIES_LANTURN",
    "SPECIES_PICHU",
    "SPECIES_CLEFFA",
    "SPECIES_IGGLYBUFF",
    "SPECIES_TOGEPI",
    "SPECIES_TOGETIC",
    "SPECIES_NATU",
    "SPECIES_XATU",
    "SPECIES_MAREEP",
    "SPECIES_FLAAFFY",
    "SPECIES_AMPHAROS",
    "SPECIES_BELLOSSOM",
    "SPECIES_MARILL",
    "SPECIES_AZUMARILL",
    "SPECIES_SUDOWOODO",
    "SPECIES_POLITOED",
    "SPECIES_HOPPIP",
    "SPECIES_SKIPLOOM",
    "SPECIES_JUMPLUFF",
    "SPECIES_AIPOM",
    "SPECIES_SUNKERN",
    "SPECIES_SUNFLORA",
    "SPECIES_YANMA",
    "SPECIES_WOOPER",
    "SPECIES_QUAGSIRE",
    "SPECIES_ESPEON",
    "SPECIES_UMBREON",
    "SPECIES_MURKROW",
    "SPECIES_SLOWKING",
    "SPECIES_MISDREAVUS",
    "SPECIES_UNOWN",
    "SPECIES_WOBBUFFET",
    "SPECIES_GIRAFARIG",
    "SPECIES_PINECO",
    "SPECIES_FORRETRESS",
    "SPECIES_DUNSPARCE",
    "SPECIES_GLIGAR",
    "SPECIES_STEELIX",
    "SPECIES_SNUBBULL",
    "SPECIES_GRANBULL",
    "SPECIES_QWILFISH",
    "SPECIES_SCIZOR",
    "SPECIES_SHUCKLE",
    "SPECIES_HERACROSS",
    "SPECIES_SNEASEL",
    "SPECIES_TEDDIURSA",
    "SPECIES_URSARING",
    "SPECIES_SLUGMA",
    "SPECIES_MAGCARGO",
    "SPECIES_SWINUB",
    "SPECIES_PILOSWINE",
    "SPECIES_CORSOLA",
    "SPECIES_REMORAID",
    "SPECIES_OCTILLERY",
    "SPECIES_DELIBIRD",
    "SPECIES_MANTINE",
    "SPECIES_SKARMORY",
    "SPECIES_HOUNDOUR",
    "SPECIES_HOUNDOOM",
    "SPECIES_KINGDRA",
    "SPECIES_PHANPY",
    "SPECIES_DONPHAN",
    "SPECIES_PORYGON2",
    "SPECIES_STANTLER",
    "SPECIES_SMEARGLE",
    "SPECIES_TYROGUE",
    "SPECIES_HITMONTOP",
    "SPECIES_SMOOCHUM",
    "SPECIES_ELEKID",
    "SPECIES_MAGBY",
    "SPECIES_MILTANK",
    "SPECIES_BLISSEY",
    "SPECIES_RAIKOU",
    "SPECIES_ENTEI",
    "SPECIES_SUICUNE",
    "SPECIES_LARVITAR",
    "SPECIES_PUPITAR",
    "SPECIES_TYRANITAR",
    "SPECIES_LUGIA",
    "SPECIES_HO_OH",
    "SPECIES_CELEBI",
    "SPECIES_TREECKO",
    "SPECIES_GROVYLE",
    "SPECIES_SCEPTILE",
    "SPECIES_TORCHIC",
    "SPECIES_COMBUSKEN",
    "SPECIES_BLAZIKEN",
    "SPECIES_MUDKIP",
    "SPECIES_MARSHTOMP",
    "SPECIES_SWAMPERT",
    "SPECIES_POOCHYENA",
    "SPECIES_MIGHTYENA",
    "SPECIES_ZIGZAGOON",
    "SPECIES_LINOONE",
    "SPECIES_WURMPIE",
    "SPECIES_SILCOON",
    "SPECIES_BEAUTIFLY",
    "SPECIES_CASCOON",
    "SPECIES_DUSTOX",
    "SPECIES_LOTAD",
    "SPECIES_LOMBRE",
    "SPECIES_LUDICOLO",
    "SPECIES_SEEDOT",
    "SPECIES_NUZLEAF",
    "SPECIES_SHIFTRY",
    "SPECIES_TAILLOW",
    "SPECIES_SWELLOW",
    "SPECIES_WINGULL",
    "SPECIES_PELIPPER",
    "SPECIES_RALTS",
    "SPECIES_KIRLIA",
    "SPECIES_GARDEVOIR",
    "SPECIES_SURSKIT",
    "SPECIES_MASQUERAIN",
    "SPECIES_SHROOMISH",
    "SPECIES_BRELOOM",
    "SPECIES_SLAKOTH",
    "SPECIES_VIGOROTH",
    "SPECIES_SLAKING",
    "SPECIES_NINCADA",
    "SPECIES_NINJASK",
    "SPECIES_SHEDINJA",
    "SPECIES_WHISMUR",
    "SPECIES_LOUDRED",
    "SPECIES_EXPLOUD",
    "SPECIES_MAKUHITA",
    "SPECIES_HARIYAMA",
    "SPECIES_AZURILL",
    "SPECIES_NOSEPASS",
    "SPECIES_SKITTY",
    "SPECIES_DELCATTY",
    "SPECIES_SABLEYE",
    "SPECIES_MAWILE",
    "SPECIES_ARON",
    "SPECIES_LAIRON",
    "SPECIES_AGGRON",
    "SPECIES_MEDITITE",
    "SPECIES_MEDICHAM",
    "SPECIES_ELECTRIKE",
    "SPECIES_MANECTRIC",
    "SPECIES_PLUSLE",
    "SPECIES_MINUN",
    "SPECIES_VOLBEAT",
    "SPECIES_ILLUMISE",
    "SPECIES_ROSELIA",
    "SPECIES_GULPIN",
    "SPECIES_SWALOT",
    "SPECIES_CARVANHA",
    "SPECIES_SHARPEDO",
    "SPECIES_WAILMER",
    "SPECIES_WAILORD",
    "SPECIES_NUMEL",
    "SPECIES_CAMERUPT",
    "SPECIES_TORKOAL",
    "SPECIES_SPOINK",
    "SPECIES_GRUMPIG",
    "SPECIES_SPINDA",
    "SPECIES_TRAPINCH",
    "SPECIES_VIBRAVA",
    "SPECIES_FLYGON",
    "SPECIES_CACNEA",
    "SPECIES_CACTURNE",
    "SPECIES_SWABLU",
    "SPECIES_ALTARIA",
    "SPECIES_ZANGOOSE",
    "SPECIES_SEVIPER",
    "SPECIES_LUNATONE",
    "SPECIES_SOLROCK",
    "SPECIES_BARBOACH",
    "SPECIES_WHISCASH",
    "SPECIES_CORPHISH",
    "SPECIES_CRAWDAUNT",
    "SPECIES_BALTOY",
    "SPECIES_CLAYDOL",
    "SPECIES_LILEEP",
    "SPECIES_CRADILY",
    "SPECIES_ANORITH",
    "SPECIES_ARMALDO",
    "SPECIES_FEEBAS",
    "SPECIES_MILOTIC",
    "SPECIES_CASTFORM",
    "SPECIES_KECLEON",
    "SPECIES_SHUPPET",
    "SPECIES_BANETTE",
    "SPECIES_DUSKULL",
    "SPECIES_DUSCLOPS",
    "SPECIES_TROPIUS",
    "SPECIES_CHIMECHO",
    "SPECIES_ABSOL",
    "SPECIES_WYNAUT",
    "SPECIES_SNORUNT",
    "SPECIES_GLALIE",
    "SPECIES_SPHEAL",
    "SPECIES_SEALEO",
    "SPECIES_WALREIN",
    "SPECIES_CLAMPERL",
    "SPECIES_HUNTAIL",
    "SPECIES_GOREBYSS",
    "SPECIES_RELICANTH",
    "SPECIES_LUVDISC",
    "SPECIES_BAGON",
    "SPECIES_SHELGON",
    "SPECIES_SALAMENCE",
    "SPECIES_BELDUM",
    "SPECIES_METANG",
    "SPECIES_METAGROSS",
    "SPECIES_REGIROCK",
    "SPECIES_REGICE",
    "SPECIES_REGISTEEL",
    "SPECIES_LATIAS",
    "SPECIES_LATIOS",
    "SPECIES_KYOGRE",
    "SPECIES_GROUDON",
    "SPECIES_RAYQUAZA",
    "SPECIES_JIRACHI",
    "SPECIES_DEOXYS",
    "SPECIES_TURTWIG",
    "SPECIES_GROTLE",
    "SPECIES_TORTERRA",
    "SPECIES_CHIMCHAR",
    "SPECIES_MONFERNO",
    "SPECIES_INFERNAPE",
    "SPECIES_PIPLUP",
    "SPECIES_PRINPLUP",
    "SPECIES_EMPOLEON",
    "SPECIES_STARLY",
    "SPECIES_STARAVIA",
    "SPECIES_STARAPTOR",
    "SPECIES_BIDOOF",
    "SPECIES_BIBAREL",
    "SPECIES_KRICKETOT",
    "SPECIES_KRICKETUNE",
    "SPECIES_SHINX",
    "SPECIES_LUXIO",
    "SPECIES_LUXRAY",
    "SPECIES_BUDEW",
    "SPECIES_ROSERADE",
    "SPECIES_CRANIDOS",
    "SPECIES_RAMPARDOS",
    "SPECIES_SHIELDON",
    "SPECIES_BASTIODON",
    "SPECIES_BURMY",
    "SPECIES_WORMADAM",
    "SPECIES_MOTHIM",
    "SPECIES_COMBEE",
    "SPECIES_VESPIQUEN",
    "SPECIES_PACHIRISU",
    "SPECIES_BUIZEL",
    "SPECIES_FLOATZEL",
    "SPECIES_CHERUBI",
    "SPECIES_CHERRIM",
    "SPECIES_SHELLOS",
    "SPECIES_GASTRODON",
    "SPECIES_AMBIPOM",
    "SPECIES_DRIFLOON",
    "SPECIES_DRIFBLIM",
    "SPECIES_BUNEARY",
    "SPECIES_LOPUNNY",
    "SPECIES_MISMAGIUS",
    "SPECIES_HONCHKROW",
    "SPECIES_GLAMEOW",
    "SPECIES_PURUGLY",
    "SPECIES_CHINGLING",
    "SPECIES_STUNKY",
    "SPECIES_SKUNTANK",
    "SPECIES_BRONZOR",
    "SPECIES_BRONZONG",
    "SPECIES_BONSLY",
    "SPECIES_MIMEJR",
    "SPECIES_HAPPINY",
    "SPECIES_CHATOT",
    "SPECIES_SPIRITOMB",
    "SPECIES_GIBLE",
    "SPECIES_GABITE",
    "SPECIES_GARCHOMP",
    "SPECIES_MUNCHLAX",
    "SPECIES_RIOLU",
    "SPECIES_LUCARIO",
    "SPECIES_HIPPOPOTAS",
    "SPECIES_HIPPOWDON",
    "SPECIES_SKORUPI",
    "SPECIES_DRAPION",
    "SPECIES_CROAGUNK",
    "SPECIES_TOXICROAK",
    "SPECIES_CARNIVINE",
    "SPECIES_FINNEON",
    "SPECIES_LUMINEON",
    "SPECIES_MANTYKE",
    "SPECIES_SNOVER",
    "SPECIES_ABOMASNOW",
    "SPECIES_WEAVILE",
    "SPECIES_MAGNEZONE",
    "SPECIES_LICKILICKY",
    "SPECIES_RHYPERIOR",
    "SPECIES_TANGROWTH",
    "SPECIES_ELECTIVIRE",
    "SPECIES_MAGMORTAR",
    "SPECIES_TOGEKISS",
    "SPECIES_YANMEGA",
    "SPECIES_LEAFEON",
    "SPECIES_GLACEON",
    "SPECIES_GLISCOR",
    "SPECIES_MAMOSWINE",
    "SPECIES_PORYGON_Z",
    "SPECIES_GALLADE",
    "SPECIES_PROBOPASS",
    "SPECIES_DUSKNOIR",
    "SPECIES_FROSLASS",
    "SPECIES_ROTOM",
    "SPECIES_UXIE",
    "SPECIES_MESPRIT",
    "SPECIES_AZELF",
    "SPECIES_DIALGA",
    "SPECIES_PALKIA",
    "SPECIES_HEATRAN",
    "SPECIES_REGIGIGAS",
    "SPECIES_GIRATINA",
    "SPECIES_CRESSELIA",
    "SPECIES_PHIONE",
    "SPECIES_MANAPHY",
    "SPECIES_DARKRAI",
    "SPECIES_SHAYMIN",
    "SPECIES_ARCEUS",
};

int main(int argc, char **argv)
{
    int filenum = 0, elementnum, i, minlevel, maxlevel;
    FILE *entry;
    char filename[25], textfromfile[BUFF_SIZE];

    if (argc != 1) // the simple error handling part
    {
        fprintf(stderr, "This generates mon encounter files from a decompressed narc a037.\n");
        return 1;
    }

    printf(".nds\n.thumb\n\n.include \"armips/include/macros.s\"\n.include \"armips/include/monnums.s\"\n\n\n");

_workaround:

    printf("encounterdata %3d\n\n", filenum);

    sprintf(filename, "7_%03d", filenum);

    entry = fopen(filename, "rb");

    if (!entry)
    {
        fprintf(stderr, "error");
        return 1;
    }

    // walking encounter rate
    elementnum = fgetc(entry);
    printf("walkrate %d\n", elementnum);
    // surf encounter rate
    elementnum = fgetc(entry);
    printf("surfrate %d\n", elementnum);
    // rock smash encounter rate
    elementnum = fgetc(entry);
    printf("rocksmashrate %d\n", elementnum);
    // old rod encounter rate
    elementnum = fgetc(entry);
    printf("oldrodrate %d\n", elementnum);
    // good rod encounter rate
    elementnum = fgetc(entry);
    printf("goodrodrate %d\n", elementnum);
    // super rod encounter rate
    elementnum = fgetc(entry);
    printf("superrodrate %d\n", elementnum);

    // padding
    elementnum = fgetc(entry);
    elementnum = fgetc(entry);

    // walking levels
    elementnum = fgetc(entry);
    printf("walklevels %d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d, ", elementnum);
    elementnum = fgetc(entry);
    printf("%d\n\n", elementnum);
    
    // morning mons
    printf("// morning encounter slots\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n\n", monlist[elementnum]);
    
    // day mons
    printf("// day encounter slots\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n\n", monlist[elementnum]);
    
    // night mons
    printf("// night encounter slots\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n\n", monlist[elementnum]);
    
    // hoenn mons
    printf("// hoenn encounter slots\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n\n", monlist[elementnum]);
    
    // sinnoh mons
    printf("// sinnoh encounter slots\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n\n", monlist[elementnum]);
    
    // surf mons
    printf("// surf encounters\n");
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n\n", monlist[elementnum], minlevel, maxlevel);

    // rock smash mons
    printf("// rock smash encounters\n");
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n\n", monlist[elementnum], minlevel, maxlevel);
    
    // old rod mons
    printf("// old rod encounters\n");
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n\n", monlist[elementnum], minlevel, maxlevel);
    
    // good rod mons
    printf("// good rod encounters\n");
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n\n", monlist[elementnum], minlevel, maxlevel);
    
    // super rod mons
    printf("// super rod encounters\n");
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n", monlist[elementnum], minlevel, maxlevel);
    minlevel = fgetc(entry);
    maxlevel = fgetc(entry);
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("encounter %s, %d, %d\n\n", monlist[elementnum], minlevel, maxlevel);
    
    // swarm mons
    printf("// swarm grass\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    printf("// swarm surf\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    printf("// swarm good rod\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n", monlist[elementnum]);
    printf("// swarm super rod\n");
    elementnum = fgetc(entry);
    elementnum |= (fgetc(entry) << 8);
    printf("pokemon %s\n\n.close\n\n\n", monlist[elementnum]);

    fclose(entry);

    if (filenum < 141)
    {
        filenum++;
        goto _workaround;
    }

    return 0;
}
