package gui.gra.rdzen;

import static org.junit.Assert.*;

import gui.gra.rdzen.Statek;
import gui.gra.rdzen.wyjatki.BadPositionException;

import java.awt.Point;
import java.util.*;

import org.junit.*;

public class StatekTest {

	@Before
	public void setUp() throws BadPositionException
	{
		statek=new Statek(new Point(0,0),4,Statek.RIGHT);
		
		
	}
	@Test
	public void createAndHitShip() {
		
		
		assertTrue(statek.isHit(new Point(0,0)));
		assertTrue(statek.isHit(new Point(1,0)));
		assertTrue(statek.isHit(new Point(2,0)));
		assertTrue(statek.isHit(new Point(3,0)));
		assertFalse(statek.isHit(new Point(4,0)));
		assertFalse(statek.isHit(new Point(0,1)));
		
		assertTrue(statek.isDestroyed());
		
		
		
		
	}
	
	@Test(expected=BadPositionException.class)
	public void createAndSetShip() throws BadPositionException
	{
		statek.setPosition(new Point(9,9),Statek.RIGHT);
		
	}
	@Test
	public void getShipPositionTest()
	{
		Map<Point,Integer>pozycje= statek.getPozycja();
		
		assertTrue(pozycje.containsKey(new Point(0,0)));
		assertTrue(pozycje.containsKey(new Point(1,0)));
		assertTrue(pozycje.containsKey(new Point(2,0)));
		assertTrue(pozycje.containsKey(new Point(3,0)));
		assertFalse(pozycje.containsKey(new Point(0,4)));
		assertFalse(pozycje.containsKey(new Point(4,0)));
		
	}
	private Statek statek;

}
