package basic.string.java;

import java.util.Scanner;

public class isPal {
  
  public static boolean isPalStr(String s){
    int start = 0, end = s.length() - 1 ;
    while(start <= end){
      if(s.charAt(start) != s.charAt(end)){
        return false;
      }
      start++;end--;
    }
    return true;
  }
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String input  = scanner.nextLine();
    System.out.println(isPalStr(input));
    scanner.close();
  }
}
