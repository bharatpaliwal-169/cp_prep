package basic.string.java;
import java.util.Scanner;

public class StringReversal {

  //using string builder
  public static String reverse1(String input){
    StringBuilder input1 = new StringBuilder();
    input1.append(input);
    input1.reverse();
    String res = input1.toString();
    return res;
  }

  public static String reverse2(String input){
    StringBuffer sb = new StringBuffer(input);
    sb.reverse();
    return sb.toString();
  }
  public static void main(String[] args) {
    String input;
    Scanner scanner = new Scanner(System.in);
    input = scanner.nextLine();
    System.out.println(reverse1(input));
    System.out.println(reverse2(input));
    scanner.close();
  }
}
