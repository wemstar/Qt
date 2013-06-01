package gui.gra;

import java.awt.EventQueue;

import javax.swing.JFrame;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.GameFactory;
import gui.gra.ui.MainFrame;


public class GlownaGra {
	
	
	
	public static void main(String[] args)
	{
		
		GameFactory gra=new GameFactory();
		Game game=gra.utworzGre();
		pokazOkno(game);
		
		
	}
	public static void pokazOkno(final Game game) {
		EventQueue.invokeLater(new Runnable()
		{
			public void run()
			{
				MainFrame frame=new MainFrame(game);
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				frame.setVisible(true);
			}
			
		});
		
	}

}
