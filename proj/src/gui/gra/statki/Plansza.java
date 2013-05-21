package gui.gra.statki;

import gui.gra.wyjatki.BadCoordinateException;
import gui.gra.wyjatki.BadPositionException;
import gui.gra.wyjatki.LimitException;

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
	public void addShip(Point poz,int i,int x) throws BadPositionException, LimitException
	{
		
		Statek statek=stocznia.zwodujStetek(poz,i,x);
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
	public Point zamienWspolrzedne(String[] poz)throws BadCoordinateException
	{
		if(poz.length!=2)throw new BadCoordinateException();
		int x=Integer.valueOf(poz[0]);
		int y=Integer.valueOf(poz[1]);
		return new Point(x,y);
		
	}
	
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
	
	
	private List<Statek> statki=new ArrayList<Statek>();
	private StatekFactory stocznia=new StatekFactory(1,2,3,4);
	

}
