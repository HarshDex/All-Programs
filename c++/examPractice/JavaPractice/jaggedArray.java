import java.util.*;
public class jaggedArray {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the number rows : ");
        int row = sc.nextInt();
        int ar[][] = new int[row][];
        int col;
        for(int i =0;i<row;i++){
            System.out.print("enter the number of column for row [" + i + "] : ");
            col = sc.nextInt();
            ar[i]= new int[col];
        }

        System.out.println("enter the values in the array : ");
        for(int i =0;i<ar.length;i++){
            for(int j = 0;j<ar[i].length;i++){
                System.out.print("enter the value for row " + i + " : ");
                ar[i][j] = sc.nextInt();
            }
        }
        System.out.println("printing the array : ");
        for(int i =0;i<ar.length;i++){
            System.out.println();
            for(int j = 0;j<ar[0].length;j++){
                System.out.print(ar[i][j] +" ");
            }
        }
        sc.close();
    }
}
