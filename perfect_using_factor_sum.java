public class p1{
  public static void main(String[] args) {
      int num = Integer.parseInt(args[0]);
      int factor = 0;
      int sum = 0;
      System.out.println("Factor : ");
      for(int i = 1 ;i<num;i++){
        if(num % i == 0){
          factor = i;
          System.out.println(factor);
          sum += factor;
        }
      }

      System.out.println("sum : "+sum);
      System.out.println("num : "+num);
    if(sum == num){
      System.out.println("Num is perfect");
    }else{
      System.out.println("Num is not perfect");
    }
  }
}
