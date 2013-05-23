package gui.gra.rdzen;

import gui.gra.rdzen.wyjatki.BadCoordinateException;
import gui.gra.rdzen.wyjatki.BadPositionException;
import gui.gra.rdzen.wyjatki.LimitException;

import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.util.List;

/**
 * @author wemstar
 * klasa reprezentuje plansza dla graczy
 */
/**
 * @author wemstar
 *
 */
public class Plansza  {
	
	

	/**
	 * dodaje statki do planszy
	 * @param poz pozycja statku
	 * @param i ilosc masztow
	 * @param x kirunek statku
	 * @throws BadPositionException
	 * @throws LimitException
	 */
	public void addShip(Point poz,int maszty,int kierunek) throws BadPositionException, LimitException
	{
		
		Statek statek=stocznia.zwodujStetek(poz,maszty,kierunek);
		if(!isValidPosition(statek))throw new BadPositionException(poz);
		statki.add(statek);
		
	}
	
	/**
	 * sprawdza kolizje statku ze statkami na planszy
	 * @param statek 
	 * @return
	 */
	public boolean isValidPosition(Statek statek)
	{
		for(Statek stat:statki)
		{
			for(Point punkt:stat.getPozycja().keySet())
			{
				for(Point punkt2: statek.getPozycja().keySet())
				{
					if(punkt.distance(punkt2)<2)return false;
				}
			}
		}
		return true;
	}
	
	/**
	 * zamienia wspolrzedna na punkt
	 * @param poz
	 * @return
	 * @throws BadCoordinateException
	 */
	
	
	/**
	 * sprawdza czy statek z planszy został trafiony
	 * @param punkt
	 * @return
	 */
	public boolean isHitShip(Point punkt)
	{
		for(Statek statek:statki)
		{
			if(statek.isHit(punkt))return true;
		}
		return false;
	}
	
	public boolean isLoser() {
		for(Statek statek:statki)
		{
			if(!statek.isDestroyed())return false;
			
		}
		
		return true;
	}
	public void  losujPlansze()
	{
		for(int i=1;i<5;++i)
		{
			createShip(i);
		}
		
	}
	
	
	private void createShip(int i) {
		while(stocznia.getLimit(i)>0)
		{
			try {
				addShip(new Point(rand.nextInt(10),rand.nextInt(10)),i,rand.nextInt(2));
			} catch (BadPositionException e) {
				// TODO Auto-generated catch block
				e.getMessage();
			} catch (LimitException e) {
				// TODO Auto-generated catch block
				e.getMessage();
			}
		}
		
	}


	private List<Statek> statki=new ArrayList<Statek>();
	private StatekFactory stocznia=new StatekFactory(1,2,3,4);
	private Random rand=new Random();

	
	

}
