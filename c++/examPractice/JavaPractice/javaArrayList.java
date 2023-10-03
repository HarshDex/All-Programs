import java.util.*;
public class javaArrayList{
    public static void main(String args[]){
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the number of elements : ");
        n = sc.nextInt();

        ArrayList<Integer> al = new ArrayList<Integer>(n);
        System.out.print("enter the value of a : ");
        for(int i =0;i<n;i++){
            if(i ==5) break;
            int a;
            a = sc.nextInt();
            al.add(a);
        }
        al.add(10);
        al.add(20);
        System.out.print("array  : ");
        for(int i = 0;i<n;i++){
            System.out.print(al.get(i) + " ");
        }
        sc.close();
    }
}