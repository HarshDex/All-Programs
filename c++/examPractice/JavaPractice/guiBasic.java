import javax.swing.*;
import java.awt.*;
public class guiBasic extends JFrame{
    public static void main(String args[]){
        JFrame jf = new JFrame();
        JLabel jl1 = new JLabel("Enter your name");
        JTextField jtf1 = new JTextField(20);
        JButton jb1 = new JButton("click");
        jf.add(jl1);        
        jf.add(jtf1);
        jf.add(jb1);
        jf.setLayout(new FlowLayout());
        jf.setVisible(true);
        jf.setSize(400, 500);
    }
}
