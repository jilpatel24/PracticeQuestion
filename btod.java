class p1{
    public static void main(String[] args) {
      int BinaryNum=111;
      int ans=0;
      int pow=1;
      int rem=0;

     while(BinaryNum > 0){
      rem = BinaryNum % 10;
      BinaryNum /= 10;
      ans += (rem*pow);
      pow*=2;
   
     }
System.out.println("Binary :"+ans);
    }
 }

