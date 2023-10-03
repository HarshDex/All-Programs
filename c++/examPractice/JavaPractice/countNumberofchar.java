import java.io.*;
public class countNumberofchar{
    public static void main(String[] args)throws IOException{
        int ch = 0;
        int lines = 0;
        int spaces = 0;
        FileInputStream fis = new FileInputStream("hello1.txt");        
        BufferedInputStream bis = new BufferedInputStream(fis);
        int x;
        while((x=bis.read())!=-1){
            if(x == ' ') spaces++;
            else if(x == '\n') lines++;
            else ch++;
        }
        System.out.println("number of characters : " + ch);
        System.out.println("number of spaces : " + spaces);
        System.out.println("number of lines : " + lines);
        bis.close();
        fis.close();
    }
}
