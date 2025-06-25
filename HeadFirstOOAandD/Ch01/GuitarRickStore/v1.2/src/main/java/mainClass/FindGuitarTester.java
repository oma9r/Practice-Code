package mainClass;


import sample.guitarrickstore.*;

import java.util.List;

import static mainClass.checkerClass.checker;

public class FindGuitarTester
{
    public static void main(String [] args )
    {
        Inventory inventory = new Inventory();

        initializeInventoryClass.initializeInventory(inventory);

        GuitarSpec whatErinLikes = new GuitarSpec( Builder.FENDER,"Stratocaster", Type.ELECTRIC, Wood.ALDER,Wood.ALDER);

        List matchingGuitar = inventory.search(whatErinLikes);

        checkerClass.checker(matchingGuitar);

    };








}
