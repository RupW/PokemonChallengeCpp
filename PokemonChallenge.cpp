#include "stdafx.h"

const char* const pokemonNames[] = {
    "abomasnow", "abomasnow-mega", "abra", "absol", "absol-mega", "accelgor", "aegislash",
    "aegislash-blade", "aerodactyl", "aerodactyl-mega", "aggron", "aggron-mega", "aipom",
    "alakazam", "alakazam-mega", "alomomola", "altaria", "amaura", "ambipom", "amoonguss",
    "ampharos", "ampharos-mega", "anorith", "arbok", "arcanine", "arceus", "archen", "archeops",
    "ariados", "armaldo", "aromatisse", "aron", "articuno", "audino", "aurorus", "avalugg", "axew",
    "azelf", "azumarill", "azurill", "bagon", "baltoy", "banette", "banette-mega", "barbaracle",
    "barboach", "basculin-blue-striped", "basculin-red-striped", "bastiodon", "bayleef", "beartic",
    "beautifly", "beedrill", "beheeyem", "beldum", "bellossom", "bellsprout", "bergmite",
    "bibarel", "bidoof", "binacle", "bisharp", "blastoise", "blastoise-mega", "blaziken",
    "blaziken-mega", "blissey", "blitzle", "boldore", "bonsly", "bouffalant", "braixen",
    "braviary", "breloom", "bronzong", "bronzor", "budew", "buizel", "bulbasaur", "buneary",
    "bunnelby", "burmy", "butterfree", "cacnea", "cacturne", "camerupt", "carbink", "carnivine",
    "carracosta", "carvanha", "cascoon", "castform", "castform-rainy", "castform-snowy",
    "castform-sunny", "caterpie", "celebi", "chandelure", "chansey", "charizard",
    "charizard-mega-x", "charizard-mega-y", "charmander", "charmeleon", "chatot", "cherrim",
    "cherubi", "chesnaught", "chespin", "chikorita", "chimchar", "chimecho", "chinchou",
    "chingling", "cinccino", "clamperl", "clauncher", "clawitzer", "claydol", "clefable",
    "clefairy", "cleffa", "cloyster", "cobalion", "cofagrigus", "combee", "combusken",
    "conkeldurr", "corphish", "corsola", "cottonee", "cradily", "cranidos", "crawdaunt",
    "cresselia", "croagunk", "crobat", "croconaw", "crustle", "cryogonal", "cubchoo", "cubone",
    "cyndaquil", "darkrai", "darmanitan-standard", "darmanitan-zen", "darumaka", "dedenne",
    "deerling", "deino", "delcatty", "delibird", "delphox", "deoxys-attack", "deoxys-defense",
    "deoxys-normal", "deoxys-speed", "dewgong", "dewott", "dialga", "diggersby", "diglett",
    "ditto", "dodrio", "doduo", "donphan", "doublade", "dragalge", "dragonair", "dragonite",
    "drapion", "dratini", "drifblim", "drifloon", "drilbur", "drowzee", "druddigon", "ducklett",
    "dugtrio", "dunsparce", "duosion", "durant", "dusclops", "dusknoir", "duskull", "dustox",
    "dwebble", "eelektrik", "eelektross", "eevee", "ekans", "electabuzz", "electivire",
    "electrike", "electrode", "elekid", "elgyem", "emboar", "emolga", "empoleon", "entei",
    "escavalier", "espeon", "espurr", "excadrill", "exeggcute", "exeggutor", "exploud",
    "farfetchd", "fearow", "feebas", "fennekin", "feraligatr", "ferroseed", "ferrothorn",
    "finneon", "flaaffy", "flabebe", "flareon", "fletchinder", "fletchling", "floatzel",
    "floette", "florges", "flygon", "foongus", "forretress", "fraxure", "frillish", "froakie",
    "frogadier", "froslass", "furfrou", "furret", "gabite", "gallade", "galvantula", "garbodor",
    "garchomp", "garchomp-mega", "gardevoir", "gardevoir-mega", "gastly", "gastrodon", "genesect",
    "gengar", "gengar-mega", "geodude", "gible", "gigalith", "girafarig", "giratina-altered",
    "giratina-origin", "glaceon", "glalie", "glameow", "gligar", "gliscor", "gloom", "gogoat",
    "golbat", "goldeen", "golduck", "golem", "golett", "golurk", "goodra", "goomy", "gorebyss",
    "gothita", "gothitelle", "gothorita", "gourgeist-average", "gourgeist-large",
    "gourgeist-small", "gourgeist-super", "granbull", "graveler", "greninja", "grimer", "grotle",
    "groudon", "grovyle", "growlithe", "grumpig", "gulpin", "gurdurr", "gyarados", "gyarados-mega",
    "happiny", "hariyama", "haunter", "hawlucha", "haxorus", "heatmor", "heatran", "heliolisk",
    "helioptile", "heracross", "heracross-mega", "herdier", "hippopotas", "hippowdon",
    "hitmonchan", "hitmonlee", "hitmontop", "ho-oh", "honchkrow", "honedge", "hoothoot", "hoppip",
    "horsea", "houndoom", "houndoom-mega", "houndour", "huntail", "hydreigon", "hypno",
    "igglybuff", "illumise", "infernape", "inkay", "ivysaur", "jellicent", "jigglypuff", "jirachi",
    "jolteon", "joltik", "jumpluff", "jynx", "kabuto", "kabutops", "kadabra", "kakuna",
    "kangaskhan", "kangaskhan-mega", "karrablast", "kecleon", "keldeo-ordinary", "keldeo-resolute",
    "kingdra", "kingler", "kirlia", "klang", "klefki", "klink", "klinklang", "koffing", "krabby",
    "kricketot", "kricketune", "krokorok", "krookodile", "kyogre", "kyurem", "kyurem-black",
    "kyurem-white", "lairon", "lampent", "landorus-incarnate", "landorus-therian", "lanturn",
    "lapras", "larvesta", "larvitar", "latias", "latios", "leafeon", "leavanny", "ledian",
    "ledyba", "lickilicky", "lickitung", "liepard", "lileep", "lilligant", "lillipup", "linoone",
    "litleo", "litwick", "lombre", "lopunny", "lotad", "loudred", "lucario", "lucario-mega",
    "ludicolo", "lugia", "lumineon", "lunatone", "luvdisc", "luxio", "luxray", "machamp",
    "machoke", "machop", "magby", "magcargo", "magikarp", "magmar", "magmortar", "magnemite",
    "magneton", "magnezone", "makuhita", "malamar", "mamoswine", "manaphy", "mandibuzz",
    "manectric", "manectric-mega", "mankey", "mantine", "mantyke", "maractus", "mareep", "marill",
    "marowak", "marshtomp", "masquerain", "mawile", "mawile-mega", "medicham", "medicham-mega",
    "meditite", "meganium", "meloetta-aria", "meloetta-pirouette", "meowstic-female",
    "meowstic-male", "meowth", "mesprit", "metagross", "metang", "metapod", "mew", "mewtwo",
    "mewtwo-mega-x", "mewtwo-mega-y", "mienfoo", "mienshao", "mightyena", "milotic", "miltank",
    "mime-jr", "minccino", "minun", "misdreavus", "mismagius", "moltres", "monferno", "mothim",
    "mr-mime", "mudkip", "muk", "munchlax", "munna", "murkrow", "musharna", "natu", "nidoking",
    "nidoqueen", "nidoran-f", "nidoran-m", "nidorina", "nidorino", "nincada", "ninetales",
    "ninjask", "noctowl", "noibat", "noivern", "nosepass", "numel", "nuzleaf", "octillery",
    "oddish", "omanyte", "omastar", "onix", "oshawott", "pachirisu", "palkia", "palpitoad",
    "pancham", "pangoro", "panpour", "pansage", "pansear", "paras", "parasect", "patrat",
    "pawniard", "pelipper", "persian", "petilil", "phanpy", "phantump", "phione", "pichu",
    "pidgeot", "pidgeotto", "pidgey", "pidove", "pignite", "pikachu", "piloswine", "pineco",
    "pinsir", "pinsir-mega", "piplup", "plusle", "politoed", "poliwag", "poliwhirl", "poliwrath",
    "ponyta", "poochyena", "porygon", "porygon-z", "porygon2", "primeape", "prinplup", "probopass",
    "psyduck", "pumpkaboo-average", "pumpkaboo-large", "pumpkaboo-small", "pumpkaboo-super",
    "pupitar", "purrloin", "purugly", "pyroar", "quagsire", "quilava", "quilladin", "qwilfish",
    "raichu", "raikou", "ralts", "rampardos", "rapidash", "raticate", "rattata", "rayquaza",
    "regice", "regigigas", "regirock", "registeel", "relicanth", "remoraid", "reshiram",
    "reuniclus", "rhydon", "rhyhorn", "rhyperior", "riolu", "roggenrola", "roselia", "roserade",
    "rotom", "rotom-fan", "rotom-frost", "rotom-heat", "rotom-mow", "rotom-wash", "rufflet",
    "sableye", "salamence", "samurott", "sandile", "sandshrew", "sandslash", "sawk", "sawsbuck",
    "scatterbug", "sceptile", "scizor", "scizor-mega", "scolipede", "scrafty", "scraggy",
    "scyther", "seadra", "seaking", "sealeo", "seedot", "seel", "seismitoad", "sentret",
    "serperior", "servine", "seviper", "sewaddle", "sharpedo", "shaymin-land", "shaymin-sky",
    "shedinja", "shelgon", "shellder", "shellos", "shelmet", "shieldon", "shiftry", "shinx",
    "shroomish", "shuckle", "shuppet", "sigilyph", "silcoon", "simipour", "simisage", "simisear",
    "skarmory", "skiddo", "skiploom", "skitty", "skorupi", "skrelp", "skuntank", "slaking",
    "slakoth", "sliggoo", "slowbro", "slowking", "slowpoke", "slugma", "slurpuff", "smeargle",
    "smoochum", "sneasel", "snivy", "snorlax", "snorunt", "snover", "snubbull", "solosis",
    "solrock", "spearow", "spewpa", "spheal", "spinarak", "spinda", "spiritomb", "spoink",
    "spritzee", "squirtle", "stantler", "staraptor", "staravia", "starly", "starmie", "staryu",
    "steelix", "stoutland", "stunfisk", "stunky", "sudowoodo", "suicune", "sunflora", "sunkern",
    "surskit", "swablu", "swadloon", "swalot", "swampert", "swanna", "swellow", "swinub",
    "swirlix", "swoobat", "sylveon", "taillow", "talonflame", "tangela", "tangrowth", "tauros",
    "teddiursa", "tentacool", "tentacruel", "tepig", "terrakion", "throh", "thundurus-incarnate",
    "thundurus-therian", "timburr", "tirtouga", "togekiss", "togepi", "togetic", "torchic",
    "torkoal", "tornadus-incarnate", "tornadus-therian", "torterra", "totodile", "toxicroak",
    "tranquill", "trapinch", "treecko", "trevenant", "tropius", "trubbish", "turtwig", "tympole",
    "tynamo", "typhlosion", "tyranitar", "tyranitar-mega", "tyrantrum", "tyrogue", "tyrunt",
    "umbreon", "unfezant", "unown", "ursaring", "uxie", "vanillish", "vanillite", "vanilluxe",
    "vaporeon", "venipede", "venomoth", "venonat", "venusaur", "venusaur-mega", "vespiquen",
    "vibrava", "victini", "victreebel", "vigoroth", "vileplume", "virizion", "vivillon",
    "volbeat", "volcarona", "voltorb", "vullaby", "vulpix", "wailmer", "wailord", "walrein",
    "wartortle", "watchog", "weavile", "weedle", "weepinbell", "weezing", "whimsicott",
    "whirlipede", "whiscash", "whismur", "wigglytuff", "wingull", "wobbuffet", "woobat",
    "wooper", "wormadam-plant", "wormadam-sandy", "wormadam-trash", "wurmple", "wynaut", "xatu",
    "xerneas", "yamask", "yanma", "yanmega", "yveltal", "zangoose", "zapdos", "zebstrika",
    "zekrom", "zigzagoon", "zoroark", "zorua", "zubat", "zweilous", "zygarde"
};

class Pokemon {

public:
    Pokemon(const char* pokemonName) : name(pokemonName), length(name.length()), bits(buildLetterBits(pokemonName)) {}

    const std::string name;
    const int length;
    const uint32_t bits;

private:
    static uint32_t buildLetterBits(const char* pokemonName) {
        uint32_t b = 0;
        for(const char* p = pokemonName; *p != 0; ++p) {
            if ((*p >= 'a') && (*p <= 'z')) {
                b |= 1 << (*p - 'a');
            }
        }
        return b;
    }
};

//qq these ought not be global
int sortedLetters[26];
int hasBitCount[26];
Pokemon** hasBit[26];

Pokemon* solution[26];
Pokemon* best[26];
Pokemon* equiv[10][26];
int bestDepth;
int bestCount;
int bestLength;
int bestEquiv;
int maxDepth;
const uint32_t allBits = (1 << 26) - 1;

// The main recursive search function.
void search(int depth, uint32_t bits, int currentLength, int firstLetter) {
    for (int l = firstLetter; l < 26; ++l) {
        int sl = sortedLetters[l];
        uint32_t letterBit = 1 << sl;
        if ((bits & letterBit) == 0) {
            for (int p = 0; p < hasBitCount[sl]; ++p) {
                Pokemon* pok = hasBit[sl][p];
                uint32_t newBits = bits | pok->bits;
                if (newBits != bits) {
                    int newLength = currentLength + pok->length;
                    if (newBits == allBits) {
                        // solved!
                        solution[depth] = pok;
                        if (((depth < bestDepth) || ((depth == bestDepth) && (newLength < bestLength)))) {
                            bestDepth = depth;
                            bestLength = newLength;
                            bestEquiv = 0;
                            memcpy(best, solution, 26 * sizeof(Pokemon*));
                        }
                        else if ((depth == bestDepth) && (newLength == bestLength) && (bestEquiv < 10)) {
                            memcpy(equiv[bestEquiv], solution, 26 * sizeof(Pokemon*));
                            ++bestEquiv;
                        }
                        solution[depth] = NULL;
                    }
                    else if ((depth + 1) < maxDepth) {
                        if (((depth < bestDepth) || ((depth == bestDepth) && (newLength < bestLength)))) {
                            solution[depth] = pok;
                            search(depth + 1, newBits, newLength, l + 1);
                            solution[depth] = NULL;
                        }
                        else {
                            // not an improvement
                            // no more Pokemon at this letter will be shorter => fail
                            return; //qq
                        }
                    }
                }
                // else pokemon didn't add anything
            }
            
            // If we get here, we failed to find a solution for this bit
            return;
        }
        // else already have this letter
    }
}

// qsort comparator function for a list of integer indexes into the hasBitCount array; order for
// lowest hasBitCount first.
int compareBitCount(const void* p1, const void* p2) {
    int n1 = *((const int*)p1);
    int n2 = *((const int*)p2);
    return hasBitCount[n1] - hasBitCount[n2];
}

// qsort comparator function for Pokemon structures; order so that the shortest names come first.
int comparePokemonLengths(const void* p1, const void* p2) {
    Pokemon* q1 = *((Pokemon**)p1);
    Pokemon* q2 = *((Pokemon**)p2);
    return q1->length - q2->length;
}

int _tmain(int argc, _TCHAR* argv[])
{
    // Start the clock!
    clock_t startTime = clock();

    // Generate Pokemon data strucutres for each Pokemon we have.
    // These contain the name, the length of its name and a bitmask representing the letters in
    // the name.
    int count = sizeof(pokemonNames) / sizeof(pokemonNames[0]);
    Pokemon** pokemon = new Pokemon*[count];

    for (int i = 0; i < count; ++i) {
        pokemon[i] = new Pokemon(pokemonNames[i]);
    }

    // For each letter, build up a list of Pokemon that contain that letter.
    for (int i = 0; i < 26; ++i) {
        hasBit[i] = new Pokemon*[count];
        sortedLetters[i] = i;
    }
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < 26; ++j) {
            if ((pokemon[i]->bits & (1 << j)) != 0) {
                hasBit[j][hasBitCount[j]] = pokemon[i];
                ++hasBitCount[j];
            }
        }
    }

    // Sort the Pokemon within each per-letter list so that the shortest names come first.
    for (int i = 0; i < 26; ++i) {
        qsort(&(hasBit[i][0]), hasBitCount[i], sizeof(Pokemon*), comparePokemonLengths);
    }

    // Sort the letters so that the letters with fewest Pokemon come first.
    qsort(sortedLetters, 26, sizeof(int), compareBitCount);

    // Breadth-first search by gradually increasing our maximum search depth until we find a
    // solution. The depth number here is 0-based and inclusive; we set bestDepth out-of-bounds
    // large so that the first real solution is considered better than it.
    maxDepth = 0;
    bestDepth = 26;
    while (bestDepth > maxDepth) {
        ++maxDepth;
        search(0, 0, 0, 0);
    }

    // Print the solution (assuming that there is one)
    printf("%d %d : ", bestDepth + 1, bestLength);
    for (int q = 0; q <= bestDepth; ++q) {
        printf("%s ", best[q]->name.c_str());
    }
    printf("\n");

    // Print any alternative solutions collected.
    for (int e = 0; e < bestEquiv; ++e) {
        printf("%d %d : ", bestDepth + 1, bestLength);
        for (int q = 0; q <= bestDepth; ++q) {
            printf("%s ", equiv[e][q]->name.c_str());
        }
        printf("\n");
    }

    // Stop the clock!
    clock_t endTime = clock();
    double elapsedTime = (((double)1000) * (endTime - startTime)) / (double)CLOCKS_PER_SEC;
    printf("Took %g ms\n", elapsedTime);
}
