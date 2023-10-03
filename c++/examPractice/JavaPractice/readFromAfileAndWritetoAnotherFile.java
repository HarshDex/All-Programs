import java.io.*;
public class readFromAfileAndWritetoAnotherFile {
    public static void main(String[] args) throws IOException{
        FileInputStream fis = null;
        FileOutputStream fos = null;
        fis = new FileInputStream("hello1.txt");
        fos = new FileOutputStream("hello3.txt");
        int x;
        while((x = fis.read()) != -1){
            fos.write(x);
        }
        fis.close();
        fos.close();
    }
    
}
