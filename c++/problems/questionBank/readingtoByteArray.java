import java.io.*;
public class readingtoByteArray {
    public static void main(String args[])throws IOException{
        String s = "hello this is the content which i want to write";
        byte b[] = s.getBytes();
        FileOutputStream fos = new FileOutputStream("A:\\c++\\problems\\questionBank\\xyz.txt");
        fos.write(b);
        System.out.println("file has been added successfully");
        fos.close();
    }

}
