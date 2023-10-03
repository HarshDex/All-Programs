import java.io.*;
public class buffertoFile{
    public static void main(String []args)throws IOException{
        FileInputStream fis = new FileInputStream("A:\\c++\\problems\\questionBank\\abc.txt");
        BufferedInputStream bis = new BufferedInputStream(fis);
        FileOutputStream fos = new FileOutputStream("A:\\c++\\problems\\questionBank\\xyz.txt");
        BufferedOutputStream bos = new BufferedOutputStream(fos);
        int x = 0;
        while((x = bis.read()) != -1){
                bos.write(x);
        }
        System.out.println("file has been edited successfully");
        bis.close();
        bos.close();
        fis.close();
        fos.close();
    }
}