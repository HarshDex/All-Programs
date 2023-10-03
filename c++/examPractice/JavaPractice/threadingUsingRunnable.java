class Table1 implements Runnable{
    @Override
    public void run(){
        while(true){
            System.out.println("this is thread 1");
        }
    }
}
class Table2 implements Runnable{
    @Override
    public void run(){
        while(true){
            System.out.println("this is thread 2");
        }
    }
}
public class threadingUsingRunnable {
    public static void main(String []args){
        Table1 t1 = new Table1();
        Table2 t2 = new Table2();
        Thread tr1 = new Thread(t1);       
        Thread tr2 = new Thread(t2);
        tr1.start();
        tr2.start();
    }
}
d