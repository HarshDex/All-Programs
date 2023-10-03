import java.io.*;
public class readFromAfile{
    public static void main(String[] args)throws IOException{
        FileReader fr = new FileReader("hello1.txt");
        FileWriter fw = new FileWriter("hello2.txt");
        BufferedReader br = new BufferedReader(fr);       
        BufferedWriter wr = new BufferedWriter(fw);
        String s;
        while((s = br.readLine())!=null){
            wr.write(s);
        }
        br.close();
        wr.close();
        fr.close();
        fw.close();
    }
}