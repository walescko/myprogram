package com.company;

public class CepInvalidoException extends RuntimeException {
    public CepInvalidoException() {
        System.out.println("Formato de CEP Inválido");
    }
}
