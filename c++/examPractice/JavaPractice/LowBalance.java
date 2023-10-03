import java.util.*;
class MyException extends Exception{
    public MyException(String s){
        super(s);
    }
}
class Bank{
    String name;
    int age;
    Long accNo;
    double money;
    Bank(String name,int age,Long accNo){
        this.name = name;
        this.age = age;
        this.accNo = accNo;
    }
    void setMoney(double money){
        this.money = money;
    }
    void deposit(double amt){
        if(amt < 0)
            return;
        money += amt;
        System.out.println("money deposited successfully");
    }
    void withdrawl(double amt){
        try{
            if(amt > money){
                throw new MyException("Low Balance in Account");
            }
            else{
                money -= amt;
                System.out.println("money withdrawl successfully");
            }
        }
        catch(MyException e){
            System.out.println(e.getMessage());
        }
    }

    void checkBalance(){
        System.out.println("your current balance is : " + money);
    }

    void getDetails(){
        System.out.println("name of the person : " + name);
        System.out.println("age of the person : " + age);
        System.out.println("accNo of the person : " + accNo);
    }
}
public class LowBalance {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the name of the employee : ");
        String name = sc.nextLine();
        System.out.print("enter the age of the employee : ");
        int age = sc.nextInt();
        System.out.print("enter the account number : ");
        Long accNo = sc.nextLong();
        System.out.print("enter the money you want in your account : ");
        double money = sc.nextDouble();
        Bank b = new Bank(name,age,accNo);
        b.setMoney(money);

        double amt;
        System.out.print("enter the ammount which you want to  deposit : ");
        amt = sc.nextDouble();
        b.deposit(amt);
        
        System.out.print("enter the ammount of money which you want to withdraw : ");
        amt = sc.nextDouble();
        b.withdrawl(amt);

        b.getDetails();
        b.checkBalance();
        sc.close();
    }
}
