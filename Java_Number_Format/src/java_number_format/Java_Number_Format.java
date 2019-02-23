/*
 There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we'll learn how to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after decimal point.
Note: You may use System.out.format()

Input Format:
First line of input conatins number of testcases T. For each testcase, there will be one line of input containing a and b separated by a space.

Output Format:
For each testcase, print the required output in a new line.

User Task: 
Your task is to complete the provided function printInFormat().

Constraints:
1 <= T <= 10
1 <= a, b,<= 100

Input:
1
5.43 2.653

Output:
2.04674 2.047
 */
package java_number_format;

import java.io.*;
import java.util.*;
/**
 *
 * @author Elkay
 */
public class Java_Number_Format {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        	Scanner sc = new Scanner(System.in);
		int testcases = sc.nextInt();
		
		while(testcases-- > 0){
    		float a = sc.nextFloat();
    		float b = sc.nextFloat();
    		
    		Geeks g = new Geeks();
    		g.printInFormat(a, b);
		
		}
    }
    
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for Java
class Geeks{
    
    static void printInFormat(float a, float b){
        float result = a/b;
        
      
        System.out.print(result+" ");
        System.out.format("%.3f\n", result);
        // Your code here to print upto 3 decimal places
        
    }    
    
}