package gui.gra.statki;

import static org.junit.Assert.*;

import gui.gra.wyjatki.BadPositionException;
import gui.gra.wyjatki.LimitException;

import java.awt.Point;

import org.junit.*;

public class PlanszaTest {

	@Before
	public void ustawPlansze() throws BadPositionException, LimitException
	{
		plansza=new Plansza();
		plansza.addShip(new Point(0,0),4,Statek.RIGHT);
		plansza.addShip(new Point(5,1),3,Statek.RIGHT);
		plansza.addShip(new Point(1,5),3,Statek.RIGHT);
		
		plansza.addShip(new Point(0,7),2,Statek.RIGHT);
		plansza.addShip(new Point(9,9),1,Statek.RIGHT);
		
		
	}
	@Test(expected=BadPositionException.class)
	public void testInsertColisionShip() throws BadPositionException, LimitException {
		plansza.addShip(new Point(0,0),1,Statek.DOWN);
		fail("");
		
		
		
	}
	
	@Test(expected=LimitException.class)
	public void testInsertToManyShip() throws BadPositionException, LimitException
	{
		plansza.addShip(new Point(5,5),4, Statek.RIGHT);
		fail(" ");
	}
	@Test
	public void testInsertGoodSip() throws BadPositionException, LimitException
	{
		plansza.addShip(new Point(5,5), 2, Statek.DOWN);
	}
	
	
	
	private Plansza plansza;

}
