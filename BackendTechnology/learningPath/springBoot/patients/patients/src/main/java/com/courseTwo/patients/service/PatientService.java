package com.courseTwo.patients.service;

import org.springframework.stereotype.Service;

import java.util.Locale;

@Service
public class PatientService {

    public String printName(String name){
        return name.toUpperCase();
    }

}
