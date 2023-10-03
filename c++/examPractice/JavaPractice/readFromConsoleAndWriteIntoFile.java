import java.io.*;
// import java.util.*;
public class readFromConsoleAndWriteIntoFile{
    public static void main(String args[]) throws IOException{
        // String s;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("enter the string : ");
        // s = sc.nextLine();
        // FileOutputStream fos = new FileOutputStream("hello1.txt");
        // byte[] b = s.getBytes();
        // fos.write(b);
        // fos.close();
        FileInputStream fis = new FileInputStream("hello1.txt");
        int x;
        while((x = fis.read()) != -1){
            System.out.print((char)x);
        }
        fis.close();
    }
}
