package com.courseTwo.patients;

import com.courseTwo.patients.controller.PatientController;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;



@SpringBootApplication
public class PatientsApplication {

	public static void main(String[] args) {

		SpringApplication.run(PatientsApplication.class, args);
//		String name = "Omar";
//
//		PatientController patientController = new PatientController();
//		patientController.setPatientName(name);
//		System.out.println(patientController.getPatientName());
	}

}
