class Table1 extends Thread{
    String name;
    public Table1(String name){
        this.name = name;
    }
    @Override
    public void run(){
        int i = 0;
        while(i<100){
            System.out.println("this is thread 1 " + name);
            i++;
        }
        try{
            Thread.sleep(1000);
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}
class Table2 extends Thread{
    String name;
    public Table2(String name){
        this.name = name;
    }
    @Override
    public void run() {
        int i = 0;
        while(i<100)
            System.out.println("this is thread 2 " + name);
            i++;
        try{
            Thread.sleep(1000);
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}
public class threading{
    public static void main(String args[]){
        Table1 t1 = new Table1("harsh");
        Table2 t2 = new Table2("anshika");
        t1.start();
        t2.start();
    }
}