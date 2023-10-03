import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Gui extends JFrame implements ActionListener,ItemListener{
    JTextField jf1,jf2,jf3;
    JRadioButton male,female;
    String s,el;
    Gui(){
        setLayout(new FlowLayout());
        jf1 = new JTextField(20);
        jf2 = new JTextField(30);       
        jf3 = new JTextField(30);
        JLabel name = new JLabel("Name");
        JLabel age = new JLabel("Age");
        male = new JRadioButton("Male",false);
        female = new JRadioButton("Female",false);
        ButtonGroup bg = new ButtonGroup();
        bg.add(male);
        bg.add(female);
        JButton jb = new JButton("Vote");
        JButton ex = new JButton("Exit");
        add(name);add(jf1);
        add(age);add(jf2);
        add(male);add(female);
        add(jb);add(jf3);
        add(ex);
        jb.addActionListener(this);
        male.addItemListener(this);
        female.addItemListener(this);
        ex.addActionListener(this);
    }
    public void itemStateChanged(ItemEvent e){
        if(male.isSelected() == true){
            s = "Mr.";
        }
        else s = "Mrs.";

    }
    public void actionPerformed(ActionEvent e){
        if(e.getActionCommand() == "Vote"){
            if(Integer.parseInt(jf2.getText()) >= 18){
                el = "allowed";
            }
            else el = "not allowed";
        }
        jf3.setText(el);
    }
}
public class Voting{
    
}
