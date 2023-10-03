public class highestFrequency {
    public static void main(String[] args) {
        String s = "ababbababatxxxxxxxhhhh";
        int ar[] = new int[26];
        for(int i =0;i<ar.length;i++) ar[i] = 0;
        for(int i = 0;i<s.length();i++){
            int ch =s.charAt(i)-'a';
            ar[ch]++;
        }
        int max = 0 ;
        for(int i =0;i<ar.length;i++){
            System.out.println(ar[i]);
            if(ar[i] > max){
                max = i;
            }
        }
        System.out.println("maximum occuring char " + (char)(max+'a'));
    }
}
