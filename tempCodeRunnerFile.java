// write a program using java to print roots of quadratic equation
// first 10 prime numbers 
import java.util.Scanner;
class roots{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the equation's a, b, and c parameters as per ax2+bx+c");
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double discriminant = (b*b)-(4*a*c);
        discriminant = Math.sqrt(discriminant);
        double x = (-b + discriminant)/(2*a);
        double y = (-b - discriminant)/(2*a);
        System.out.println("Roots are "+x + " and  "+y);
    }
}