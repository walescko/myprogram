package com.company;

import java.util.Objects;
import java.util.Scanner;

public class TestaCpfCep {

    public static void main(String[] args) {
	// write your code here
        Scanner scan = new Scanner(System.in);
        System.out.print("Entre com o CPF: ");
        String cpf = scan.next();
        ValidaCpf.verificaCpfForma(cpf);
        System.out.println("\n uhhulll" + cpf);

//        System.out.print("Entre com o CEP: ");
//        String cep = scan.next();
//        System.out.println(cep.charAt(5));
//        ValidaCep.verificaCepForma(cep);

    }
}
