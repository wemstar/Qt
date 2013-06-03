package gui.gra;

import java.awt.EventQueue;

import javax.swing.JFrame;

import gui.gra.rdzen.Game;
import gui.gra.rdzen.GameFactory;
import gui.gra.ui.MainFrame;


/**
 * @author wemstar
 *	klasa odopiada za rozpoczęcie gry to ją należy uruchomić
 */
public class GlownaGra {
	
	
	
	public static void main(String[] args)
	{
		
		GameFactory gra=new GameFactory();
		
		pokazOkno(gra);
		
		
	}
	/**
	 * @param game GameFactory która odpowiada za tworzenie gry
	 */
	public static void pokazOkno(final GameFactory game) {
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
