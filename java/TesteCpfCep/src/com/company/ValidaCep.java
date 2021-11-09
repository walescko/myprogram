package com.company;

import java.util.Objects;

public class ValidaCep {

    private String cep;

    public ValidaCep(String cep) {
        this.cep = cep;
    }

    public static void verificaCepForma(String cep) {
        String cepTeste = cep;
        String separador = "-";
        if (cepTeste.split("-").length == 2 && (cepTeste.length() == 9) && Objects.equals(separador.charAt(0), cep.charAt(5))) {//
        ValidaCep.isDigito(cepTeste);


        } else {
            throw new CepInvalidoException();

        }
    }

    private static void isDigito(String cepTeste) {
        String cepDigitos = cepTeste;
        for (int i = 0; i < cepDigitos.length() - 4; i++) {
            boolean teste = true;
            if (!Character.isDigit(cepDigitos.charAt(i))) {
                teste = false;
                throw new CepInvalidoException();
            }
        }
        for (int i = 6; i < cepDigitos.length(); i++) {
            boolean teste = true;
            if (!Character.isDigit(cepDigitos.charAt(i))) {
                teste = false;
                throw new CepInvalidoException();
            }


        }
    }
}
