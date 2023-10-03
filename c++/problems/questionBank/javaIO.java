import java.io.*;
public class javaIO{
    public static void main(String args[])throws IOException{
            InputStreamReader isr = new InputStreamReader(System.in);
            BufferedReader br = new BufferedReader(isr);
            System.out.print("enter the name : ");
            String name = br.readLine();
            System.out.print("enter the age : ");
            int age = Integer.parseInt(br.readLine());
            System.out.println("name of the student : " + name + " and age of the student is : " + age);
            br.close();
            isr.close();
    }
}