package com.courseTwo.patients.model;


import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.UUID;

@Data // make getter and setter
//@Getter if you need only getter
// @Setter if you need only setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
public class Inc {

    private UUID id;
    private String patientName;
    private Integer IncNo;

}
