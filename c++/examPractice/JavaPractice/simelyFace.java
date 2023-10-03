import javax.swing.*;
import java.awt.*;
public class simelyFace extends JPanel{
    public void paintComponent(Graphics g){
        super.paintComponent(g);
        g.setColor(Color.yellow);
        g.fillOval(60,60,200,200);
        g.setColor(Color.black);
        g.fillOval(120,120,15,15);
        g.fillOval(160,120,15,15);
        g.drawArc(100,180,120,15,0,-180);

    }
    public static void main(String args[]){
        JFrame f = new JFrame("smiley face");
        f.add(new simelyFace());
        f.setVisible(true);
        f.setSize(500,500);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
