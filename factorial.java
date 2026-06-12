import java.util.Scanner;
class findFact{
    Scanner sc=new Scanner(System.in);
    //for find factorial of given number
    void Factorial(){
        System.out.println("Enter num :");
        int n=sc.nextInt();
        int fact=1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        System.out.println("Num is : "+n);
        System.out.println("Factorial is : "+fact);
}
}
public class p1{
     public static void main(String[] args) {
    findFact obj=new findFact();
    obj.Factorial();
}
}

 // obj.print();
  
