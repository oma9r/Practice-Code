package mainClass;

import sample.guitarrickstore.Inventory;

public class initializeInventoryClass
{
    public static void initializeInventory(Inventory inventory)
    {
        inventory.addGuitar("SN123456", 1299.99, "Fender", "Stratocaster", "Electric", "Alder", "Maple");
        inventory.addGuitar("SN654321", 899.50, "Gibson", "Les Paul", "Electric", "Mahogany", "Maple");
        inventory.addGuitar("SN112233", 599.00, "Yamaha", "FG800", "Acoustic", "Nato", "Spruce");
        inventory.addGuitar("SN445566", 1499.99, "Taylor", "814ce", "Acoustic", "Rosewood", "Spruce");
        inventory.addGuitar("SN778899", 749.25, "Ibanez", "RG550", "Electric", "Basswood", "Maple");
        inventory.addGuitar("SN998877", 319.99, "Epiphone", "Hummingbird", "Acoustic", "Mahogany", "Spruce");
        inventory.addGuitar("SN332211", 2599.00, "PRS", "Custom 24", "Electric", "Mahogany", "Maple");
        inventory.addGuitar("SN667788", 1150.75, "Martin", "D-28", "Acoustic", "Rosewood", "Spruce");
        inventory.addGuitar("SN110022", 699.95, "Gretsch", "G2622", "Electric", "Maple", "Maple");
        inventory.addGuitar("SN554433", 129.00, "Donner", "DST-100", "Electric", "Poplar", "Maple");
        inventory.addGuitar("SN202500", 999.99, "fender", "Stratocaster", "electric", "Alder", "Alder");


    }
}
