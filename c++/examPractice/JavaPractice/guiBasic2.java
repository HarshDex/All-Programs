import javax.swing.*;
import java.awt.*;
class Body extends JFrame{
    JFrame f;
    Body(){
        JButton jb = new JButton("hello");
        setLayout(new FlowLayout());
        setSize(400, 600);  
        setVisible(true);
        add(jb);

        //checkboxes
        JCheckBox jcb1 = new JCheckBox("India",false);
        JCheckBox jcb2 = new JCheckBox("America",false);
        JCheckBox jcb3 = new JCheckBox("China",false);
        add(jcb1);
        add(jcb2);
        add(jcb3);

        //radio buttons
        JRadioButton jrb1 = new JRadioButton("Hindi",false);
        JRadioButton jrb2 = new JRadioButton("English",false);
        JRadioButton jrb3= new JRadioButton("Maths",false);
        ButtonGroup bg = new ButtonGroup();
        bg.add(jrb1);
        bg.add(jrb2);
        bg.add(jrb3);
        add(jrb1);
        add(jrb2);
        add(jrb3);

        //jlist method
        DefaultListModel<String> l1 = new DefaultListModel<>();
        l1.addElement("item1");
        l1.addElement("item2");       
        l1.addElement("item3");

        JList<String> jl = new JList<>(l1);
        add(jl);


        //textArea
        JTextArea jta = new JTextArea("hello my name is harsh vardhan shah\nwhat's up what about you");
        add(jta);
    }
    void display(){
        System.out.println("gui created");
    }
}
public class guiBasic2 {
    public static void main(String []args){
        Body b = new Body();
        b.display();
    }
}
