package com.courseTwo.patients.controller;


import com.courseTwo.patients.service.PatientService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/patients")
public class PatientController {

    @Autowired
    private PatientService patientService;   // bean


    @GetMapping("/print-name")
    public String printPatientName(){
        return this.patientService.printName("Omar Abu");
    }


}
