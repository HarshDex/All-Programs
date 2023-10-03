import java.io.*;
public class readFromFileLineByLine {
    public static void main(String args[]) throws IOException{
        FileReader fr = new FileReader("hello1.txt");
        FileWriter fw = new FileWriter("hello2.txt");
        BufferedReader br = new BufferedReader(fr);
        BufferedWriter bw = new BufferedWriter(fw);
        String str;
        while((str = br.readLine())!= null){
          bw.append(str);
        }
        bw.close();
        br.close();
        fw.close();
        fr.close();
    }
}
