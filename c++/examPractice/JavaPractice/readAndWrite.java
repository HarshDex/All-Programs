import java.io.*;
public class readAndWrite {
    public static void main(String args[]) throws IOException{
        FileReader fr = new FileReader("hello1.txt");
        FileWriter fw = new FileWriter("hello2.txt");
        BufferedReader br = new BufferedReader(fr);
        BufferedWriter bw = new BufferedWriter(fw);
        String x;
        while((x = br.readLine()) != null){
            bw.append(x);
        }
        bw.close();
        br.close();
        fw.close();
        fr.close();
    }
}
