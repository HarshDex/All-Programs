import java.util.*;
class Table{
void printTable(int a){
        synchronized(this){
            for(int i =1;i<11;i++){
                System.out.println(a + " * " + i + " = " + a*i);
            }
            try{
                Thread.sleep(100);
            }
            catch(Exception e){
                System.out.println(e);
            }
        }
    }
}
class Thread1 extends Thread{
    int a;
    Table t;
    public Thread1(int a,Table t){
        this.a = a;
        this.t = t;
    }
    public void run(){
        t.printTable(a);
    }
}
class Thread2 extends Thread{
    Table t;
    int b;
    public Thread2(int b,Table t){
        this.b = b;
        this.t = t;
    }
    public void run(){
        t.printTable(b);
    }
}
public class synchronizedMethodInJava {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of a : ");
        int a= sc.nextInt();
        System.out.print("enter the value of b : ");
        int b = sc.nextInt();
        Table t = new Table();
        Thread1 t1 = new Thread1(a,t);      
        Thread2 t2 = new Thread2(b,t);
        t1.start();
        t2.start();
        sc.close();
    }
}
