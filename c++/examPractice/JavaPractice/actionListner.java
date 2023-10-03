import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class gui extends JFrame implements ActionListener,ItemListener{
    JTextField jf1,jf2,jf3;
    JRadioButton male,female;
    String s,el;
    gui(){
        jf1 = new JTextField(20);        
        jf2 = new JTextField(20);
        jf3 = new JTextField(50);
        JLabel jl1 = new JLabel("name");        
        JLabel jl2 = new JLabel("age");
        JLabel jl3 = new JLabel("gender");
        JLabel jl4 = new JLabel("result");
        male = new JRadioButton("male",false);
        female = new JRadioButton("female",false);
        ButtonGroup bg = new ButtonGroup();
        bg.add(male);
        bg.add(female);

        JButton jb = new JButton("vote");
        JButton ex = new JButton("exit");
        add(jl1);add(jf1);add(jl2);add(jf2);
        add(jl3);add(male);add(female);add(jb);
        add(jl4);add(jf3);add(ex);

        jb.addActionListener(this);
        male.addItemListener(this);
        female.addItemListener(this);
        ex.addActionListener(this);
    }
    public void itemStateChanged(ItemEvent e){
        if(male.isSelected()){
            s = "Mr.";
        }
        else{
            s = "Mrs.";
        }
    }
    public void actionPerformed(ActionEvent e){
        if(e.getActionCommand() == "vote"){
            if(Integer.parseInt(jf2.getText())>=18){
                el = " allowed ";
            }
            else{
                el = " not allowed ";
            }
        }
        jf3.setText("welcome " + s +jf1.getText() + " your are " + el + " to vote");
        if(e.getActionCommand() == "exit"){
            System.exit(0);
        }
    }
}
public class actionListner{
    public static void main(String args[]){
        gui gf = new gui();
        gf.setLayout(new FlowLayout());
        gf.setSize(400, 600);
        gf.setVisible(true);
    }
}

