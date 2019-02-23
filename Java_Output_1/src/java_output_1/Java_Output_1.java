/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_output_1;

/**
 *
 * @author Elkay
 */
public class Java_Output_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int i = 0, j = 9; 
        do { 
            i++; 
            if (j-- < i++) { 
                break; 
            } 
        } while (i < 5); 
          System.out.println(i + "" + j); 
    }
    
}
