package mainClass;

import sample.guitarrickstore.Builder;
import sample.guitarrickstore.Inventory;
import sample.guitarrickstore.Type;
import sample.guitarrickstore.Wood;

public class initializeInventoryClass
{
    public static void initializeInventory(Inventory inventory)
    {
        inventory.addGuitar("SN123456", 1299.99, Builder.FENDER, "Stratocaster", Type.ELECTRIC, Wood.ALDER, Wood.MAPLE);
        inventory.addGuitar("SN654321", 899.50, Builder.GIBSON, "Les Paul", Type.ELECTRIC, Wood.MAHOGANY, Wood.MAPLE);
        inventory.addGuitar("SN112233", 599.00, Builder.YAMAHA, "FG800", Type.ACOUSTIC, Wood.NATO, Wood.SPRUCE); // Need to add YAMAHA and NATO, SPRUCE in enums
        inventory.addGuitar("SN445566", 1499.99, Builder.TAYLOR, "814ce", Type.ACOUSTIC, Wood.ROSEWOOD, Wood.SPRUCE); // Same: Add TAYLOR and ROSEWOOD
        inventory.addGuitar("SN778899", 749.25, Builder.IBANEZ, "RG550", Type.ELECTRIC, Wood.BASSWOOD, Wood.MAPLE); // Add IBANEZ and BASSWOOD
        inventory.addGuitar("SN998877", 319.99, Builder.EPIPHONE, "Hummingbird", Type.ACOUSTIC, Wood.MAHOGANY, Wood.SPRUCE); // Add EPIPHONE
        inventory.addGuitar("SN332211", 2599.00, Builder.PRS, "Custom 24", Type.ELECTRIC, Wood.MAHOGANY, Wood.MAPLE);
        inventory.addGuitar("SN667788", 1150.75, Builder.MARTIN, "D-28", Type.ACOUSTIC, Wood.ROSEWOOD, Wood.SPRUCE);
        inventory.addGuitar("SN110022", 699.95, Builder.GRETSCH, "G2622", Type.ELECTRIC, Wood.MAPLE, Wood.MAPLE); // Add GRETSCH
        inventory.addGuitar("SN554433", 129.00, Builder.DONNER, "DST-100", Type.ELECTRIC, Wood.POPLAR, Wood.MAPLE); // Add DONNER and POPLAR
        inventory.addGuitar("SN202500", 999.99, Builder.FENDER, "Stratocaster", Type.ELECTRIC, Wood.ALDER, Wood.ALDER);
        inventory.addGuitar("V95693", 1499.95, Builder.FENDER,"Stratocastor", Type.ELECTRIC, Wood.ALDER, Wood.ALDER);
        inventory.addGuitar("V9512", 1549.95, Builder.FENDER,"Stratocastor", Type.ELECTRIC, Wood.ALDER, Wood.ALDER);
    }

}
