package com.courseTwo.patients.service;

import com.courseTwo.patients.model.Patient;
import com.courseTwo.patients.model.PatientModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;


@Service
public class PatientService {

    @Autowired
    private PatientModel patientModel;

    public Patient printName(String name, Integer age){

      return patientModel.getPatients()
              .stream()
              .filter(i-> {
                  return i.getName().equals(name) || i.getAge().equals(age);
              } )
              .findAny()
              .orElse(new Patient()) ;
        //String n = patientModel.getPatientsList().stream().filter(p -> p.getName().equals(name)).findFirst().get().getName();
      //Patient p = new Patient();
      //p.setName(n.toUpperCase());
      //return p;


    }

    public List<Patient> getPatients() {

        ArrayList<Patient> list = new ArrayList<>();
        patientModel.getNames().forEach(name -> list.add(new Patient(name)));
        return list;
    }

}
