package gui.gra;

import java.awt.EventQueue;

import javax.swing.JFrame;

import gui.gra.rdzen.*;
import gui.gra.ui.MainFrame;

public class GameFactory {

	public void utworzGre() {
		
		gra=new Game();
		
		
	}

	public void pokazOkno() {
		EventQueue.invokeLater(new Runnable()
		{
			public void run()
			{
				frame=new MainFrame(GameFactory.this.gra);
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				frame.setVisible(true);
			}
			
		});
		
	}
	
	
	
	
	private Game gra;
	private MainFrame frame;

}
