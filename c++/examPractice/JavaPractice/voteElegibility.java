import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Gui extends JFrame implements ActionListener,ItemListener{
    JTextField jtf1,jtf2,jtf3;
    JRadioButton male,female;
    String s,el;
    Gui(){
        jtf1 = new JTextField(30);       
        jtf2 = new JTextField(30);
        jtf3 = new JTextField(30);
        JLabel jl1 = new JLabel("Name");
        JLabel jl2 = new JLabel("Age");
        male = new JRadioButton("male",false);
        female = new JRadioButton("female",false);
        ButtonGroup bg = new ButtonGroup();
        bg.add(male);bg.add(female);
        JButton jb1 = new JButton("Vote");
        JButton exit = new JButton("Exit");
        add(jl1);add(jtf1);
        add(jl2);add(jtf2);
        add(male);add(female);
        add(jb1);add(jtf3);
        add(exit);
        jb1.addActionListener(this);
        male.addItemListener(this);
        female.addItemListener(this);
        exit.addActionListener(this);
    }
    public void itemStateChanged(ItemEvent e){
        if(male.isSelected()){
            s = "Mr.";
        }
        else s = "Mrs.";
    }
    public void actionPerformed(ActionEvent e){
        if(e.getActionCommand() == "Vote"){
            if(Integer.parseInt(jtf2.getText()) >= 18){
                el = "allowed";
            }
            else el = "not allowed";
        } 
        jtf3.setText("Hello " + s + jtf1.getText() + " you are " + el + " to vote");
        if(e.getActionCommand() == "Exit"){
            System.exit(0);
        }
    }
}
public class voteElegibility {
    public static void main(String args[]){
        Gui f = new Gui();
        f.setVisible(true);
        f.setSize(400,400);
        f.setLayout(new FlowLayout());
    }
}
