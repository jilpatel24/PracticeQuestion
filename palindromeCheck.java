import java.util.Scanner;
class palindromeNum{
    Scanner sc=new Scanner(System.in);
    
    void checkNum(){
        System.out.print("Enter Num :");
        int num=sc.nextInt();
        int pow=1;
        int rem=0;
        int ogNum=num;
        int rev=0;

      System.out.println("Num is : "+num);
        while (num > 0) {
           rem = num % 10;
           rev = rev*10 + rem;
           num /= 10;   
    
        }
       System.out.println("After reverse : "+rev);
       if(ogNum == rev){
        System.out.println("Num is palindrome");
       }
       else{
        System.out.println("Num is not palindrome");
       }      
}
}
public class p1{
     public static void main(String[] args) {
     palindromeNum obj=new palindromeNum();
    obj.checkNum();
}
}

  
