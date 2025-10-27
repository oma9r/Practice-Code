package com.example.teddy.controllers;

import com.example.teddy.models.*;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/api/")
public class PokemonController {

    @GetMapping("pokemon")

    public ResponseEntity<List<Pokemon>> getPokemons() {

        ArrayList<Pokemon> pockemonList = new ArrayList<>();

        Pokemon p1 = new Pokemon(1,"name1","type1");

        pockemonList.add(p1);






    }
}
