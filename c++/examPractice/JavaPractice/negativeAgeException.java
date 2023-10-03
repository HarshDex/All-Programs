import java.util.*;
class NegativeAge extends Exception{
    NegativeAge(String s){
        super(s);
    }
}
public class negativeAgeException {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the age : ");
        int age = sc.nextInt();sc.close();
        try{
            if(age<0){
                throw(new NegativeAge("age cannot be negative"));
            }
            else{
                System.out.println("your age is : " + age);
            }
        }
        catch(NegativeAge e){
            System.out.println(e.getMessage());
        }
        
    }
}
