package com.courseTwo.patients.controller;


import com.courseTwo.patients.model.Patient;
import com.courseTwo.patients.service.PatientService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/patients")
public class PatientController {

    @Autowired
    private PatientService patientService;   // bean


    @GetMapping("/print-name")
    public ResponseEntity printPatientName(@RequestParam String name,@RequestParam("a") Integer age) {
        return ResponseEntity.ok(patientService.printName(name,age));
    }

    @GetMapping("/get-patients")
    public ResponseEntity getPatients(){
        return ResponseEntity.ok(patientService.getPatients());
    }

    @PostMapping("/save")
    public ResponseEntity savePatient(@RequestBody Patient patient){
        return ResponseEntity.ok(patient);
    }



}
