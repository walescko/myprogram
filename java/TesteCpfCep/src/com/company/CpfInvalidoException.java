package com.company;

public class CpfInvalidoException extends RuntimeException {
    public CpfInvalidoException(){
        System.out.print("Formato do CPF Inválido.");
    }
}
