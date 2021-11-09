package com.company;

import java.util.Objects;

public class ValidaCpf {

    private String cpf;

    public static void verificaCpfForma(String cpf) {
        String cpfTeste = cpf;
        if (cpfTeste.length() == 11) {
            boolean isNumeric = true;
            for (int i = 0; i < cpfTeste.length(); i++) {
                if (!Character.isDigit(cpfTeste.charAt(i))) {
                    isNumeric = false;
                    if (isNumeric == false) {
                        throw new CpfInvalidoException();
                    }
                }
            }
            System.out.println(cpfTeste);
        } else {
            throw new CpfInvalidoException();
        }
    }
}
