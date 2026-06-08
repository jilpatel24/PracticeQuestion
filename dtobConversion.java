class p1{
    public static void main(String[] args) {
      int dNum=42;
      int ans=0;
      int pow=1;
      int rem=0;

     while(dNum > 0){
      rem = dNum % 2;
      dNum = dNum / 2;
      ans += (rem*pow);
      pow*=10;
   
     }
System.out.println("Binary :"+ans);
    }
 }

