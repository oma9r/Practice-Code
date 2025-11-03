package com.courseTwo.patients.controller;

import com.courseTwo.patients.model.Inc;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.UUID;

@RestController
@RequestMapping("/inc")
public class IncController {

    @GetMapping("/getPatientInc")
    public Inc getPatientInc(){
//
//        Inc c = new Inc();
//        c.setId(UUID.randomUUID());
//        c.setIncNo(12300);
//        c.setPatientName("Omar Abumazen");
//


        return Inc.builder()
                .IncNo(12300)
                .patientName("Omar Abumazen")
                .id(UUID.randomUUID())
                .build();

//
//        Inc c = Inc.builder()
//                .IncNo(12300)
//                .patientName("Omar Abumazen")
//                .id(UUID.randomUUID())
//                .build();
//
//
//        return c;
    }

}
