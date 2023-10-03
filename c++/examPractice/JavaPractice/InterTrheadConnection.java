class Charges extends Thread{
    int a;
    int charge = 0;
    Charges(int a){this.a = a;}
    public void run(){
        synchronized(this){
            for(int i =0;i<a;i++){
                charge += 100;
            }
            notify();
        }
    }
}
public class InterTrheadConnection{
    public static void main(String args[]) throws InterruptedException{
        Charges ch = new Charges(10);
        ch.start();
        synchronized(ch){
            ch.wait();
        }
        System.out.println("total charges : " + ch.charge);
    }
}
