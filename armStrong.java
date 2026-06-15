import java.util.Scanner;
class p1{
    Scanner sc=new Scanner(System.in);
        void checkArmstrong(){
           System.out.println("Enter num");
           int num = sc.nextInt();
           int ogNum=num;
           int getNum=0;
           int cube=0;
           int sum=0;

           System.out.println("Num is : "+num);
           while(num > 0){
           getNum = num % 10;
           cube =(int)Math.pow(getNum,3);
           System.out.println("Cube is : "+cube);
           sum += cube;
           num /= 10;
           }

           System.out.println("Sum of Number : "+sum);
           if(sum == ogNum){
           System.out.println("Num is armstrong");
           }
           else{
            System.out.println("Num is not armstrong");
           }
           
        }
    public static void main(String[] args) {
        p1 obj = new p1();
        obj.checkArmstrong();
    }
}
  
