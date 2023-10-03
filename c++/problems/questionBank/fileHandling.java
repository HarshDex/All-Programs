import java.io.*;
public class fileHandling{
    public static void main(String args[])throws IOException{
        FileOutputStream fos = new FileOutputStream("A:\\c++\\problems\\questionBank\\abc.txt");
        String s = "hello what is you name";
        byte b[] = s.getBytes();
        fos.write(b);
        fos.close();
        System.out.println("\nreading fromt the file : ");
        FileInputStream fis = new FileInputStream("A:\\c++\\problems\\questionBank\\abc.txt");
        int t = 0;
        while((t = fis.read())!=-1){
            System.out.print((char)t);
        }
        fis.close();
    }
}
