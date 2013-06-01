package gui.gra.rdzen;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import gui.gra.rdzen.gracz.Gracz;
import gui.gra.rdzen.gracz.Plansza;
import gui.gra.rdzen.gracz.RandomMove;

import java.awt.Point;
import java.util.ArrayList;
import java.util.List;

import org.junit.Before;
import org.junit.Test;

public class GraczTest {
	
	@Before
	public void przygotujGracza()
	{
		gracz=utworzGracza();
	}

	@Test
	public void testReciveHits() {
		assertFalse(gracz.przegrana());
		
		ostrzelajWszystkiePunkty(gracz);
		
		assertTrue(gracz.przegrana());
	}
	@Test
	public void testPartFire()
	{
		assertFalse(gracz.przegrana());
		
		ostrzelajCzesciowo(gracz);
		
		assertFalse(gracz.przegrana());
	}
	
	@Test
	public void testSimulateGame()
	{
		gracz2=utworzGracza();
		assertFalse(gracz.przegrana());
		assertFalse(gracz2.przegrana());
		while(!(gracz.przegrana()||gracz.przegrana()))
		{
		
			gracz.reciveHit(gracz2.getNextMove());
			gracz2.reciveHit(gracz.getNextMove());
		}
		
		assertTrue(gracz2.przegrana()||gracz.przegrana());
	}
	@Test
	public void testGetNextMove()
	{
		List<Point> ostrzelane=new ArrayList<Point>();
		while(ostrzelane.size()!=100)
		{
			ostrzelane.add(gracz.getNextMove());
		}
		
		
		
	}
	private void ostrzelajCzesciowo(Gracz gamer)
	{
		for(int i=0;i<5;++i)
		{
			for(int j=0;j<5;++j)
			{
				gamer.reciveHit(new Point(i,j));
			}
		}
	}
	
	private Gracz utworzGracza()
	{
		Gracz gamer=new Gracz();
		gamer.setMove(new RandomMove());
		Plansza plansza=new Plansza();
		plansza.losujPlansze();
		gamer.setPlansza(plansza);
		return gamer;
		
	}
	
	
	
	
	private void ostrzelajWszystkiePunkty(Gracz gamer)
	{
		for(int i=0;i<10;++i)
		{
			for(int j=0;j<10;++j)
			{
				gamer.reciveHit(new Point(i,j));
			}
		}
	}
	
	
	
	Gracz gracz;
	Gracz gracz2;

}
