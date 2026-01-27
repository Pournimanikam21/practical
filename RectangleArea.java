import java.util.Scanner;

public class RectangleArea {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int rollNumber = 10; 
        
        System.out.println("Roll Number: " + rollNumber);

        System.out.print("Enter the length of the rectangle (in metres): ");
        double length = input.nextDouble();

        System.out.print("Enter the breadth of the rectangle (in metres): ");
        double breadth = input.nextDouble();

        double modifiedLength = length * rollNumber;
        double modifiedBreadth = breadth * rollNumber;

        double area = modifiedLength * modifiedBreadth;

        System.out.println("\n--- Results ---");
        System.out.println("Modified Length: " + modifiedLength + " m");
        System.out.println("Modified Breadth: " + modifiedBreadth + " m");
        System.out.println("The Area of the rectangle is: " + area + " sq. m");
        
        input.close();
    }
}
