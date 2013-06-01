package gui.gra.rdzen;

import gui.gra.ui.MainFrame;

import java.awt.EventQueue;

import javax.swing.JFrame;

public class GameFactory {

	
	
	public void przygotujGre() {
		
		gra=new Game();
		Gracz player1=przygotujGracza(new RandomMove(),new Plansza());
		Gracz player2=przygotujGracza(new RandomMove(),new Plansza());
		gra.setPlayers(player1, player2);
	}
	public void nowaGra()
	{
		gra.getFirstPlayer().setPlansza(new Plansza());
		gra.getSecondPlayer().setPlansza(new Plansza());
		
	}
	private Gracz przygotujGracza(Move move,Plansza plansza)
	{
		Gracz gracz=new Gracz();
		gracz.setMove(move);
		gracz.setPlansza(plansza);
		return gracz;
	}
	
	
	
	public void utworzGre() {
		
		
		
		
		
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
