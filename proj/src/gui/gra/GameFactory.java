package gui.gra;

import java.awt.EventQueue;

import javax.swing.JFrame;

import gui.gra.rdzen.*;
import gui.gra.ui.MainFrame;

public class GameFactory {

	public void utworzGre() {
		
		gra=new Game();
		Gracz player2=new Gracz();
		player2.setMove(new RandomMove());
		Plansza plPlayer1=new Plansza();
		Plansza plPlayer2=new Plansza();
		player2.setPlansza(plPlayer2);
		
		Gracz player1=new Gracz();
		player1.setPlansza(plPlayer1);
		gra.setPlayers(player1, player2);
		
	}

	public void pokazOkno() {
		EventQueue.invokeLater(new Runnable()
		{
			public void run()
			{
				frame=new MainFrame(GameFactory.this);
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				frame.setVisible(true);
			}
			
		});
		
	}
	public void rozpocznijWybieranie()
	{
		
	}
	public void rozpocznijGre()
	{
		
	}
	
	
	private Game gra;
	private MainFrame frame;

}
