class Table{
    public void printTable(int x){
        synchronized(this){
            for(int i =1;i<11;i++){
                System.out.println(x + " * " + i + " = " + x*i);
            }
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
}
class Thread1 extends Thread{
    int a;
    Table t;
    Thread1(int a,Table t){
        this.a = a;
        this.t = t;
    }
    public void run(){
        t.printTable(a);
    }
}
class Thread2 extends Thread{
    int b;
    Table t;
    Thread2(int b,Table t){
        this.b = b;
        this.t = t;
    }
    public void run(){
        t.printTable(b);
    }
}
public class multiThreading {
    public static void main(String args[]){
        Table t = new Table();
        int x = 5;
        int y = 6;
        Thread1 t1 = new Thread1(x,t);      
        Thread2 t2 = new Thread2(y,t);
        t1.start();
        t2.start();
    }
}
