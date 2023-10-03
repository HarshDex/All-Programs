import java.io.*;
public class fileInput{
    public static void main(String args[]) throws IOException{
        FileInputStream fis = new FileInputStream("hello1.txt");
        FileOutputStream fos = new FileOutputStream("hello2.txt");
        BufferedInputStream bis = new BufferedInputStream(fis);
        BufferedOutputStream bos = new BufferedOutputStream(fos);
        int x;
        while((x = bis.read()) != -1){
            bos.write(x);
        }
        bis.close();
        bos.close();
        fis.close();
        fos.close();
    }
}
