package gui.gra.statki;

import static org.junit.Assert.*;

import gui.gra.wyjatki.BadPositionException;

import java.awt.Point;

import org.junit.*;

public class StatekTest {

	@Before
	public void setUp() throws BadPositionException
	{
		statek=new Statek(new Point(0,0),4,Statek.RIGHT);
		
		
	}
	@Test
	public void createAndHitShip() {
		
		
		assertTrue(statek.isHit(new Point(1,0)));
		assertTrue(statek.isHit(new Point(2,0)));
		assertTrue(statek.isHit(new Point(3,0)));
		assertTrue(statek.isHit(new Point(4,0)));
		
		assertTrue(statek.isDestroyed());
		
		
		
	}
	
	@Test(expected=BadPositionException.class)
	public void createAndSetShip() throws BadPositionException
	{
		statek.setPosition(new Point(9,9),Statek.RIGHT);
		
	}
	private Statek statek;

}
