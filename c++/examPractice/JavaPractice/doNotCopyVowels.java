import java.io.*;
public class doNotCopyVowels{
    public static void main(String args[]) throws IOException{
        FileInputStream fis = new FileInputStream("hello1.txt");
        FileOutputStream fos = new FileOutputStream("hello2.txt");
        int x;
        while((x = fis.read()) != -1){
            char ch = (char)x;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                continue;
            }
            else fos.write(x);
        }
        System.out.println("file modified successfully");
        fos.close();
        fis.close();
    }
}
