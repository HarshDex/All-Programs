import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class gui extends JFrame implements ActionListener{
    JTextField jf1,jf2,jf3;
    gui(){
        jf1 = new JTextField(30);        
        jf2 = new JTextField(30);
        jf3 = new JTextField(30);

        JLabel jl1 = new JLabel("a");
        JLabel jl2 = new JLabel("b");
        JLabel jl3 = new JLabel("answer");
        JButton jb = new JButton("add");

        add(jl1);add(jf1);
        add(jl2);add(jf2);add(jb);
        add(jl3);add(jf3);

        jb.getActionListeners();
    }
    public void actionPerformed(ActionEvent e){
        int a = Integer.parseInt(jf1.getText());       
        int b = Integer.parseInt(jf2.getText());
        int ans = (int)Math.pow(a,2) - (int)Math.pow(b, 2);
        jf3.setText(Integer.toString(ans));
    }
}
public class A_2subB_2 {
    public static void main(String args[]){
        gui gf = new gui();
        gf.setLayout(new FlowLayout());
        gf.setVisible(true);
        gf.setSize(400, 400);

    }
}
