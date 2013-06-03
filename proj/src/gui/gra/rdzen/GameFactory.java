package gui.gra.rdzen;

import gui.gra.rdzen.gracz.Gracz;
import gui.gra.rdzen.gracz.Move;
import gui.gra.rdzen.gracz.Plansza;
import gui.gra.rdzen.gracz.RandomMove;
import gui.gra.ui.MainFrame;

import java.awt.EventQueue;

import javax.swing.JFrame;

/**
 * @author wemstar
 * klasa jest Budowniczym gry
 * buduje gre oraz plansze dla graczy
 */
public class GameFactory {

	
	
	public Game utworzGre() {
		
		gra=new Game();
		Gracz player1=przygotujGracza(new RandomMove(),new Plansza());
		Plansza plan=new Plansza();
		plan.losujPlansze();
		Gracz player2=przygotujGracza(new RandomMove(),plan);
		gra.setPlayers(player1, player2);
		return gra;
	}
	
	private Gracz przygotujGracza(Move move,Plansza plansza)
	{
		Gracz gracz=new Gracz();
		gracz.setPlansza(plansza);
		gracz.setMove(move);
		
		return gracz;
	}
	
	
	
	

	
	
	
	
	
	private Game gra;
	
	

}
