public class p1{
  public static void main(String[] args) {
   int num = Integer.parseInt(args[0]);
   double harmonic_series;
   System.out.println("Harmonic Series : ");
   for(int i = 1;i <= num;i++){
     harmonic_series = 1.0/i;
     System.out.println(harmonic_series);
   }
  }
 }

