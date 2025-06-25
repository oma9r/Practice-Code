package mainClass;


import sample.guitarrickstore.Guitar;
import sample.guitarrickstore.Inventory;

import static mainClass.checkerClass.checker;

public class FindGuitarTester
{
    public static void main(String [] args )
    {
        Inventory inventory = new Inventory();

        initializeInventoryClass.initializeInventory(inventory);

        Guitar whatErinLikes = new Guitar("",0,"Fender","Stratocaster","electric","Alder","Alder");

        Guitar guitar = inventory.search(whatErinLikes);

        checkerClass.checker(guitar);

    };








}
