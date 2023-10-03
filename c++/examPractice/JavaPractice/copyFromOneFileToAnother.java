import java.io.*;
public class copyFromOneFileToAnother{
    public static void main(String args[]) throws IOException{
        FileReader fr = new FileReader("hello1.txt");
        BufferedReader br = new BufferedReader(fr);
        FileWriter fw = new FileWriter("hello2.txt");
        BufferedWriter bw = new BufferedWriter(fw);
        String x;
        while((x = br.readLine())!=null){
            bw.append(x);
        }
        bw.close();
        br.close();
        fw.close();
        fr.close();
    }
}
