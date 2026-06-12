import java.util.Scanner;
class primeNum{
    Scanner sc=new Scanner(System.in);
    
    void checkPrime(){
        System.out.print("Enter Num :");
        int num=sc.nextInt();
        boolean isPrime = true;

        if(num <= 1){
         isPrime = false;
        }  
        for (int i = 2; i < num; i++) {
           if(num % i == 0){
            isPrime = false;
            break;
           } 
        }
        System.out.println("Num : "+num);
        if(isPrime){
            System.out.println("Num is Prime");
        }else{
            System.out.println("Num is not Prime");
        } 
}
}
public class p1{
     public static void main(String[] args) {
     primeNum obj=new primeNum();
    obj.checkPrime();
}
}

  
