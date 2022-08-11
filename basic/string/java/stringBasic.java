package basic.string.java;
public class stringBasic{
  public static void basic() {
    
    // char ch = 'A';
    // System.out.println(ch);
    
    // char xyz = 'Z' + 32;
    // int abc = 'Z' + 32;
    // System.out.println(xyz); // z
    // System.out.println(abc); // 122
    
    // char x = 'A';
    // for(int i=0;i<26;i++){
    //   // char res = x + i;
    //   // not work in java as in java string are immutable.
    // }

    String s = "this is a string";
    String s1 = new String("this is another new string");
    System.out.println(s +" " +s1);
    
  }

  public static void main(String[] args) {
    System.out.println("Running String basics");
    basic();
  }
}