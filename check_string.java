public class p1{
  public static void main(String[] args) {
     String str = args[0];
     String new_str = str.toLowerCase();
     int v_count=0,c_count=0,d_count=0,s_count = 0;
     String vowels = "aeiou";
     String special = "#@!&";

     for (int i = 0; i < new_str.length(); i++) {
        char ch = new_str.charAt(i);
         if(vowels.indexOf(ch) != -1){
            v_count++;
         }
         else if(special.indexOf(ch) != -1){
            s_count++;
         }
         else if(ch >= '0' && ch <= '9'){
            d_count++;
         }else{
            c_count++;
         }
         
        
     }
     System.out.println("vowel : "+v_count);
     System.out.println("special : "+s_count);
     System.out.println("digit : "+d_count);
     System.out.println("constants : "+c_count);
      }
     
  }

