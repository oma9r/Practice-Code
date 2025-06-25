package sample.guitarrickstore;

public enum Builder
{
    FENDER, MARTIN, GIBSON, COLLINGS, OLSON, RYAN, PRS, ANY,
    YAMAHA, TAYLOR, IBANEZ, EPIPHONE, GRETSCH, DONNER;

    public String toString() {
        switch(this) {
            case FENDER: return "Fender";
            case MARTIN: return "Martin";
            case GIBSON: return "Gibson";
            case COLLINGS: return "Collings";
            case OLSON: return "Olson";
            case RYAN: return "Ryan";
            case PRS: return "Prs";
            case ANY: return "Any";
            case YAMAHA: return "Yamaha";
            case TAYLOR: return "Taylor";
            case IBANEZ: return "Ibanez";
            case EPIPHONE: return "Epiphone";
            case GRETSCH: return "Gretsch";
            case DONNER: return "Donner";
            default: return "unknown";
        }
    }
}

