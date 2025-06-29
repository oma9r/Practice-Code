package sample.guitarrickstore;

public enum Wood {
    INDIAN_ROSEWOOD, BRAZILIAN_ROSEWOOD, MAHOGANY, MAPLE, COCOBOLO, CEDAR, ADIRONDACK, ALDER, SITKA,
    NATO, SPRUCE, ROSEWOOD, BASSWOOD, POPLAR;

    public String toString()
    {
        switch(this) {
            case INDIAN_ROSEWOOD: return "Indian Rosewood";
            case BRAZILIAN_ROSEWOOD: return "Brazilian Rosewood";
            case MAHOGANY: return "Mahogany";
            case MAPLE: return "Maple";
            case COCOBOLO: return "Cocobolo";
            case CEDAR: return "Cedar";
            case ADIRONDACK: return "Adirondack";
            case ALDER: return "Alder";
            case SITKA: return "Sitka";
            case NATO: return "Nato";
            case SPRUCE: return "Spruce";
            case ROSEWOOD: return "Rosewood";
            case BASSWOOD: return "Basswood";
            case POPLAR: return "Poplar";
            default: return "unknown";
        }
    }
}
