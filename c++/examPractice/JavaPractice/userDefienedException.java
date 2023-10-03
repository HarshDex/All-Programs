import java.util.*;
class MyException extends Exception{
    public MyException(String s){
        super(s);
    }
}
public class userDefienedException {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of x  : ");
        int x = sc.nextInt();
        sc.close();
        try{
            if(x == 0){
                throw new MyException("x is zero");
            }
        }
        catch(MyException e){
            System.out.println(e.getMessage());
        }
    }
}
