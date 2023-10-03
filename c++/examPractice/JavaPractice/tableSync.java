import java.util.*;
class Table1{
    public void printTable(int a){
        synchronized(this){
            for(int i =1;i<1199999;i++) 
                System.out.println(a + " * " + i + " = " + a*i);
            }
            try{
                Thread.sleep(1000);
            }
            catch(Exception e){
                System.out.println(e);
            }
    }
}
class A extends Thread{
    Table1 t;
    int a;
    A(Table1 t,int a){
        this.t = t;
        this.a = a;
    }
    public void run(){
        t.printTable(a);
    }
}
class B extends Thread{
    Table1 t;
    int b;
    B(Table1 t,int b){
        this.t = t;
        this.b = b;
    }
    public void run(){
        t.printTable(b);
    }
}
public class tableSync {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of a : ");
        int a = sc.nextInt();
        System.out.print("enter the value of b : ");
        int b = sc.nextInt();
        Table1 t = new Table1();
        A ob1 = new A(t, a);
        B ob2 = new B(t,b);
        ob1.start();
        ob2.start();
        sc.close();
    }
}
