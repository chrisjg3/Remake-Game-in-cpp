// java swing components
import java.awt.*;
import java.awt.event.*;
import java.lang.ref.Cleaner;
import javax.swing.*;
import java.util.concurrent.TimeUnit;

// java net components
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.net.UnknownHostException;


public class ModerniaFront {

    public static void main(String[] args) {
        new ModerniaFront();
    }

    // ****   GUI Elements (Java Swing)
    JFrame f;
    JPanel topLeft;
    JPanel topRight;
    JPanel bottomLeft;
    JPanel bottomRight;

    JTextField backendLog;
    // END GUI Elements ***


    // ****  Net/Socket Elements
    Socket server = null;
    BufferedReader in;
    // END Net Elements



    // Extra text variables
    int i; // for testing, REMOVE!!!
    int[] test_nums;


    ModerniaFront() {
        // setting up back-front comms
        try {
            server = new Socket("127.0.0.1", 50000);
        } catch(IOException e) { System.out.println("IO or Unknown Host Error thrown!"); }

        // attatching to in
        try {
            in = new BufferedReader(new InputStreamReader( server.getInputStream() ) );
        } catch(IOException e) { System.out.println("Buffer Read failed!"); } 
        finally { System.out.println("Java needs to learn its do or do not, there is no try."); }

        // printing rust communcation to screen
        try {
            System.out.println( in.readLine() );
        } catch(IOException e) { System.out.println("Buffer Read failed!"); } 

        // setting up main window
        f = new JFrame();
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);   
        f.setLayout( new GridLayout(2,2) ); // box of 4 panels

        // setting up panels and adding to window
        topLeft = new JPanel();
        topRight = new JPanel();
        bottomLeft = new JPanel();
        bottomRight = new JPanel();
        f.add(topLeft);
        f.add(topRight);
        f.add(bottomLeft);
        f.add(bottomRight);

        // temporary: setting simple layout and adding test button
        topLeft.setLayout( new GridLayout(2,2) );
        topRight.setLayout( new GridLayout(1,1) );
        bottomLeft.setLayout( new GridLayout(1,1) );
        bottomRight.setLayout( new GridLayout(1,1) );
        backendLog =  new JTextField();
        topLeft.add( backendLog );
        topRight.add( new JButton() );
        bottomLeft.add( new JButton() );
        bottomRight.add( new JButton() );
        i = 0;

        Timer tick = new Timer(3000, new Animator()); // timer (Animator class defined below for action)
		tick.start();
        System.out.println("here");

        // actually making visible
        f.setSize( new Dimension( 700, 700 ));
        f.setVisible(true);
    }

    // REMOVED BECAUSE MIGHT BE UNNECESSARY, STILL NEED TO TOTALLY REMOVE!!!
    // public class Game extends JPanel {
        
    //     @Override
    //     public void paintComponent(Graphics g) {
    //         super.paintComponent(g);
    //         System.out.println("\n Being called repaint!");

    //         // log.setText("Test: " + i);

    //         System.out.println(i);

    //         i++;

    //         if(i == 1000) { throw new NullPointerException("demo"); } // Temporary safeguard REMOVE!!
    //     }

    // }


    // Action Event that Timer calls to get thw windows to repaint
    public class Animator implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            // topLeft.repaint();
            backendLog.setText("Hello from backend log! i is currently: " + i++);
            System.out.println("woah!");
        }
    }


}