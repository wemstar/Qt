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
	
	@Test
	public void testHitShip()
	{
		assertTrue(plansza.isHitShip(new Point(0,0)));
		assertTrue(plansza.isHitShip(new Point(6,1)));
		assertTrue(plansza.isHitShip(new Point(1,7)));
		assertTrue(plansza.isHitShip(new Point(9,9)));
		assertFalse(plansza.isHitShip(new Point(8,8)));
		assertFalse(plansza.isHitShip(new Point(1,1)));
		assertFalse(plansza.isHitShip(new Point(1,8)));
	}
	@Test
	public void testAllShipDestroyed()
	{
		assertFalse(plansza.isLoser());
		
		assertTrue(plansza.isHitShip(new Point(0,0)));
		assertTrue(plansza.isHitShip(new Point(1,0)));
		assertTrue(plansza.isHitShip(new Point(2,0)));
		assertTrue(plansza.isHitShip(new Point(3,0)));
		
		assertFalse(plansza.isLoser());
		
		assertTrue(plansza.isHitShip(new Point(5,1)));
		assertTrue(plansza.isHitShip(new Point(6,1)));
		assertTrue(plansza.isHitShip(new Point(7,1)));
		
		assertTrue(plansza.isHitShip(new Point(1,5)));
		assertTrue(plansza.isHitShip(new Point(2,5)));
		assertTrue(plansza.isHitShip(new Point(3,5)));
		
		assertFalse(plansza.isLoser());
		
		assertTrue(plansza.isHitShip(new Point(0,7)));
		assertTrue(plansza.isHitShip(new Point(1,7)));
		
		assertTrue(plansza.isHitShip(new Point(9,9)));
		
		assertTrue(plansza.isLoser());
		
	}
	
	
	private Plansza plansza;

}
