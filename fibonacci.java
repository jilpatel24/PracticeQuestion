
class fibonacci{
    
    //print fibonacci
    void  printFibonacci(){
        int a=0;
        int b=1;
        int c=0;
         System.out.println("Fibonacci series :");
        System.out.println(a);
        System.out.println(b);
        for (int i = 1; i < 10; i++) {
            c=a+b;
            System.out.println(c);
            a=b;
            b=c;
        }
       
}
}
public class p1{
     public static void main(String[] args) {
    fibonacci obj=new fibonacci();
    obj.printFibonacci();
}
}

 // obj.print();
  
