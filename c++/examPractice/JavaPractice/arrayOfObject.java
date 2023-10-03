import java.util.*;
class xyz{
    int a;
    int b;
    xyz(int a,int b){
        this.a = a;
        this.b = b;
    }
    void display(){
        System.out.print(a + " ");       
        System.out.println(b);
        System.out.println();

    }
}
public class arrayOfObject{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the number of objects : ");int n= sc.nextInt();
        xyz x []= new xyz[n];
        for(int i =0;i<n;i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            x[i] = new xyz(a,b);
        }
        for(int i =0;i<n;i++) x[i].display();
        sc.close();
    }
}