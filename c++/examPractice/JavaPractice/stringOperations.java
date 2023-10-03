import java.util.*;
public class stringOperations{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the string : ");
        String s = sc.nextLine();
        int n = s.length();
        char str[] = s.toCharArray();
        StringBuffer res = new StringBuffer();
        for(int i =0 ;i<n;i++){
            if(i<n && str[i] == 'a' && str[i+1] == 'b'){
                i = i+2;
            }
            if(i<n && str[i] == 'a'){
                i++;
            }
            res.append(str[i]);
        }
        res.toString();
        System.out.println(res);
        sc.close();
    }
}