public class p1{
  public static void main(String[] args){
   String str = "abcdbcba";
   boolean ans = checkStr(str);
   System.out.println("String is palindrome : "+ans);
  }
  static boolean checkStr(String str){
     for(int i = 0; i < str.length() /2 ; i++) {
       int start = i;
       int end = str.length() - 1 - i;
       if(str.charAt(start) != str.charAt(end)){//one matching pair not decide that whole string is palindrome but one mismatch tells string is not palindrome so that's why we write false statement 1st
         return false;
       }else{
          start++;
           end--;
       }
    }
    return true;
   }
  
}
