package basic.string.java;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Duplicate {

  public static boolean isDup1(String s){
    Map<Character,Integer> map = new HashMap<Character,Integer>();
    for(int i=0;i<s.length();i++){
      if(map.containsKey(s.charAt(i))){ //checks if it already present in map.
        map.put(s.charAt(i),map.get(s.charAt(i))+1);
      }
      else{
        map.put(s.charAt(i),1);
      }
    }

    for(int i=0;i<s.length();i++){
      if(map.get(s.charAt(i))>1){
        return false;
      }
    }
    return true;
  }


  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String input = scanner.nextLine();
    System.out.println(isDup1(input));
    scanner.close();
  }
}
