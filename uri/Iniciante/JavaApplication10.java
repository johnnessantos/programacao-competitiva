/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication10;

/**
 *
 * @author Johnnes - Lavi
 */
import java.util.Scanner;
public class JavaApplication10 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        float a,b,c;
        
        String resp;
        double s;
        Scanner read = new Scanner(System.in);
        a = read.nextFloat();
        b = read.nextFloat();
        c = read.nextFloat();
        s = a*c/2;
        System.out.printf("TRIANGULO: %.3f\n",s);
        s = c*c*3.14159;
        System.out.printf("CIRCULO: %.3f\n",s);
        s = (a + b)*c/2;
        System.out.printf("TRAPEZIO: %.3f\n",s);
        s = b*b;
        System.out.printf("QUADRADO: %.3f\n",s);
        s = (a * b);
        System.out.printf("RETANGULO: %.3f\n",s);
    }
    
}
