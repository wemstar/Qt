package gui.gra.rdzen;

import gui.gra.rdzen.gracz.Gracz;
import gui.gra.rdzen.gracz.Move;
import gui.gra.rdzen.gracz.Plansza;
import gui.gra.rdzen.gracz.RandomMove;
import gui.gra.ui.MainFrame;

import java.awt.EventQueue;

import javax.swing.JFrame;

public class GameFactory {

	
	
	public Game utworzGre() {
		
		gra=new Game();
		Gracz player1=przygotujGracza(new RandomMove(),new Plansza());
		Gracz player2=przygotujGracza(new RandomMove(),new Plansza());
		gra.setPlayers(player1, player2);
		return gra;
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
	
	
	
	

	
	
	
	
	
	private Game gra;
	
	

}
