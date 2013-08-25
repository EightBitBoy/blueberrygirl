package de.eightbitboy.blueberrygirl;

import javax.swing.JFrame;
import javax.swing.SwingUtilities;

public class BlueberryGirl extends JFrame{
	public BlueberryGirl(){
		this.initUi();
	}
	
	private void initUi(){
       setTitle("Simple example");
       setSize(300, 200);
       setLocationRelativeTo(null);
       setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	
	public static void main(String[] args){
		SwingUtilities.invokeLater(new Runnable(){
			//@Override
			public void run() {
				BlueberryGirl bg = new BlueberryGirl();
				bg.setVisible(true);
			}
		});
	}
}