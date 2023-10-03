import java.awt.*;
import javax.swing.*;
public class createSmiley extends JPanel{
    public void paintComponent(Graphics g){
        super.paintComponent(g);
        g.setColor(Color.yellow);
        g.fillOval(50,50,200,200);
        g.setColor(Color.black);
        g.fillOval(120, 120, 15, 15);
        g.fillOval(170, 120, 15, 15);
        g.drawArc(100, 140, 120, 80, 0, -180);
    }
    public static void main(String args[]){
        JFrame j = new JFrame("smiley face");
        j.setVisible(true);
        j.setSize(200,200);
        j.add(new createSmiley());
        j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
