package gui.gra.rdzen;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import gui.gra.rdzen.gracz.Gracz;
import gui.gra.rdzen.gracz.Plansza;
import gui.gra.rdzen.gracz.RandomMove;
import gui.gra.rdzen.gracz.statki.Statek;
import gui.gra.rdzen.wyjatki.BadPositionException;
import gui.gra.rdzen.wyjatki.LimitException;

import java.awt.Point;

import org.junit.Before;
import org.junit.Test;

public class GraTest {

	@Before
	public void uruchomGre()
	{
		gra=new Game();
		Gracz player1=new Gracz();
		player1.setPlansza(new Plansza());
		
		Gracz player2=new Gracz();
		player2.setPlansza(new Plansza());
		player2.setMove(new RandomMove());
		
		gra.setPlayers(player1,player2);
		
		
		
	}
	
	
	
	@Test
	public void testMovment() {
		ustawPlansze();
		assertTrue(gra.getFirstPlayer().reciveHit(new Point(0,0)));
		assertTrue(gra.getFirstPlayer().reciveHit(new Point(7,3)));
		
	}
	@Test
	public void testWinner()
	{
		ustawPlansze();
		assertFalse(gra.isEndGame());
		ostrzelajGracza(gra.getFirstPlayer());
		assertTrue(gra.isEndGame());
		assertTrue(gra.getFirstPlayer().przegrana());
		
	}
	@Test
	public void testRozegraniaGry()
	{
		ustawPlansze();
		Gracz player1=gra.getFirstPlayer();
		player1.setMove(new RandomMove());
		Gracz player2=gra.getSecondPlayer();
		player2.setMove(new RandomMove());
		while(!gra.isEndGame())
		{
			player1.reciveHit(player2.getNextMove());
			player2.reciveHit(player1.getNextMove());
		}
		assertTrue(player1.przegrana()||player2.przegrana());
	}
	
	
	private void ustawPlansze()
	{
		Plansza plansza=gra.getFirstPlayer().getPlansza();
		
		try{
			plansza.addShip(new Point(0,0), 1, Statek.RIGHT);
			plansza.addShip(new Point(3,0), 1, Statek.RIGHT);
			plansza.addShip(new Point(0,3), 1, Statek.RIGHT);
			plansza.addShip(new Point(3,3), 1, Statek.RIGHT);
		
			plansza.addShip(new Point(1,6), 2, Statek.RIGHT);
			plansza.addShip(new Point(5,5), 2, Statek.DOWN);
			plansza.addShip(new Point(5,1), 2, Statek.DOWN);
		
			plansza.addShip(new Point(7,2), 3, Statek.DOWN);
			plansza.addShip(new Point(1,9), 3, Statek.RIGHT);
		
			plansza.addShip(new Point(6,9), 4, Statek.RIGHT);
		}
		catch(BadPositionException e){}
		catch(LimitException e){}
		
		gra.getSecondPlayer().getPlansza().losujPlansze();
		
		
		
	}
	private void ostrzelajGracza(Gracz player)
	{
		for(int i=0;i<10;++i)
		{
			for(int j=0;j<10;++j)
			{
				player.reciveHit(new Point(i,j));
			}
		}
	}
	
	
	
	Game gra;

}
