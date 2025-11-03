package com.courseTwo.patients.model;

import org.springframework.stereotype.Component;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

@Component
public class PatientModel {

    List<String> names = new ArrayList<>();

    List<Patient> patients = new ArrayList<>();

    PatientModel() {
        names.add("Abd");
        names.add("Ahmad");
        names.add("Khaled");
        names.add("Murad");

        patients.add(new Patient("Ahmad",24));
        patients.add(new Patient("Khaled",29));
        patients.add(new Patient("Murad",32));
    }




    public List<String> getNames(){

        return names;

    };

    public List<Patient> getPatients() {
        return patients;
    }


}
