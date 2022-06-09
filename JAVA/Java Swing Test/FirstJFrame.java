import javax.swing.JFrame;

public class FirstJFrame {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        frame.setSize(350, 300);
//        frame.setLocation(400,200);
        frame.setBounds(500,250,400,350);
        //frame.setResizable(false);
        frame.setTitle("Test Title");
        frame.setResizable(false);
    }
}
