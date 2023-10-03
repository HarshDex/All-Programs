import java.sql.*;
public class jdbc {
    public static void main(String[] args) {
        try{
            Class.forName("con.mySql.jdbc.Driver");
            String url = "jdbc:mySql://localhost:3001/harsh";
            String userName = "harsh";
            String password = "harsh@123";
            Connection con = DriverManager.getConnection(url, userName ,password);
            String q = "insert into Table1(tname,tcity) values(?,?)";
            Statement stmt = con.createStatement();
            stmt.executeUpdate(q);
            System.out.println("table created successfully");

            q = "select * from Table1";
            PreparedStatement pstmt = con.prepareStatement(q);
            ResultSet st = pstmt.executeQuery();
            while(st.next()){
                System.out.println(st.getInt(0));
                System.out.println(st.getString(2));
                System.err.println(st.getString(3));
            }
            
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}
